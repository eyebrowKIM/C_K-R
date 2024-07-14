#include <stdio.h>

// int power(int base, int n)
// {
//     int i, p;

//     p = 1;
//     for (i = 1; i <= n; i++)
//         p = p * base;
//     return p;
// }


// int main(){
//     int i;

//     for (i = 0; i < 10; i++)
//     printf("%d %d %d \n" ,i, power(2, i), power(-3, i));
//     return 0;
// }

// Exercise 1-15 : Rewrite the temperature conversion program of Section 1.2 to use a function for conversion
float temperature_conversion(float fahr)
{
    float celsius = 5 * (fahr - 32) / 9;
    return celsius;
}

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = temperature_conversion(fahr);
        printf("%f\t%f\n", fahr, celsius);
        fahr = fahr + step;
    }
}