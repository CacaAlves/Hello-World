#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "library.h"

void main()
{
    bool end = false;
    printf("Ajuda:\n\'--help\' ou \'-h\'\n");
    while (!end)
    {
        char command[11];
        scanf("%s", command);
        if (command[1] != '-')
        {
            shortCommandHelloWorld(command[1], &end);
        }
        else
        {
            longCommandHelloWorld(command, &end);
        }
    }
}