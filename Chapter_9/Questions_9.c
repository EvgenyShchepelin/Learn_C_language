#include <stdio.h>

int task_4(int number_1, int number_2);
void alter(int* x, int* y);
int task_8(int number_1, int number_2, int number_3);

int main(){
	/*int number_1, number_2;
	printf("Enter two number:\n");
	scanf("%d %d", &number_1, &number_2);
	task_4(number_1, number_2);*/

	/*int x, y;
	printf("Enter two numbers:\n");
	scanf("%d %d", &x, &y);
	printf("x = %d, y = %d then\n", x, y);
	alter(&x, &y);
	printf("x = %d, y = %d now\n", x, y);*/

	int number_1, number_2, number_3;
	printf("Enter three numbers:\n");
	scanf("%d %d %d", &number_1, &number_2, &number_3);
	printf("Max number is: %d", task_8(number_1, number_2, number_3));
	return 0;
}

int task_4(int number_1, int number_2){
	return number_1 + number_2;
}

void alter(int* x, int* y){
	int temp = *x;
	*x = *x + *y;
	*y = temp - *y;
}

int task_8(int number_1, int number_2, int number_3){
	int max = 0;
	int min = 0;

	max = (number_1 >= number_2) ? number_1 : number_2;
	max = (max >= number_3) ? max : number_3;
	return max;
}

