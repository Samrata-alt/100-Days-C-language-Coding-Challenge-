//Find the sum of array elements.
#include <stdio.h>
int main(){
    int i,s,a[50];
    int b=0;
    //Input value for loop from user
    printf("Enter value for loop:");
    scanf("%d",&s);
    //Takes value from user for array
    for(i=0;i<s;i++){
            printf("Enter a element:");
            scanf("%d",&a[i]);
    }
    //Addition of array elements
    for(i=0;i<s;i++){
            b+=a[i];
    }
    printf("%d ",b);
    return 0;

}
