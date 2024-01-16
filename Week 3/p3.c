// Prefix Code
#include <stdio.h>
int main() {
    float radius;
    float pi = 22.0/7.0;
    scanf("%f", &radius);
	// Write solution code below
    float volume;
    float r = (4.0)/(3.0);
    volume = r * pi * radius * radius * radius;
printf("%.2f", volume);    
    return 0;
}