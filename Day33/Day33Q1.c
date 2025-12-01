//Search in a sorted array using binary search.

#include <stdio.h>
int main(){
    int i,c=0,s,k,a[50];
    //Input value for loop from user
    printf("Enter value for loop range:");
    scanf("%d",&s);
    //Takes value from user for first array
    for(i=0;i<s;i++){
        printf("Enter a element:");
        scanf("%d",&a[i]);
    }
    int low=0,f=0,high=s-1,mid;
    printf("Enter value to be searched:");
    scanf("%d",&k);
    //Binary search in array
    while(high>low){
        mid=(high+low)/2;
        if(a[mid]==k){
            f=1;
            printf("Found at index:%d",mid);
            break;
        }
        else if(a[mid]>k){
            high=mid-1;
        }
        else{
            low=mid++;
        }
    }
    return 0;
}