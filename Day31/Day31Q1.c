//Search for an element in an array using linear search.

#include <stdio.h>
int main(){
    int i,b,d=0,s,a[50];
    //Input value for loop from user
    printf("Enter value for loop range:");
    scanf("%d",&s);
    //Takes value from user for array
    for(i=0;i<s;i++){
        printf("Enter a element:");
        scanf("%d",&a[i]);
    }
    //Input of value to be searched
    printf("Enter value to be searched:");
    scanf("%d",&b);
    //Linear search for b
    for(i=0;i<s-1;i++){
        if(a[i]==b){
            d=1;
            printf("Found at index:%d",i);
            break;
        }
    }
    if(d==0){
        printf("Value not found!");
    }
    return 0;
}