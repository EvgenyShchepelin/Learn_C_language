#include <stdio.h>
#include <string.h>
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
	char name[20];
	char second_name[20];
	printf("Enter your name and second name: \n");
	scanf("%s %s", name, second_name);
	printf("%s, %s\n\n", second_name, name);
}

void task_2(){
	char name[20] = { 0 };
	printf("Enter your name: \n");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%+20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("%*s\n\n", strlen(name) + 3, name);
}

void task_3(){
	float number;
	printf("Enter float number: \n");
	scanf("%f", &number);
	printf("%.1f %.1e\n", number, number);
	printf("%+.3f %+.3e\n\n", number, number);
}

void task_4(){
	float height;
	char name[20];
	printf("Enter your height and name: \n");
	scanf("%f %s", &height, name);
	printf("%s, your height is %f meters\n\n", name, height/100);
}

void task_5(){
	float download_speed_Mbs, file_size_MB;
	printf("Enter speed of download in Mb/s and size of file in MB: \n");
	scanf("%f %f", &download_speed_Mbs, &file_size_MB);
	printf("At a download speed of %.2f Mb/s, a file size of %.2f MB loads in %.2f seconds.\n\n", 
		download_speed_Mbs, file_size_MB, file_size_MB*8/download_speed_Mbs);
}

void task_6(){
	char name[20];
	char second_name[20];
	printf("Enter your name and second name: \n");
	scanf("%s %s", name, second_name);
  int lenght_name = strlen(name);
	int lenght_second_name = strlen(second_name);
	printf("%s %s\n", name, second_name);
	printf("%*d %*d\n", lenght_name, lenght_name, lenght_second_name, lenght_second_name);
	printf("%-*d %-*d\n\n", lenght_name, lenght_name, lenght_second_name, lenght_second_name);
}

void task_7(){
	double d = 1.0/3.0;
	float f = 1.0/3.0;
	printf("f = %d, d = %d\n", FLT_DIG, DBL_DIG);
	printf("f = %.4f, d = %.4f\n", f, d);
	printf("f = %.12f, d = %.12f\n", f, d);
	printf("f = %.16f, d = %.16f\n\n", f, d);
}

#define liter 3.785
#define kilometr 1.609

void task_8(){
	float miles, gallons;
	printf("Enter miles and gallons:\n");
	scanf("%f %f", &miles, &gallons);
	printf("Miles on 1 gallon: %.1f\n", miles/gallons);
	printf("Liters on 100 kilometr: %.1f", 100/((kilometr*miles)/(gallons*liter)));
}