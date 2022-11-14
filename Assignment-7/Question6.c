 // program to print all Prime numbers under 100
 #include<stdio.h>
 int main()
 {
     int count=0,i,j;
     for(i=1;i<=100;i++){
        for(j=1;j<=i;j++){
            if(i%j==0)
            {
              count++;
            }
         }
        if(count==2){
               printf("%d ",i);
            }
        else{
            count = 0;
        }
     }
     return 0;
 }
/* int main()
{
    int n,count=0;
    printf("Enter the  number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count=count+1;
        }
    }
    if(count==2)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    return 0;
} */
