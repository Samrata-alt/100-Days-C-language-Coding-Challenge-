//Find the second largest element in an array.

#include <stdio.h>
int main(){
    int i,s,a[50];
    int b=0,t;
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
    //Printd max and min values after sorting
    printf("Maximun number:%d\n",a[s-2]);
    return 0;
}