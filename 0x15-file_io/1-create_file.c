#include "main.h"
/**
 * create_file -creates an array of chars
 * @text_content: string to write to the file
 * @filename: name of the file to create
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int opened, wrtn, len = 0;

if (filename == NULL)
{
return (-1);
}

if (text_content != NULL)
{
for (len = 0; text_content[len];)
{
len++;
}
}

opened = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wrtn = write(opened, text_content, len);

if (opened == -1 || wrtn == -1)
{
return (-1);
}

close(opened);

return (1);
}
