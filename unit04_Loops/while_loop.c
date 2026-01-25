// Write a program that:

// Asks for a number n
// Prints numbers from 1 to n using while


#include <stdio.h>

int main(){
    
    int i = 1;
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n){
        printf("%d\n",i);
        i++;
    }

    return 0;
  

}