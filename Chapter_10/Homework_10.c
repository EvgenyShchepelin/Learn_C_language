#include <stdio.h>
#include <float.h>

void task_1();
void task_2();
int task_3();
int task_4();
int task_5();
void task_6();
void task_7();
void task_8();
void task_10();
void task_11();
void task_12();
void task_13();

int main(){
	task_13();
	return 0;
}

#define MONTHS 12 
#define YEARS 5 

void task_1(){
	const float rain[YEARS][MONTHS] = {
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
		{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
		{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2},
	};

	int year, month; 
	float subtot, total;
	printf("YEAR   AMOUNT OF PRECIPITATION (inches)\n"); 

	for (year = 0, total = 0; year < YEARS; year++){ 
		for (month = 0, subtot = 0; month < MONTHS; month++) 
			subtot += *(*(rain + year) + month);
		printf("%5d %15.1f\n", 2010 + year, subtot); 
		total += subtot; 
	}

	printf("\nThe average annual precipitation is %.1f inches.\n\n", total/YEARS);
	printf("AVERAGE MONTHLY PRECIPITATION AMOUNT:\n\n");
	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	for (month = 0; month < MONTHS; month++){ 
		for (year = 0, subtot = 0; year < YEARS; year++) 
			subtot += *(*(rain + year) + month);
		printf("%4.1f ", subtot/YEARS);
	}
}

void copy_arr(double* targetl, double* source, int n);
void copy_ptr(double* target2, double* source, int n);
void copy_ptrs(double* target3, double* source, double* n);

void task_2(){
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5}; 
	double target1[5]; 
	double target2[5]; 
	double target3[5];
	copy_arr(target1, source, 5); 
	copy_ptr(target2, source, 5); 
	copy_ptrs(target3, source, source + 5);
}

void copy_arr(double* target1, double* source, int n){
	for (int i = 0; i < n; i++)
		target1[i] = source[i];
}

void copy_ptr(double* target2, double* source, int n){
	for (int i = 0; i < n; i++)
		*target2++ = *source++;
}

void copy_ptrs(double* target3, double* source, double* n){
	while (source < n)
		*target3++ = *source++;
}

int task_3(){
	int arr[20] = {4, 2, 6, 3, 5, 1, 8, 3, 345, 12, 61, 4, 3, 9, 2, 3, 346, 5, 2, 4};
	int max = -2147483648;

	for (int i = 0; i < 20; i++)
		max = (arr[i] >= max)? arr[i] : max;
	return max;
}

int task_4(){
	int arr[20] = {4, 2, 6, 3, 5, 1, 8, 3, 345, 12, 61, 4, 3, 9, 2, 3, 346, 5, 2, 4};
	int index;
	int max = -2147483648;

	for (int i = 0; i < 20; i++)
		max = (arr[i] >= max)? arr[i], index = i : max;
	return index;
}

int task_5(){
	int arr[20] = {4, 2, 6, 3, 5, 1, 8, 3, 345, 12, 61, 4, 3, 9, 2, 3, 349, 5, 2, 4};
	int max = -2147483648;
	int min = 2147483647;

	for (int i = 0; i < 20; i++){
		max = (arr[i] >= max)? arr[i] : max;
		min = (arr[i] <= min)? arr[i] : min;
	}

	return max - min;
}

void task_6(){
	int arr[21] = {4, 2, 6, 3, 5, 1, 8, 3, 345, 12, 61, 4, 3, 9, 2, 3, 349, 5, 2, 4, 7};
	int lenght = sizeof(arr) / sizeof(int);
	int n = lenght / 2;
	int t;

	for (int i = 0; i < n; i++){
		lenght--;
		t = arr[i];
		arr[i] = arr[lenght];
		arr[lenght] = t;
	}
}

#define N 5
#define M 12 

void copy_arr2(double target[][M], double source[][M]);

