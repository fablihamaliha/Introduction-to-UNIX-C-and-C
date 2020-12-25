#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "assign2funcs.h"
#define MAX_LIMIT 100 //define maximum size of the array
#define MAX_LIMIT_DELIMETER 5 //define maximum size of the array


int main(int argc, char *argv[]) {
    int size_field = argc - 3;
    char str[150];
    char str2[150];
    int field[size_field];
    if (size_field > MAX_LIMIT || size_field == 0 || argc<3){
        exitcall(argv[0], MAX_LIMIT);
    }
    while (1) {
        for (int i=3; i<argc; i++){
            if (isdigit(argv[i][0])) {
                field[i - 3] = atoi(argv[i]);
            } else{
                exitcall(argv[0], MAX_LIMIT);
            }
        }
        if (isdigit(argv[1][0]) > 0 || strlen(argv[1]) > 1) {
            exitcall(argv[0], MAX_LIMIT);
        }
        if (isdigit(argv[2][0]) > 0 || strlen(argv[2]) > 1) {
            exitcall(argv[0], MAX_LIMIT);

        }
        int isCorrect = checkBadInput(field, size_field);
        if (isCorrect){
            while(gets(str)){
                char *token;
                int count = 0;
                int len = strlen(str);
                strcpy(str2, str);
                int ind = 0;
                if (str2[ind] == *argv[1]){
                    token="";
                } else{
                    token = strtok(str, argv[1]);
                }
                for (int temp=ind; temp<len; temp++) {
                    if (str2[ind] == *argv[1]) {
                        ind++;
                        break;
                    } else {
                        ind++;
                    }
                }
                int i =1;
                int j =0;
                while( token != NULL ) {
                    count++;
                    if (j == size_field) {
                        break;
                    }
                    if (i == (field[j])) {
                        if (j != 0) {
                            printf("%s", argv[2]);
                        }
                        printf("%s", token);
                        i++;
                        j++;
                    } else {
                        i++;
                    }
                    if (str2[ind] == *argv[1]) {
                        token = "";
                    } else {
                        token = strtok(NULL, argv[1]);
                    }
                    for (int temp = ind; temp < len; temp++) {
                        if (str2[temp] == *argv[1]) {
                            ind++;
                            break;
                        } else {
                            ind++;
                        }
                    }
                }
                if (count+1 == field[size_field-1] && str2[len-1] == *argv[1] && ind == len && j != 0){
                    printf("%s", argv[2]);
                }
                printf("\n");
            }
        } else{
            exitcall(argv[0], MAX_LIMIT);

        }
        return 0;
    }
}