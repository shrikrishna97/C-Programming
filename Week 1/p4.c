// Write a C program to calculate the sum of the first n odd numbers. 
// The program must take an integer input from the user in a variable n, 
// and calculate the sum of the first n odd numbers. 
// The program must also print the integer output as shown below.

// Sample Input
// 5
// Output
// 25

#include <stdio.h>

int main(){
    int in;
    scanf("%d",&in);
    int sum = 0;
    int c = 0;
    while(in != c){
    for (int i=1;c!=in;i++){
        
        if (i%2!=0){
            sum = sum+i;
            c= c+ 1;
        }
    }
    }
    printf("%d\n",sum);
    return 0;
}