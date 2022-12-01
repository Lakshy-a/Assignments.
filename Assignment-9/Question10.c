// program to find all roots of a quadratic equation using switch case
 #include<stdio.h>
 #include<math.h>
 int main()
 {
     int a,b,c;
     float x1,x2,D,img;

     printf("Enter the value of a,b,c \n");
     scanf("%d%d%d",&a,&b,&c);

     D = b*b - 4*a*c ;

     switch(D>0){

 case 1:
     x1 = (-b + sqrt(D))/(2*a);
     x2 = (-b - sqrt(D))/(2*a);
     printf("Roots are real and distinct : %0.2f and %0.2f",x1,x2);
     break;

 case 0:
    switch(D==0){

case 1:
    x1 = x2 = -b / (2*a);
    printf("Roots are real and equal : %0.2f and %0.2f",x1,x2);
    break;

case 0:
    x1 = x2 = -b/(2*a);
    img = sqrt(-D)/(2*a);
    printf("Roots are imaginary : %0.2f + i%.2f and %0.2f - i%.2f",x1,img,x2,img);
    break;

    }
    }
     return 0;
 }
