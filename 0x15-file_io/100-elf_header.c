#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define ERR_EXIT(msg) do { fprintf(stderr, "%s\n", msg); exit(98); } while (0)

int main(int argc, char *argv[])
{
    if (argc != 2) {
        ERR_EXIT("Usage: elf_header elf_filename");
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        ERR_EXIT("Failed to open file");
    }

    // Read and check ELF magic number
    char magic[EI_NIDENT];
    if (read(fd, magic, EI_NIDENT) != EI_NIDENT ||
        magic[EI_MAG0] != ELFMAG0 || magic[EI_MAG1] != ELFMAG1 ||
        magic[EI_MAG2] != ELFMAG2 || magic[EI_MAG3] != ELFMAG3) {
        ERR_EXIT("Not an ELF file");
    }

    // Read and check ELF class (32-bit or 64-bit)
    int elf_class = magic[EI_CLASS];
    if (elf_class != ELFCLASS32 && elf_class != ELFCLASS64) {
        ERR_EXIT("Invalid ELF class");
    }

    // Set file offset to start of ELF header
    if (lseek(fd, 0, SEEK_SET) != 0) {
        ERR_EXIT("Failed to set file offset");
    }

    // Read and interpret ELF header
    Elf32_Ehdr ehdr32;
    Elf64_Ehdr ehdr64;
    if (elf_class == ELFCLASS32) {
        if (read(fd, &ehdr32, sizeof(ehdr32)) != sizeof(ehdr32)) {
            ERR_EXIT("Failed to read ELF header");
        }
        printf("Magic:   %02x %02x %02x %02x\n", magic[EI_MAG0], magic[EI_MAG1], magic[EI_MAG2], magic[EI_MAG3]);
        printf("Class:   ELF32\n");
        printf("Data:    %s\n", magic[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
                                 magic[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
                                 "Invalid data encoding");
        printf("Version: %d\n", magic[EI_VERSION]);
        printf("OS/ABI:  %d\n", ehdr32.e_ident[EI_OSABI]);
        printf("ABI Version: %d\n", ehdr32.e_ident[EI_ABIVERSION]);
        printf("Type:    %d\n", ehdr32.e_type);
        printf("Entry point address: %#x\n", ehdr32.e_entry);
    } else {
        if (read(fd, &ehdr64, sizeof(ehdr64)) != sizeof(ehdr64)) {
            ERR_EXIT("Failed to read ELF header");
        }
        printf("Magic:   %02x %02x %02x %02x\n", magic[EI_MAG0], magic[EI_MAG1], magic[EI_MAG2], magic[EI_MAG3]);
        printf("Class:   ELF64\n");
        printf("Data:    %s\n", magic[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
                                 magic[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
                                 "Invalid data encoding");
        printf("Version: %d\n", magic[EI
