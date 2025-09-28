#include<stdio.h>
int main()
{
float celsius,fahrenheit;
printf("Enter fahrenhheit:",&fahrenheit);
scanf("%f",&fahrenheit);
celsius=(fahrenheit-32)*5 / 9 ;
printf("Temperature in Celsius:%f",celsius);
    return 0;
}