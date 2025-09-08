/*Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212
*/
#include <stdio.h> 
float main(){
    float f,c;
    printf("Enter the degree celcius:");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("The fahrenheit temperature:%.2f",f);
    return 0;
    

}