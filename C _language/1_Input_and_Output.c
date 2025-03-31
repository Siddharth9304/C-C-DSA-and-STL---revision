#include <stdio.h>

int main()
{
    // 1.
    printf("Hello Students");

    // 2.
    printf("Hello\nSyudents"); 

    // 3.
    printf("\"MySirG\"");

    // 4. 
    printf("\\n");

    // 5. 
    printf("\\r");

    // 6.
    printf("\"Teacher's Day\"");

    // 7. 
    int a , b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Sum of given two numbers is : %d", a+b);

    // 8.
    printf("%d", a*a);

    // 9.
    printf("area of rectangle of length %d and breadth %d = %d", a,b,a*b);

    // 10.
    printf("area of circle of radius %d = %f", a, 3.14*a*a);

    return 0;


}