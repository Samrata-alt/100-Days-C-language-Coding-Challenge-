/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled*/
#include <stdio.h>
int main(){
    int l;
    //Input
    printf("Enter late days:");
    scanf("%d",&l);

    //Calculating fine for library
    if(l>0 & l<=5){           //First 5 days
        int s=2*l;
        printf("Your fine total is %d",s);
    }
    else if(l>5 & l<=10){       //Next 5 days
        int s=4*l;
        printf("Your fine total is %d",s);
    }
    else if(l>10 & l<=30){       //Next 20 days
        int s=6*l;
        printf("Your fine total is %d",s);
    }
    else{                        //After 30 days
        printf("Membership cancelled");
    }
    return 0;
    
}