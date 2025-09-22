//Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main(){
    int num,first,last,temp,count=0,power=1;

    printf("Enter a number: ");
    scanf("%d", &num);

    last=num%10; // Get last digit

    temp=num;
    while(temp>=10){
        temp=temp/10; // Get first digit
        power=power*10; // Multiply power by 10 each time
        count++;
    }
    first = temp;

    // Remove first digit
    int middle=num%power;
    middle=middle/10;

    // Swap and rebuild number
    int newNum=last*power+middle*10+first;

    printf("Number after swapping first and last digit: %d\n", newNum);

    return 0;
}