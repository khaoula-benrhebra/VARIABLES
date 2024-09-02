#include <stdio.h>

int main() {
    float T;
    printf("Veuilez entrer la température en degre C : ");
    scanf("%f",&T);
    if(T<0)
    printf("  l'état de l'eau à cette température est solide");
    else if (T>=0 && T<100)
    printf("  l'état de l'eau à cette température est Liquide");
    else 
     printf("  l'état de l'eau à cette température est gaz");
   
}