//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main(){
    float p,l,sp,cp;
    float profit,loss;
    //Input
    printf("Enter the selling price:");
    scanf("%d",&sp);
    printf("Enter the cost price:");
    scanf("%d",&cp);

    //Calculating loss & profit 
    l=cp-sp;     //loss
    p=sp-cp;     //profit

    //condition to check the profit or loss
    if(sp>cp){
        profit=(p/cp)*100;
        printf("Profit %.2f",profit);
    }
    else if(cp>sp){
        loss=(l/cp)*100;
        printf("Loss %.2f",loss);
    }
    else{
        printf("No profit No loss");
    }
    return 0;
}