// Complete the program to calculate the sum of the first n natural numbers. 
// You are given an integer n. Calculate the sum of the first n natural numbers and 
// store the result in the integer variable sum.
// Sample Input
// 5
// Output
// 15
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    for ( int i=0;i <= n;i++){
        sum = sum + i; 
    }
    printf("%d",sum);
    return 0;
}