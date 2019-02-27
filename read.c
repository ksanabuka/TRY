
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

//reading from file;

// int main(void)
// {

// int fd, bytesread;
// int size = 100;

// char buf[size] = {'\0'};


// fd = open("Gnl2.txt", O_RDONLY);


// if (fd < 0)
// {
//     perror("Error");
//     exit(1);
// }

// int i = 0;
// char c;

// while (1)
// {
//     bytesread = read(fd, &c, 1); 
//     printf("%d - 1\n", i);


//     if (c == '\n' || bytesread < 1 || i > size - 1)
//     {
//     	printf("%d - 2\n", i);
//         break ;
//     }

//     buf[i] = c;
//     printf("%d - 3\n", i);

//     i++;
// }

// buf[size - 1] = '\0';
// printf("%s\n %d\n", buf, bytesread);
// return 0;

// }

// reading from stdin

int main(void)
{

int fd, bytesread;

char buf[100] = {'\0'};


fd = STDOUT_FILENO;

int i = 0;
char c;

while (1)
{
    bytesread = read(fd, &c, 1); 
    printf("bytesrad - %d, %d - 1\n", bytesread, i);


    if (bytesread < 1 || i > 99)
    {
    	printf("bytesrad - %d, %d - 2\n", bytesread, i);
        break ;
    }

    buf[i] = c;
    printf("bytesrad - %d, %d - 3\n", bytesread, i);

    i++;
}

buf[99] = '\0';
printf("%s\n %d\n", buf, bytesread);
return 0;

}


