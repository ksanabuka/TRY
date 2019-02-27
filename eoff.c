#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
 

int main(void)

{


int fd, count;

char buf[100] = {'\0'};


fd = open("Gnl2.txt", O_RDONLY);

if (fd < 0)
{
    perror("Error");
    exit(1);
}

 

// get character from standard input store in variable count

count = read(fd, &count, 1);

 

// while the End Of File is not encountered...
int i = 0;
while(count != EOF)

{

// put character on the standard output

	buf[i] = count;
    printf("%d - 3\n", i);

    i++;


// carry on getting character from the standard input

count = read(fd, &count, 1);

}

return 0;

}