/*
int - whole nos. (4 bytes) %d
float - single precision nos. (4 bytes) %f
double - double precision nos. (8 bytes) %lf
char - character (1 byte) %c
*/
#include<stdio.h>

int main(){
    int num1 = 5;
    int num2 = 10;
    printf("the sum is %d + %d = %d \n", num1, num2, num1+num2);
    printf("the difference is %d - %d = %d \n", num1, num2, num1-num2);
    printf("the product is %d * %d = %d \n", num1, num2, num1*num2);
    printf("the division is %d / %d = %d \n", num1, num2, num1/num2);
    printf("the modulus is %d %% %d = %d \n", num1, num2, num1%num2);

    /*printf("Enter 2 numbers : ");
    scanf("%d %d", num1, num2);
    */
}