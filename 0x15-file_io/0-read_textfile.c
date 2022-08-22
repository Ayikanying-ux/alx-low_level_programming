#unclude "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to POSIX standard output
 * @filename: is the file to read
 * @letters: number of letters to read and print from file
 * Return: 0 if it fails or actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_check, wcount;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, 0_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	read_check = read(file, buffer, letters);
	if (read_check == -1)
		return (0);
	wcount = write(STDOUT_FILENO, buffer, read_check);
	if (wcount == -1)
		return (0);
	free(buffer);
	close(file);
	return (wcount);
}
