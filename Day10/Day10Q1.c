//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main(){
    int a,b,c;           
    printf("Enter side 1 of the triangle:");        
    scanf("%d",&a);        
    printf("Enter side 2 of the triangle:");
    scanf("%d",&b);        
    printf("Enter side 3 of the triangle:");
    scanf("%d",&c);        
    if (a+b>c && b+c>a && a+c>b){      //checking if the trianlge is valid or not
        if (a==b && b==c){             //to check for equilateral triangle
            printf("it is a equi triangle");
        }
        else if ((a == b)||(b==c)||(c == a)){         //to check for isoceles triangle
            printf("it is a isoceles triangle");
        }
        else{           //if nont then scalene triangle
            printf("it is a scalene traingle");
        }
    }
    else{       //if not a valid triangle
        printf("It is not a valid triangle");
    }

    return 0;
}
