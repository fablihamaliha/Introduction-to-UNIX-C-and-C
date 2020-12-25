#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>
#include<ctype.h>
#include<stdbool.h>
#include "assign2funcs.h"


/*
   This function removes the spaces from a string if any
   INPUT: string of characters
*/

void remove_spaces(char* s) {
    const char* d = s;
    do {
        while (*d == ' ') {
            ++d;
        }
    } while (*s++ = *d++);

}

/*
  This function checks the vector if there are any BAD INPUT
    INPUT: double array and size of the vector
*/
int checkBadInput(int v[], int size)
{
    if (size >=1 && size <=100)
    {
        int prev_element = -1;
        for(int i=0; i<size; i++)
        {
                if (prev_element < v[i])
                {
                    prev_element = v[i];
                    continue;
                }
                else
                {
                    return 0;
                }
        }
        return 1;
    }
    else
    {
        return 0;
    }
}


bool valueinField(char v[], int size, int val)
{
    // printf("v and val: %c %d\n", v[0], size);
    for(int i=0; i <size; i++)
    {
        //printf("v and val: %c %d\n", v[i], val);
        // int x = v[i] - '0';
        if ((v[i] - '0') == val)
        {
            return true;
        }

    }

    return false;

}

void exitcall(char a[], int b){
    printf("%s: specify input_delimiter output_delimiter and 1-%d fields in order \n", a, b);
    exit(0);
}





























