//Merge two arrays.

#include <stdio.h>
int main(){
    int i,s,t,c,a[50],b[50];
    //Input value for loop from user
    printf("Enter value for loop range:");
    scanf("%d",&s);
    c=s;
    //Takes value from user for first array
    for(i=0;i<s;i++){
        printf("Enter a element:");
        scanf("%d",&a[i]);
    }
    //Input value for loop2 from user
    printf("Enter value for loop range:");
    scanf("%d",&t);
    //Takes value from user for second array
    for(i=0;i<t;i++){
        printf("Enter a element:");
        scanf("%d",&b[i]);
    for(i=0;i<t;i++){
        a[s+i]=b[i];
    }
    c=s+t;   
    //Prints the elements of array
    for(i=0;i<c;i++){
            printf("%d ",a[i]);
    }
    return 0;
}