//Insert an element in a sorted array at the appropriate position.

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
    //Sorts the array using bubble sort
    for(i=0;i<s-1;i++){
        for(int j=0;j<s-1-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];        
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    int b,pos;
    //Input for value to be inserted
    printf("Enter value to be inserted:");
    scanf("%d",&b);
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
    a[pos]=b;
    s++;
    // Print updated array
    printf("Updated sorted array:\n");
    for(i=0;i<s;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

    