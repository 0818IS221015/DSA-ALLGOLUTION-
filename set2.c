//2. Write a program that takes 5 integers as input from the user and print Max of all the numbers./

#include <stdio.h>

int main() {
    int numbers[5];  
    int max;         

  
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];

  
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

  
    printf("The maximum number is: %d\n", max);

    return 0;  
}


