#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    char hello_world[] = "Hello World!";

    char *rand_hello_world = calloc(strlen(hello_world) + 1, sizeof(char));

    int i = 0;
    while(1)
    {
        if(hello_world[i] == '\0')
            break;

        rand_hello_world[i] = rand() % 255;

        printf("%s\n", rand_hello_world);

        if(rand_hello_world[i] == hello_world[i])
            i++;
    }

    free(rand_hello_world);

    return 0;
}
