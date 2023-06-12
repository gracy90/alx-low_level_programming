#include "main.h"

/**
 * read_textfile - Reads a textfile and prints to std out
 * @filename: the file being read
 * @letters:  number of letters to read
 * Return: number of letters read and printed or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wr == -1 || rd != wr)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(op);

	return (wr);
}
