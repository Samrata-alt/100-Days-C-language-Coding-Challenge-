/*Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
float main(){
    int r,area,cirum;
    float pie;
    pie=3.14;
    printf("Enter the radius:");
    scanf("%d",&r);
    area=pie*r*r;
    cirum=2*pie*r;
    printf("Area of circle is %d\n",area);
    printf("Circumference of a circle %d\n",cirum);
    return 0;



}