#include <stdio.h>
#include <ctype.h>

void task_1();
void task_2();
void task_3();
void task_4();
void task_5();
int task_6();
void task_7();
void task_8();

int main(){
	task_8();
	return 0;
}

void task_1(){
	char ch;
	int count = 0;

	while ((ch = getchar()) != EOF){
		if (ch == ' ')
			continue;
		else if (ch == '\n')
			continue;
		else
			count++;
	}

	printf("Number of symbols: %d", count);
}

void task_2(){
	char ch;
	int count;

	while ((ch = getchar()) != EOF){
		if (count == 10){
			putchar('\n');
			count = 0;
		}

		count++;

		if (ch > 31){
			printf("(%c %d) ", ch, ch);
			continue;
		}
		else if (ch > 0 && ch < 32){
			printf("(^%c %d) ", ch + 64, ch);
			continue;
		}
		else if (ch == 0){
			printf("(%c %d) ", '^@', ch);
			continue;
		}
		else if ('ch' == '\n'){
			printf("(\\n %d) ", ch);
			continue;
		}
	}
}

void task_3(){
	char ch;
	int count_h = 0;
	int count_l = 0;
	int other = 0;

	while ((ch = getchar()) != EOF){
		if (ch > 64 && ch < 91)
			count_h++;
		else if (ch > 96 && ch < 123)
			count_l++;
		else
			other++;
	}

	printf("Number of high registor symbols in string %d, low %d, other %d", count_h, count_l, other);
}

void task_4(){
  int c;
  int letter_count = 0;   
  int word_count = 0;     
  int in_word = 0;        

  while ((c = getchar()) != EOF){
		if (isalpha(c)){
			letter_count++;
      in_word = 1;  
    } 
		else if (in_word){
			word_count++;
      in_word = 0;  
    }
  }

  if (in_word)
    word_count++;

  if (word_count > 0)
    printf("%.2f\n", (float)letter_count / word_count);
  else
    printf("Нет слов для анализа.\n");
}

void task_5(){
	int current_upper = 100;
	int current_lower = 1;
	int guess;
	int flag = 1;
	char ch;
	printf("Choose a number from 1 to 100. I'll try to guess it. If my guess is correct, press y, if not, then n.\n"); 

	while (flag){
		guess = (current_upper+current_lower)/2;
		printf("Your number is heigher or equal %d?\n", guess);
		scanf(" %c", &ch);

		if (ch == 'y'){
			printf("Your number is %d?\n", guess);
			scanf(" %c", &ch);

			if (ch == 'y'){
				flag = 0;
				continue;
			}

			current_lower = guess;
			continue;
		}

		current_upper = guess;
	}

	printf("Your number is %d!", guess); 
}

char get_choice();
char get_first();
int get_int();
void count();

int task_6(){
	int choice; 

	while ((choice = get_choice()) != 'q'){
		switch (choice){
			case 'a' : printf("Buy low, sell high\n"); 
				break;
			case 'c' : putchar('\a');  
				break;
			case 's' : count(); 
				break;
			default : printf("Error!\n"); 
				break;
		}
	}

	printf("Program completed.\n"); 
	return 0;
}

void count(){
	int i, n;
	printf("How far should you count? Enter an integer:\n"); 
	n = get_int();

	for (i = 1; i <= n; i++) 
		printf("%d\n", i);

	while (getchar() != '\n') 
		continue;
}

char get_choice(){ 
	int ch;
	printf("Enter the letter corresponding to the selected option:\n"); 
	printf("a. advise c. call\n");
	printf("s. count e. exit\n");

	ch = get_first();

	while (ch != 'a' && ch != 'c' && ch != 's' && ch != 'e'){
		printf("Select a, c, s or e.\n");
		ch = get_first();
	}

	return ch; 
}

char get_first(){
	int ch;
	ch = getchar(); 

	while (ch != '\n' && ch == ' '){
		ch = getchar();
		continue; 
	}
 
	return ch;
}

int get_int(){
	int input; 
	char ch;

	while (scanf("%d", &input) != 1){
		while ((ch = getchar ()) != '\n')
			putchar(ch); 
		printf(" is not an integer. Enter an integer such as 25, -178 or 3: "); 
	}
	
	return input;
}

#define LVL1_TAX 300
#define LVL2_TAX (LVL1_TAX+150)
#define TAX1 0.15
#define TAX2 0.20
#define TAX3 0.25
#define INCOME_RATE 10.0      
#define OVERTIME 40
#define OVERTIME_RATE (INCOME_RATE*0.5)

#define INCOME_RATE_1 8.75;
#define INCOME_RATE_2 9.33;
#define INCOME_RATE_3 10.0;
#define INCOME_RATE_4 11.20;

void task_7(){
	int week_hours;
	int tax_rate = 0;
  double income = 0.0;
  double income_rate = 0.0;
	double tax = 0.0;
    
  printf("Hours: ");
  scanf("%d", &week_hours);

	printf("Desired tax rate:\n"); 
	printf("a. 8.75 b. 9.33\n");
	printf("c. 10.0 d. 11.20\n");

	tax_rate = get_first();

	while (tax_rate != 'a' && tax_rate != 'b' && tax_rate != 'c' && tax_rate != 'd'){
		printf("Select a, b, c or d.\n");
		tax_rate = get_first();
	}

	switch (tax_rate){
		case 'a':
			income_rate = INCOME_RATE_1;
			break;
		case 'b':
			income_rate = INCOME_RATE_2;
			break;
		case 'c':
			income_rate = INCOME_RATE_3;
			break;
		case 'd':
			income_rate = INCOME_RATE_4;
			break;	
	}

  income = week_hours*income_rate;

  if (week_hours > OVERTIME)
    income += ((week_hours-OVERTIME)*OVERTIME_RATE);
    
  tax = (income <= LVL1_TAX) ? income*TAX1: 300.0*TAX1;
  tax += (income <= LVL2_TAX) ? (income-LVL1_TAX)*TAX2: 150.0*TAX2;

  if (income > LVL2_TAX)
    tax += (income-LVL2_TAX)*TAX3;
    
  income -= tax;
    
  printf("Full income: %.f\nTax for current income: %.2f%%\nWeek income: %.2f\nTax: %.2f", 
		(income+tax), (tax*100.0/(income+tax)), income, tax);
}

void task_8(){
	char ch = 'a';
	float number_1, number_2;

	while (ch != 'e'){
		printf("Enter operation:\n");
		printf("a. add s. sub\n");
		printf("m. mul d. div\n");
		printf("e. exit\n");
		scanf(" %c", &ch);

		if (ch == 'e')
			break;

		printf("Enter two numbers: \n");

		while ((scanf("%f %f", &number_1, &number_2)) != 2)
			printf("Enter two correct number!\n");

		while (ch == 'd' && number_2 == 0){
			printf("Enter not zero second number:\n");
			scanf("%f", &number_2);
		}

		switch (ch){
			case 'a':
				printf("%f + %f = %f\n\n", number_1, number_2, number_1 + number_2);
				continue;
			case 's':
				printf("%f - %f = %f\n\n", number_1, number_2, number_1 - number_2);
				continue;
			case 'm':
				printf("%f * %f = %f\n\n", number_1, number_2, number_1 * number_2);
				continue;
			case 'd':
				printf("%f / %f = %f\n\n", number_1, number_2, number_1 / number_2);
				continue;
			default:
				continue;
		}
	}
}


