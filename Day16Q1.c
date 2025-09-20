//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main(){
    int i,rev=0,rem,place=1,t,bit;
    //Input the value from user
    printf("Enter the value:");
    scanf("%d",&t);
    //Binary representation
    while(t!=0){
        bit=t%2;                //Gives remainder after dividing by 2
        rev=rev+bit*place;      //Adds  the remainder in the rev
        place=place*10;         //Position the binary correctly 
        t=t/2;                  //Divides by 2
    }
    printf("Binary representation:%d",rev);
    return 0;
}