void task_7(){
	double source[N][M] = {
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
		{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
		{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2},
	};

	double target[N][M];

	copy_arr2(target, source);
}

void copy_arr2(double target[][M], double source[][M]){
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			*(target[i] + j) = *(source[i] + j);

	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++)
			printf("%lf ", target[i][j]);
		printf("\n");
	}
}

void task_8(){
	double arr[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double arr2[3];
	int n = 3;
	copy_arr(arr2, arr+2, 3); 
}

#define ARR1_SIZE 4
#define ARR2_SIZE 5
#define ARR3_SIZE 3

void add_arr(int* arr1, int n1, int* arr2, int n2, int* arr3, int n3);

void task_10(){
	int arr1[ARR1_SIZE] = {1, 2, 3, 4};
	int n1 = sizeof(arr1) / sizeof(int);
	int arr2[ARR2_SIZE] = {2, 3, 4, 5, 6};
	int n2 = sizeof(arr2) / sizeof(int);
	int arr3[ARR3_SIZE];
	int n3 = sizeof(arr3) / sizeof(int);
	add_arr(arr1, n1, arr2, n2, arr3, n3);
}

void add_arr(int* arr1, int n1, int* arr2, int n2, int* arr3, int n3){
	int min;

	min = (n1 >= n2)? n2 : n1;
	min = (min >= n3)? n3 : min;

	for (int i = 0; i < min; i++){
		arr3[i] = arr1[i] + arr2[i];
		printf("%d ", arr3[i]);
	}
}

void print_arr(int arr[][5]);
void double_arr(int arr[][5]);

void task_11(){
	int arr[3][5];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 5; j++)
			scanf("%d", &arr[i][j]);

	print_arr(arr);
	double_arr(arr);
	print_arr(arr);
}

void print_arr(int arr[][5]){
	printf("arr:\n");

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 5; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}

void double_arr(int arr[][5]){
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 5; j++)
			*(*(arr + i) + j) *= 2;
}

#define MONTHS1 12 
#define YEARS1 5 

double aop(const float rain[][MONTHS1]);
void month(const float rain[][MONTHS1]);

void task_12(){
	const float rain[YEARS1][MONTHS1] = {
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
		{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
		{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2},
	};

	printf("YEAR   AMOUNT OF PRECIPITATION (inches)\n"); 
	printf("\nThe average annual precipitation is %.1f inches.\n\n", aop(rain) / YEARS1);
	printf("AVERAGE MONTHLY PRECIPITATION AMOUNT:\n\n");
	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
	month(rain);
}

double aop(const float rain[][MONTHS1]){
	int year, month; 
	float subtot, total;

	for (year = 0, total = 0; year < YEARS1; year++){ 
		for (month = 0, subtot = 0; month < MONTHS1; month++) 
			subtot += *(*(rain + year) + month);
		printf("%5d %15.1f\n", 2010 + year, subtot); 
		total += subtot; 
	}

	return total;
}

void month(const float rain[][MONTHS1]){
	int year, month; 
	float subtot, total;

	for (month = 0; month < MONTHS1; month++){ 
		for (year = 0, subtot = 0; year < YEARS1; year++) 
			subtot += *(*(rain + year) + month);
		printf("%4.1f ", subtot/YEARS1);
	}
}

double average_in_arr(double arr[][5], int i);
double max_in_arr(double arr[][5]);

void task_13(){
	double arr[3][5];

	printf("Enter 3 sets of 5 double numbers: \n");

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 5; j++)
			scanf("%lf", &arr[i][j]);

	for (int i = 0; i < 3; i++)
		printf("average is: %lf\n", average_in_arr(arr, i));

	printf("max in arr is: %lf", max_in_arr(arr));
}

double average_in_arr(double arr[][5], int i){
	double summ = 0;

	for (int j = 0; j < 5; j++)
	  summ += *(*(arr + i) + j);
	return summ / 5;
}

double max_in_arr(double arr[][5]){
	double max = DBL_MIN;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 5; j++)
			max = (arr[i][j] >= max)? arr[i][j] : max;

	return max;
}










