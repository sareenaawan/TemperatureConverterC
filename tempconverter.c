#include <stdio.h>
#include <ctype.h>
int main(){

char unit,unit_c, unit_f, unit_k;
float temp;

printf("Is the temperature in Fahrenheit, Celsius, or Kelvin? (Type F, C, or K) ");
scanf ("%c", &unit);
unit= toupper(unit);

if (unit=='C')
{
    printf("\nWould you like to convert to Fahrenheit or Kelvin? ");
    scanf("%*c", &unit_c);
    unit_c= getchar();
    unit_c=toupper(unit_c);

        if (unit_c =='F')
        {
            printf("\nWhat is the temperature? ");
            scanf("%f", &temp);
            temp= temp*9/5+32;

            printf("\nThe temperature in Fahrenheit is %.2f: ", temp);
        }

        else if (unit_c=='K')
        {

            printf("\nWhat is the temperature? ");
            scanf("%f", &temp);

            temp= temp+273.15;

            printf("\nThe temperature in Kelvin is %.2f: ", temp);
        }
         else{
                printf("\nThis is not a valid unit!");
            }

        }


else if (unit=='F')
{

    printf("\nWould you like to convert to Celsius or Kelvin? ");
    scanf("%*c", &unit_f);
    unit_f= getchar();
    unit_f=toupper(unit_f);

        if (unit_f =='C')
        {
            printf("\nWhat is the temperature? ");
            scanf("%f", &temp);
            temp= (temp-32)*5/9;

            printf("\nThe temperature in Celsius is %.2f: ", temp);
        }

        else if (unit_f=='K')
        {

printf("\nWhat is the temperature? ");
            scanf("%f", &temp);

            temp= (temp-32)*5/9+273.15;

            printf("\nThe temperature in Kelvin is %.2f: ", temp);
        }
         else{
                printf("\nThis is not a valid unit!");
            }

        }


else if (unit=='K')
{

    printf("\nWould you like to convert to Celsius or Fahrenheit? ");
    scanf("%*c", &unit_k);
    unit_k= getchar();
    unit_k=toupper(unit_k);

        if (unit_k =='C')
        {
            printf("\nWhat is the temperature? ");
            scanf("%f", &temp);
            temp= temp-273.15;

            printf("\nThe temperature in Celsius is %.2f: ", temp);
        }

        else if (unit_k=='F')
        {

printf("\nWhat is the temperature? ");
            scanf("%f", &temp);

            temp= (temp-273.15)*9/5+32;

            printf("\nThe temperature in Fahrenheit is %.2f: ", temp);
        }
         else{
                printf("\nThis is not a valid unit!");
            }

        }


else{

    printf("\nThis is not a valid unit!");
}


    return 0;
}
