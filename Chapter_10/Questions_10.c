#include <stdio.h>

#define SIZE 100
void task_8();
void task_12();
void process(double arr[], int n);
void process_1(int n, int arr[]);
void process_2(short arr[30], int n);
//void process_3(int n, int m, short arr[n][m]);

int main(){
	task_8();
	task_12();
	return 0;
}

void task_8(){
	int arr1[6] = {1, 2, 4, 8, 16, 32}; // à
	arr1[2]; // á
	int arr2[SIZE] = {[SIZE - 1] = -1}; // â
	int arr3[SIZE] = {[4] = 101, [9] = 101, 101, 101, 101, 101}; // ã 
}

void process(double arr[], int n){}
void process_1(int n, int arr[]){}
void process_2(short arr[30], int n){}
//void process_3(int n, int m, short arr[n][m]){}

void task_12(){
	double trots[20]; 
	short clops[10][30]; 
	long shots[5][10][15];

	process(trots, 20);
	process_1(20, trots);

	process_2(clops, 10);
	//process_3(10, 30, clops);
}



