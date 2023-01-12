#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

char *wordecoder(char arr[]);

int main()
{
    char message[MAX], *caller;

    printf("The Coded Message Is: ");
    scanf("%[^\n]s", message);
    // printf("%s\n", message);

    printf("The Decoded Message is: ");
    //display the string here
    wordecoder(message);
    caller = wordecoder(message);
    printf("%s !!", caller);
    return 0;
}

char *wordecoder(char arr[]) {
    char *new_arr = (char*)malloc(sizeof(char)* MAX);
    char word1[5] = "ABCDI";
    char word2[5] = "NOPQE";
    // printf("\n%d\n", strlen(arr) - 1);
    //for loop that will place all of the contents into new_arr;

    for (int i = 0; i <= strlen(arr) - 1; i++) {
        // printf("%c\n", arr[i]);
        new_arr[i] = arr[i];
        // printf("%c\n", new_arr[i]);
    }

    // printf("\n%s\n", new_arr);

    //for loop that will replace the words
    for (int i = 0; i <= strlen(arr) - 1; i++) {
        for (int j = 0; j != strlen(word1); j++) {
            if (arr[i] == word1[j]) 
            {
                new_arr[i] = word2[j];
                // printf("%c-", word1[j]);
                // printf("%c ", arr[i]);
                break;
            } 
            else if (arr[i] == word2[j]) 
            {
                new_arr[i] = word1[j];
                // printf("%c-", word2[j]);
                // printf("%c ", arr[i]);
                break;
            }
        }
        // printf("%c ", new_arr[i]);
    }

    return new_arr;
}