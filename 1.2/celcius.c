#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    float upperBound, lowerBound, step;

    upperBound = 100.0;
    lowerBound = 0.0;
    step = 10.0;

    printf("Celsius-Fahrenheit table\n");

    celsius = lowerBound;
    while (celsius <= upperBound)
    {
        fahrenheit = celsius / (5.0 / 9.0) + 32.0;
        printf("%3.0f %6.2f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }
    
    return 0;
}