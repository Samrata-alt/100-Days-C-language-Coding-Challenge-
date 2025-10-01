//Delete an element from an array.

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
    // Input position to delete
    printf("Enter position index to delete (0 to %d): ", s - 1);
    scanf("%d", &pos);
    //Validate position
    if(pos<0 || pos >= s){
        printf("Invalid position!\n");
        return 1;
    }
    //Shift elements to the left
    for(i=pos;i<s-1;i++){
        a[i]=a[i+1];
    }
    s--; //Reduce array size

    //Print updated array
    printf("Updated array:\n");
    for(i=0;i<s;i++){
        printf("%d ",a[i]);
    }
    return 0;
}