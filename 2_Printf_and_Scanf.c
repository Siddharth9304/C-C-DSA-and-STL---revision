// Assignment 2
#include<stdio.h>
int main()
{
    // 1
    int num1,num2,num3;
    printf("ENTER THREE NUMBERS");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("The Average of %d , %d , %d is %f",num1,num2,num3,(num1+num2+num3)/3.0);

    //2
    int radius;
    printf("ENTER THE RADIUS OF A CIRCLE");
    scanf("%d",&radius);
    printf("%f",2*3.14*radius); // 2*Pie*radius // Value of Pie is 3.14

    //3
    int P,R,T;
    printf("GIVE VALUE OF PRINCIPAL , RATE AND TIME");
    scanf("%d %d %d",&P,&R,&T);
    printf("S.I is %f",(P*R*T)/100.0);  // S.I = (P*R*T)/100

    //4 
    int l,b,h;
    printf("ENTER LENGTH , BREATH AND HEIGHT");
    scanf("%d %d %d",&l,&b,&h);
    printf("Volume of Cuboid is  %d",l*b*h); // VOLUME OF CUBOID IS LENGTH*BREATH*HEIGHT

    //5
    int CP,SP;
    float Cost,Sell=0.0;
    printf("ENTER THE COST PRICE AND SELLING PRICE OF BANANAS PER DOZEN"); //1 DOZEN = 12
    scanf("%d %d",&CP,&SP);
    Cost= CP/12.0;
    Sell= SP/12.0;
    printf("The Profit or Loss on selling 25 Bananas is %f",(Sell * 25)-(Cost * 25)); // Profit or Loss on selling 25 bananas

    return 0;

}
