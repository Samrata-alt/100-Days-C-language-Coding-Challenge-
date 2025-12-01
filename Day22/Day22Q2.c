//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
float main(){
    float a,num=1,deno=2;
    float sum=1;
    //inputting the number and storing it in a
    printf("Enter the range:");     
    scanf("%f",&a);     
    //loop till the range entered
    for (int i=1;i<=a;i++){     
        num+=2;       //in the given series numberator and denominator boht increase by 2
        deno+=2;
        sum+=num/deno;        //calculating the sum
    }

    printf("Sum of the series= %.2f",sum);        //printing the sum of the series
 
    
    return 0;
}