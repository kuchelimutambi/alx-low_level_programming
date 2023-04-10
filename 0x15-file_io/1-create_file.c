#include "main.h"

/**
 * create_file - creates file with permissions rw------- and writes content in
 * if file already exists, don't change permissions and just truncate it
 * @filename: name to give to new file
 * @text_content: writes this content into file
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
    int fd, n_wrote, len = 0;

    if (filename == NULL)
        return (-1);

    /* open file for writing, truncating it if it exists */
    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
        len = _strlen(text_content);

    /* write content if provided */
    if (len > 0)
    {
        n_wrote = write(fd, text_content, len);
        if (n_wrote == -1 || n_wrote != len)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
