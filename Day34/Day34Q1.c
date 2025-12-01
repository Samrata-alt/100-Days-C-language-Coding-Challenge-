//Insert an element in an array at a given position.

#include <stdio.h>
int main(){
    int i,s,t,a[50];
    //Input value for loop from user
    printf("Enter value for loop range:");
    scanf("%d",&s);
    //Takes value from user for array
    for(i=0;i<s;i++){
        printf("Enter a element:");
        scanf("%d",&a[i]);
    }
    int b,pos;
    //Input the position where no. should insert
    printf("Enter the position index:");
    scanf("%d",&b);
    printf("Enter the number to insert:");
    scanf("%d",&t);
    // Find position to insert
    for(pos=0;pos<s;pos++){
        if(a[pos]>b){
            break;
        }
    }
    // Shift elements to the right
    for(i=s;i>pos;i--){
        a[i]=a[i-1];
    }
    // Insert the number
    a[b]=t;
    s++;
    // Print updated array
    printf("Updated sorted array:\n");
    for(i=0;i<s;i++){
        printf("%d ",a[i]);
    }
    return 0;
}