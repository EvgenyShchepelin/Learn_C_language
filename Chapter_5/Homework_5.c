#include <stdio.h>

void task_1();
void task_2();
void task_3();
void task_4();
void task_5();
void task_6();
void task_7(double n);
void task_8();
void task_9(double T);

int main(){
	task_8();
	double n;
	printf("Enter double: ");
	scanf("%lf", &n);
	task_7(n);

	double Temp_F;
	printf("Enter temperature in Fahrenheit: ");
	int i = scanf("%lf", &Temp_F);

	while (i == 1){
		task_9(Temp_F);
		printf("Enter temperature in Fahrenheit: ");
	  i = scanf("%lf", &Temp_F);
	}

	return 0;
}

#define min_in_hour 60

void task_1(){
	int minutes_in;
	printf("Enter time in minute(s): ");
	scanf("%d", &minutes_in);

	while (minutes_in > 0){
		printf("In %d minute(s): %d hour(s) and %d minute(s)\n", minutes_in, minutes_in / min_in_hour, minutes_in % min_in_hour);
		printf("Enter time in minute(s): ");
		scanf("%d", &minutes_in);
	}
}

void task_2(){
	int number;
	printf("Enter number: ");
	scanf("%d", &number);
	const int end = number+10;

	while (number <= end){
		printf("%d ", number);
		number++;
	}
}

void task_3(){
	int days_in;
	printf("Enter the number of days: ");
	scanf("%d", &days_in);

	while (days_in > 0){
		printf("In %d day(s): %d week(s) and %d day(s)\n", days_in, days_in / 7, days_in % 7);
		printf("Enter the number of days: ");
		scanf("%d", &days_in);
	}
}

void task_4(){
	float cm;
	printf("Enter value in cm: ");
	scanf("%f", &cm);

	while(cm > 0){
		printf("%f cm = %d ft %d inch\n", cm, (int)(cm*0.0328084), (int)((cm-(30.48*((int)(cm*0.0328084))))/2.54));
		printf("Enter value in cm: ");
		scanf("%f", &cm);
	}
}

void task_5(){
	int sum, end;
	int count = sum = 0;
	printf("Enter the number of days: ");
	scanf("%d", &end);

	while (count++ < end)  
		sum = sum + count;  
	printf("sum = %d\n", sum); 
}

void task_6(){
	int sq, end;
	int count = sq = 0;
	printf("Enter N: ");
	scanf("%d", &end);

	while (count++ < end){ 
	  printf("%d^2 = %d\n", count, count * count); 
	}
}

void task_7(double n){
	printf("%f^3 = %f", n, n*n*n);
}

void task_8(){
	int first, second;
	printf("Enter second number: ");
	scanf("%d", &second);

	printf("Enter first number: ");
	scanf("%d", &first);
	
	while (first > 0){
		printf("%d %% %d = %d\n", first, second, first % second);
		printf("Enter first number: ");
		scanf("%d", &first);
	}
}

#define const_1 5.0/9.0
#define const_2 32.0
#define const_3 273.16

void task_9(double T){
	printf("%lf in Fahreheit = %lf in Celsius = %lf in Kelvins\n", T, const_1*(T*const_2), const_1*(T*const_2)+const_3);
}