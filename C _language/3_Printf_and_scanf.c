// Assignment - 3

#include <stdio.h>

int main(){
    
    char c;
    int d;

    // 1.
    // printf("Enter the character : ");
    // scanf("%c", &c);
    // printf("\nASCII code of %c is %d\n\n", c, (int)c);

    // // 2.
    // printf("Enter the ASCII code to print the corresponding character : ");
    // scanf("%d", &d);
    // printf("\nCharacter corresponding to ASCII code '%d' is %c\n\n", d, (char)d);

    // 3.
    // {
    //     char a, b, c;
    //     printf("Enter 3 characters : ");
    //     scanf("%c%c%c", &a, &b, &c);
    //     printf("\n%c : %d\n%c : %d\n%c : %d\n\n", a, (int)a, b, (int)b, c, (int)c);
    // }

    // 4. 
    int num;
    printf("Enter the number to print it's last digit :");
    scanf("%d", &num);
    printf("\nthe last digit of %d = %d\n\n", num, num%10);

    // 5.
    printf("Enter the number to print without it's last digit :");
    scanf("%d", &num);
    printf("\nthe number %d without it's last digit = %d\n\n", num, num/10);

    return 0;
}