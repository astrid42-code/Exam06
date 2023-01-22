#include "main.c"

int ft_fatal()
{
    write(2, "Fatal error\n", 12);
    // pener a close(fd);
    exit(1);
}


int main(int ac, char *av[])
{
	if (ac != 2)
	{
		write(2, "Wrong number of arguments\n", 26);
		exit(1);
	}

	int port = atoi(av[1]);
	int sfd;
	sfd = create(port);
	return (0);
}
