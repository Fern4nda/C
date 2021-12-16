//Questão 01.B


#include <stdio.h> 
#define Fahrenheit(celsius)  (( celsius * 9.0 / 5.0) + 32 )

int main() {

    float far, n ;
     printf("Digite a temperatura em Celsius: ");
     scanf("%f", &n);
    
    far = Fahrenheit(n);
    printf("Fahrenheit: %.2f \n",  far);

    return 0;
}

