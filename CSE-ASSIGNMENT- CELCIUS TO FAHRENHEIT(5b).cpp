#include<stdio.h>
int main()
{
	float Fahrenheit,Celsius;
	printf("\n\t*TEMPERATURE CHANGING FROM CELSIUS TO FAHERENHEIT*\n");

	printf("\nENTER CELSIUS TEMPERATURE : ");
	scanf("%f",&Celsius);

	Fahrenheit = (Celsius*9/5)+32;

	printf("\nAFTER CHANGING FAHERENHEIT TEMPERATURE = %f",Fahrenheit);
	return 0;
}
