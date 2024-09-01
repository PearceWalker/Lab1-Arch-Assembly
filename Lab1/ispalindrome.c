#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char userInput[100];
    char cleanedInput[100];
    int cleanedIndex = 0;  

    printf("Enter a string: ");
    fgets(userInput, 100, stdin);

    for (int i = 0; i < strlen(userInput); i++) {
        if (isalpha(userInput[i])) {  
            cleanedInput[cleanedIndex] = tolower(userInput[i]);  
            cleanedIndex++;
        }
    }

    cleanedInput[cleanedIndex] = '\0';

    
    int left = 0;
    int right = cleanedIndex - 1;

    int isPalindrome = 1; 
    while (left < right) {
        if (cleanedInput[left] != cleanedInput[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }


    if (isPalindrome) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
