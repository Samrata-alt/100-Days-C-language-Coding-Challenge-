//Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main(){
    int i,s,a[50];
    //Input value for loop from user
    printf("Enter value for loop range:");
    scanf("%d",&s);
    //Takes value from user for first array
    for(i=0;i<s;i++){
        printf("Enter a element:");
        scanf("%d",&a[i]);
    }
    //Store the occurance & max occurance of digit with max value which occured maximun times
    int occurance=0;
    int max_occur=0;
    int max_value=0;
    //Counts maximun occured digit
    for(i=0;i<s;i++){
        occurance=0;
        for(int j=0;j<s;j++){
            if(a[i]==a[j]){
                occurance++;           //Increment the occurance if a digit is repeated
                }
        }
        if(occurance>max_occur){    //Checks if occurance is > max occurance
            max_occur=occurance;
            max_value=a[i];
        }
    }
    printf("Maximun occured integer:%d",max_value);
    return 0;
}
