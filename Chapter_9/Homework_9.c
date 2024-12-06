#include <stdio.h>
#include <ctype.h>

double min(double num_1, double num_2);
void chline(char ch, int i, int j);
double task_4(double num_1, double num_2);
void larger_of(double* x, double* y);
void task_6(double* px, double* py, double* pz);
void task_7();
void task_8();
double task_9(double number, int pow);
void to_binary(int number, int n);
void task_10();
int Fibonacci(int position);

int main(){
	double min_1 = 123.458495;
	double min_2 = 123.458493;
	printf("Minimum is: %lf\n\n", min(min_1, min_2));

	char ch = 'A';
	int i = 10;
	int j = 12;
	chline(ch, i, j);

	double num_1 = 1.489;
	double num_2 = 23.8459;
	printf("H = %lf\n\n", task_4(num_1, num_2));

	double x = 123.456;
	double y = 123.457;
	printf("x = %lf, y = %lf\n", x, y);
	larger_of(&x, &y);
	printf("x = %lf, y = %lf\n\n", x, y);

	double x1 = 123.458;
	double y1 = 123.456;
	double z1 = 123.457;
	printf("x = %lf, y = %lf, z = %lf\n", x1, y1, z1);
	task_6(&x1, &y1, &z1);
	printf("x = %lf, y = %lf, z = %lf\n\n", x1, y1, z1);

	//task_7();
	//task_8();

	/*double number = 2;
	int pow = 3;
	printf("%lf^%d = %lf\n\n", number, pow, task_9(number, pow));*/

	//task_10();

	printf("%d", Fibonacci(20));
	return 0;
}

double min(double min_1, double min_2){
	double minimum = (min_1 >= min_2) ? min_2: min_1;
	return minimum;
}

void chline(char ch, int i, int j){
	for (int k = 0; k < i; k++){
		for (int l = 0; l < j; l++)
			printf("%c ", ch);
		printf("\n");
	}

	printf("\n\n");
}

double task_4(double num_1, double num_2){
	return (1 / ((1 / num_1) + (1 / num_2)));
}

void larger_of(double* x, double* y){
	if (*x >= *y)
		*y = *x;
	else
		*x = *y;
}

void task_6(double* px, double* py, double* pz){
	double x = *px, y = *py, z = *pz;

  if (y < x){
    if (z < x){
      if (z < y){
        *px = z;
        *pz = x;
      } 
	    else{
        *px = y;
        *py = z;
        *pz = x;
      }
    } 
	  else{
      *px = y;
      *py = x;
    }
  } 
	else{
    if (z < y){
      if (z < x){
        *pz = y;
        *py = x;
        *px = z;
      } 
		  else{
        *py = z;
        *pz = y;
      }
    }
  }
}

void task_7(){
	char ch;

	while ((ch = getchar()) != EOF){
		if (isalpha(ch) < 1)
			printf("%d\n", -1);
		else if (ch > 96)
			printf("%c = %d\n", ch, ch - 96);
		else
			printf("%c = %d\n", ch, ch - 64);
	}

	printf("\n");
}

void task_8(){
	double number;
	int degree;

	while (printf("Enter number and degree:\n"), scanf("%lf %d", &number, &degree) == 2){
		double pow = (number >= 0) ? number : -number;
		int degree_count = degree;

		if (number == 0 && degree != 0)
			printf("%lf^%d = 0\n", number, degree);
		else if (number != 0 && degree == 0)
			printf("%lf^%d = 1\n", number, degree);
		else if (number == 0 && degree == 0)
			printf("Error\n");
		else{
			 
			while (degree_count > 1){
				pow *= pow; 
				degree_count--;
			}

			if (number < 0)
				printf("%lf^%d = %lf\n", number, degree, 1 / pow);
			else
				printf("%lf^%d = %lf\n", number, degree, pow);
		}
	}
}

double task_9(double number, int pow){
  if (pow < 0) 
		return task_9(1 / number, -pow);
  if (pow == 0) 
		return 1;
  if (pow == 1) 
		return number;

  double d2;

  d2 = task_9(number, pow / 2);
    if (pow % 2) 
			return number * d2 * d2;

  return d2 * d2;
}

void task_10(){
	int number;
  int degree_of_notation; 
	printf("Enter number and degree of notation:\n");
	scanf("%d %d", &number, &degree_of_notation);
	to_binary(number, degree_of_notation);
	printf("\n\n");
}

void to_binary(int number, int n){
	int r; 
	r = number % n; 
	if (number >= n)
		to_binary(number / n, n); 
	printf("%d", (r == 0 ? 0 : r)); 
}

int Fibonacci(int position){
	int first = 0;
	int second = 1;
	int t;

	if (position == 1)
		return first;

	if (position == 2)
		return second;

	while (position > 2){
		t = second;
		second += first;
		first = t;
		position--;
	}

	return second;
}