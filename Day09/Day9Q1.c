/*Write a program to find the roots of a quadratic equation and categorize them.
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex
*/
#include <stdio.h>
#include <math.h>
float main(){
    float b,a,c;
    float dis, r1, r2 ; 
    printf("Enter the coefficients:");
    scanf("%f %f %f",&a,&b,&c);
    dis=b*b-4*a*c;
    if (dis > 0) {                 // condition for real and different roots
        r1=(-b+sqrt(dis))/(2*a);
        r2=(-b-sqrt(dis))/(2*a);
        printf("Roots are real and different");
        printf("r1 = %.1f and r2 = %.1f", r1, r2);
    }
    else if (dis == 0) {       // condition for real and equal roots
        r1=r2=-b/(2*a);
        printf("Roots are real and equal");
        printf("r1 = r2 = %.1f;", r1);
    }
    else {             // if roots are not real
        printf("Roots are complex");
    }

    return 0;
} 
