#include <stdio.h>
#include <float.h>

void task_1();
void task_2();
void task_3();
void task_4();
void task_5();
void task_6();
void task_7();
void task_8();

int main(){
	task_8();
	return 0;
}

void task_1(){
	char a = 126;
	short b = 50000;
	int c = 2500000000;
	long d = 2500000000;
	long long e = 10000000000000000000; 
	float f = 340282346638528859811704183484516925440.0000001111111f;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %ld\n", d);
	printf("e = %lld\n\n", e);
	printf("FLT_MAX = %f\n", FLT_MAX);
	printf("DBL_MAX = %f\n", DBL_MAX);
	printf("LDBL_MAX = %f\n", LDBL_MAX);
	printf("f = %f\n\n", f);
}

void task_2(){
	unsigned char number;
	printf("Enter your number: ");
	scanf("%hhu", &number);
	printf("ASCII code of your number is: %c\n\n", number);
}

void task_3(){
	printf("\a");
  printf("bla-bla\n\n");
}

void task_4(){
	float number;
	printf("Enter floating point number: ");
	scanf("%f", &number);
	printf("fixed poin: %f\n", number);
	printf("exponential notation: %e\n", number);
	printf("Binary exponential notation: %a\n\n", number);
}

void task_5(){
	float years;
	float coeff = 3.156e7;
	printf("Enter number of years: ");
	scanf("%f", &years);
	printf("%f year equivalent %f in seconds\n\n", years, years * coeff);
}

void task_6(){
	double molecular_mass = 3.0e-23;
	double quart = 950;
	double volume_of_water;
	printf("Enter volume of water in quarts: ");
	scanf("%f", &volume_of_water);
	printf("Amount of water in molecules: %f\n\n", molecular_mass*quart*volume_of_water);
}

void task_7(){
	float cm_in_inch = 2.54;
	float height;
	printf("Enter your height in inch: ");
	scanf("%f", &height);
	printf("Height in cm is: %f\n\n", cm_in_inch*height);
}

void task_8(){
	float cups;
	printf("Enter number of cups: ");
	scanf("%f", &cups);
	printf("%f cups = %f pints = %f ounce = %f tablespoons = %f teaspoons", cups, cups/2, cups*8, cups*16, cups*48);
}