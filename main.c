#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/*----------FUNÇÕES-----------*/

//f(x) = a.x^2+b.x+c
float quadratic(float a, float b, float c, float x){
    float result = (a * x * x) + (b * x) + c;
    return result;
}

//f(x) = sin(x), f(x) = cos(x) e f(x) = tan(x)
float seno(float x){
    float result = sin(x);
    return result;
}

float cosseno(float x){
    float result = cos(x);
    return result;
}

float tangente(float x){
    float result = tan(x);
    return result;
}


int main() {
    int selectMenu;
    printf("\tMENU\n");
    printf("Selecione uma das opcoes abaixo: \n");
    printf("1. f(x) = k\n");
    printf("2. f(x) = a.x+b\n");
    printf("3. f(x) = a.x^2+b.x+c\n");
    printf("4. f(x) = k^x\n");
    printf("5. f(x) = log_k(x)\n");
    printf("6. f(x) = sin(x)\n");
    printf("7. f(x) = cos(x)\n");
    printf("8. f(x) = tg(x)\n");
    printf("0. SAIR\n");
    scanf("%d", &selectMenu);



    return 0;
}
