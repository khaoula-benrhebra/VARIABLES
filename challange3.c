#include <stdio.h>

int main() {
    float T;
    printf("Veuilez entrer la température en degre C : ");
    scanf("%f",&T);
    T=T+273.15 ;
    printf("la temperature en kelvin est : %f",T);
    return 0;
}