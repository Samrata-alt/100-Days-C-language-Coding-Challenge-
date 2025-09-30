//Count positive, negative, and zero elements in an array

#include <stdio.h>
int main(){
    int i,s,a[50];
    int c=0,c1=0,c2=0;
    //Input value for loop from user
    printf("Enter value for loop:");
    scanf("%d",&s);
    //Takes value from user for array
    for(i=0;i<s;i++){
            scanf("%d",&a[i]);
    }
    //
    for(i=0;i<s;i++){
        if(a[i]>0){
            c+=1;
        }
        else if(a[i]<0){
            c1+=1;
        }
        else{
            c2+=1;
        }
    }
    //Prints the result
    printf("Positive:%d\n",c);
    printf("Negative:%d\n",c1);
    printf("Zero:%d\n",c2);
    return 0;
}
    