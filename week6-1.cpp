#include<stdio.h>
int main()
{
char str[50];
char* ptr;
ptr = str;
printf("Enter = ");
scanf("%s",str);
while(*ptr != '\0') ptr++;
ptr--;
printf("reverse = ");
while(ptr >= str)
{
    printf("%c",*ptr);
    ptr--;
}
    return 0;
}