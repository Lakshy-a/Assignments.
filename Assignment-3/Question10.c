// program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    float cp,sp,profitp,lossp;
    printf("Enter the Cost Price and the Selling Price : ");
    scanf("%d%d",&cp,&sp);
    if(sp>cp){
        profitp=((sp-cp)/cp)*100;
        printf("Profit Percentage = %0.2f%%",profitp);
    }
    else{
        lossp=((cp-sp)/cp)*100;
        printf("Loss Percentage = %0.2f%%",lossp);
    }
    return 0;
}
