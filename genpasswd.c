#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void genpass(unsigned short len)
{
    const char chars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '!', '#', '$', '%', '&', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', ']', '^', '_', '`', '{', '|', '}', '~'};
    srand(time(NULL));
    for(unsigned short i = 0; i < len; i++)
    {
	unsigned short pos = rand() % sizeof(chars);
        printf("%c", chars[pos]);
    }
    printf("\n");
}

void main(int argc, char** argv)
{
    const char* usage = "genpasswd [ 1 .. 64 ]\n";
    if(argc != 2)
    {
        printf(usage);
        exit(1);
    }
    else
    {
        unsigned short len = (unsigned short) atoi(argv[1]);
        if(len < 1 || len > 64 )
        {
            printf(usage);
            exit(1);
        }
        else
        {
            genpass(len);
        }
    }
    exit(0);
}
