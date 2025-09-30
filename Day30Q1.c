//Count even and odd numbers in an array.

#include <stdio.h>
int main(){
    int i,s,a[50];
    int count=0,count1=0;
    //Input value for loop from user
    printf("Enter value for loop:");
    scanf("%d",&s);
    //Takes value from user for array
    for(i=0;i<s;i++){
            scanf("%d",&a[i]);
    }
    //counts even and odd no. in array
    for(i=0;i<s;i++){
        if(a[i]%2==0){
            count+=1;
        }
        else{
            count1+=1;
        }
    }
    //Prints the result
    printf("Even number count:%d\n",count);
    printf("Odd number count:%d\n",count1);
    return 0;
}
    
    