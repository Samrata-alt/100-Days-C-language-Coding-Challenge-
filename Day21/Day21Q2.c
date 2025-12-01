//Write a program to check if a number is a perfect number.
#include <stdio.h>
int main(){
    int i,t,s=0;
    //Input from user
    printf("Enter the number:");
    scanf("%d",&t);

    //Check wheater the number is prefect number or not 
    for(i=1;i<t;i++){
        if(t%i==0){
            s=s+i;       //Adds the factors 
        }
    }
    if(t==s){                    //check if t and s(sum) is equal
        printf("Perfect number");
    }
    else{
        printf("Not perfect number");
    }
    return 0;
}