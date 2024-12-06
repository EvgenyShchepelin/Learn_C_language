#include <stdio.h>

void task_1();
void task_2();
void task_3();
void task_4();
void task_5();
void task_6();
void task_7();
void task_8();
float task_9();
void task_10();
void task_11();
void task_12();
void task_13();
void task_14();
void task_15();
void task_16();
void task_17();
void task_18();

int main(){
	task_18();
	return 0;
}

void task_1(){
	char symb, arr[26];
	int i;

	for (symb = 'a', i = 0; i < 26; i++, symb++){
		arr[i] = symb;
		printf("%c ", arr[i]);
	}
}

void task_2(){
	char dolla = '$';

	for (int i = 0; i < 5; i++){
		for (int j = 0; j <= i; j++){
			printf("%c", '$');
		}
		printf("\n");
	}
}

void task_3(){
	char symbol;

	for (int i = 0; i < 6; i++){
		symbol = 'F';

		for (int j = 0; j <= i; j++){
			printf("%c", symbol--);
		}
		printf("\n");
	}
}

void task_4(){
	char symbol = 'A';

	for (int i = 0; i < 6; i++){
		for (int j = 0; j <= i; j++){
			printf("%c", symbol++);
		}
		printf("\n");
	}
}

void task_5(){ 
	char uppercase_letter, iter;
	printf("Enter uppercase letter: ");
	int n = scanf("%c", &uppercase_letter);
	iter = uppercase_letter;

	if ((n == 1) && (uppercase_letter >= 65) && (uppercase_letter <= 90)){
		for (int i = 0; i < 91 - uppercase_letter; i++){ 
			printf("%*c", 91-uppercase_letter-i, uppercase_letter);

			for (int j = 1; j <= i; j++){
				printf("%c", ++iter);
			}

			for (int k = 1; k <= i; k++){
				printf("%c", --iter);
			}

			printf("\n");
		}
	}
	else
		printf("Wrong enter!");
}

void task_6(){
	int number_1, number_2;
	printf("Enter number 1 and number 2: ");
	scanf("%d %d", &number_1, &number_2);

	if (number_1 <= number_2){
		for (; number_1 <= number_2; number_1++)
			printf("%d %d %d\n", number_1, number_1*number_1, number_1*number_1*number_1);
	}
	else if (number_1 > number_2){
		for (; number_2 <= number_1; number_2++)
			printf("%d %d %d\n", number_2, number_2*number_2, number_2*number_2*number_2);
	}
	else
		printf("Wrong enter!");
}

void task_7(){
	char arr[100];
	scanf("%s", arr);
	int lenght, i;

	for (i = 1, lenght = strlen(arr); i <= lenght; i++){
		printf("%c", arr[lenght-i]);
	}
}

void task_8(){
	float first_number, second_number;
	
	while (printf("Enter two floating point numbers: "), scanf("%f %f", &first_number, &second_number) == 2)
		printf("result is: %f\n", (first_number-second_number)/(first_number*second_number));
}

float task_9(){
	float first_number, second_number;
	
	while (printf("Enter two floating point numbers: "), scanf("%f %f", &first_number, &second_number) == 2)
		return ((first_number-second_number)/(first_number*second_number));
}

void task_10(){
	int first_number, second_number, sum;

	while (printf("Enter two numbers: "), scanf("%d %d", &first_number, &second_number) == 2 && first_number < second_number){
		sum = 0;

		while (first_number <= second_number){
			sum += first_number*first_number;
	    first_number++;
		}
		printf("Sum of squares = %d\n", sum);
	}
}

void task_11(){
	int arr[8];

	for (int i = 0; i < 8; i++)
		scanf("%d", &arr[i]);

	for (int j = 7; j >= 0; j--)
		printf("%d ", arr[j]);
}

void task_12(){
	float sum_1, sum_2;
	int N;

	while (printf("Enter quantity: "), scanf("%d", &N) == 1 && N > 0){
		sum_1 = sum_2 = 0;

		for (int k = 1, j = 1; j < N; j = j+2, k++){
			sum_1 += 1.0/j;
			sum_2 += 1.0/(2.0*k);
		}

		if (N % 2 != 0)
			sum_1 += 1.0/N;

		printf("sum_1 = %f, sum_2 = %f\n", sum_1+sum_2, sum_1-sum_2);
	}
}

void task_13(){
	int arr[8];

	for (int k = 1, i = 0; i < 8; i++, k *= 2){
		printf("%d ", arr[i] = 2*k);
	}
}

void task_14(){
	double arr1[8], arr2[8], sum = 0;

	for (int i = 0; i < 8; i++){
		scanf("%lf", &arr1[i]);
		sum += arr1[i];
		arr2[i] = sum;
		printf("%lf ", arr2[i]);
	}
}

void task_15(){
	char string[255];

	int i, j;
	for (i = 0; scanf("%c", &string[i]) == 1 && string[i] != '\n'; i++){}

	for (; i >= 0; i--){
		printf("%c", string[i]);
	}
}

void task_16(){
	float Daffneys_account = 100.0, Deirdres_account = 100.0;
	int years = 0;

	while (Deirdres_account <= Daffneys_account){
		Daffneys_account += 10;
		Deirdres_account += Deirdres_account/100.0*5.0;
		years++;
	}

	printf("Deirdres Account = %f, Daffneys Account = %f, years = %d", Deirdres_account, Daffneys_account, years);
}

void task_17(){
	float Chucky_account = 1000000.0;
	int years = 0;

	while (Chucky_account > 0){
		Chucky_account += Chucky_account/100.0*8.0 - 100000.0;
		years++;
	}
	
	printf("%d", years);
}

void task_18(){
	int Robins_friends = 5, i = 1;
	printf("%d\n", Robins_friends);

	while (Robins_friends < 150){
		Robins_friends = (Robins_friends-i)*2;
		printf("%d\n", Robins_friends);
		i++;
	}
}