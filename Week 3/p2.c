// You are given float values principal, rate, and time. 
// Calculate the simple interest and 
// store the result in the float variable simpleInterest.

// Complete the program as per the given problem statement.
// Sample Input
// 1000 5 10
// Output
// 500.00
#include <stdio.h>
#include <math.h>
int main(){
float principal,rate, time;
scanf("%f%f%f",&principal,&rate,&time);
float simpleInterest = (principal * rate * time)/100;
printf("%.2f",simpleInterest);
return 0;
}

