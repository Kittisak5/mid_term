#include <stdio.h>

int main() {
    float Fahren_heit, celsius,Fahren_heittotal;

    
    printf("++++++++++++++++++++++++++++++\n");
    printf(" Program Celcius to Farenheit\n");
    printf("++++++++++++++++++++++++++++++\n");
    printf("Enter celcius temperature : ");
    scanf("%f", &celsius);
    printf("++++++++++++++++++++++++++++++\n");

    
    Fahren_heittotal = (celsius * 9 / 5) + 32;

    
    printf("Fahrenheit is : %.2f\n", Fahren_heittotal);
    printf("++++++++++++++++++++++++++++++\n");

    return 0;
}