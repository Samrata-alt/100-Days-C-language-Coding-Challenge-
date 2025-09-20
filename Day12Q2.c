/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
#include <stdio.h>
int main(){
    int u;
    //Input from user 
    printf("Enter Units consumed:");
    scanf("%d",&u);

    //Calculating Electricity Bill
    if(u>0 & u<=100){           
        int s=5*u;
        printf("Bill: %d",s);
    }
    else if(u>100 & u<=200){       
        int s=7*u;
        printf("Bill: %d",s);
    }
    else if(u>200 & u<=300){       
        int s=10*u;
        printf("Bill: %d",s);
    }
    else if(u>300){                       
        int s=12*u;
        printf("Bill: %d",s); 
    }
    else{
        printf("Problem occured please try again!");
    }
    return 0;
    
}