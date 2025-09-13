/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 

90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/
#include <stdio.h>
int main(){
    float a;        //variable to store the percentage
    printf("Enter your percentage:");
    scanf("%f",&a);     //inputting and storing in a

    if(a>=90){      //conidions
        printf("Grade: A");
    }
    else if (a>=80){
        printf("Grade: B");
    }
    else if (a>=70){
        printf("GRade: C");
    }
    else if (a>=60){
        printf("GRade: D");
    }
    else{
        printf("Fail");
    }
    return 0;
}