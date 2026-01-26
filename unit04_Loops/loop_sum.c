// Program requirements

// Ask for n
// Calculate the sum from 1 to n
// Print the result


#include <stdio.h>

int main(){

    int n;
    int sum = 0;

    printf("Enter n: \n");
    scanf("%d", &n); 

    for (int i= 1; i <= n; i ++){
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);

    return 0;
    
}