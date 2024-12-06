#include <stdio.h>
#include <ctype.h>

void task_1();
void task_2();
void task_3();
void task_4();
void task_5();
void task_6();
void task_7();
void task_8();
void task_9();
void task_10();
void task_11();

int main(){
	task_11();
	return 0;
}

void task_1(){
	int space_count = 0;
	int new_string_count = 0;
	int other_symbol_count = 0;
	char ch;

	while ((ch = getchar()) != '#'){
		if (ch == ' ')
			space_count++;
		else if (ch == '\n')
			new_string_count++;
		else
			other_symbol_count++;	
	}

	printf("%d %s, %d %s, %d %s", 
		space_count, (space_count > 0 && space_count < 10)? "space" : "spaces", 
		new_string_count, new_string_count > 1? "strings" : "string",
		other_symbol_count, other_symbol_count > 1? "other symbols" : "other symbol"
	);
}

void task_2(){
	char ch;
	int count = 0;

	while ((ch = getchar()) != '#'){
		if (count % 8 == 0){
			printf("\n");
		}

		printf("(%c = %d) ", ch, ch);
		count++;
	}
}

void task_3(){
	int number;
	int odd_count = 0;
	int even_count = 0;
	int average_odd = 0;
	int average_even = 0;

	while (scanf("%d", &number) == 1 && number != 0){
		if (number % 2 == 0){
			even_count++;
			average_even += number;
		}
		else{
		  odd_count++;
			average_odd += number;
		}
	}

	printf("%d odd, average odd is %f. %d even, average even is %f", 
		odd_count, (float)average_odd/odd_count, even_count, (float)average_even/even_count);
}

void task_4(){
	char ch;
	int count_replacement = 0;

	while ((ch = getchar()) != '#'){
		if (ch == '.'){
			putchar('!');
			count_replacement++;
		}
		else if (ch == '!'){
			putchar('!');
			putchar('!');
			count_replacement++;
		}
		else
			putchar(ch);
	}

	printf("\nNumber of substitutions: %d", count_replacement);
}

void task_5(){
	char ch;
	int count_replacement = 0;

	while ((ch = getchar()) != '#'){
		switch (ch){
			case '.':
				putchar('!');
				count_replacement++;
				break;
			case '!':
			  putchar('!');
			  putchar('!');
			  count_replacement++;
				break;
			default:
			  putchar(ch);
				break;
		}
	}

	printf("\nNumber of substitutions: %d", count_replacement);
}

void task_6(){
	char ch, prev = '#', curr;
	int count = 0;

	while ((ch = getchar()) != '#'){
		curr = ch;

	  if (prev == 'e' && curr == 'i'){
			count++;
			prev = curr;
		}
		else
			prev = curr;
	}

	printf("Number of \"ei\": %d", count);
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
	int week_hours = 0;
  double income = 0.0;
  double tax = 0.0;
    
  printf("Hours: ");
  scanf("%d", &week_hours);
    
  income = week_hours*INCOME_RATE;

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
	int week_hours;
	int tax_rate = 0;
  double income = 0.0;
  double income_rate = 0.0;
	double tax = 0.0;
    
  printf("Hours: ");
  scanf("%d", &week_hours);

	while (printf("Desired tax rate: "), tax_rate < 1 || tax_rate > 4)
		scanf("%d", &tax_rate);

	switch (tax_rate){
		case 1:
			income_rate = INCOME_RATE_1;
			break;
		case 2:
			income_rate = INCOME_RATE_2;
			break;
		case 3:
			income_rate = INCOME_RATE_3;
			break;
		case 4:
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

void task_9(){
	int n, i;

	printf("Enter N: ");
	scanf("%d", &n);

	for (int k = 2; k <= n; k++){
		for (i = 2; i*i <= k; i++){
      if (k%i == 0) 
				break;
		}

    if (i*i > k) 
			printf("%d ", k);
	}
}

void task_10(){
	float income, taxes;
	int category;

	while (printf("Enter the income and category:\n"), scanf("%f %d", &income, &category) == 2){
		taxes = 0.0;

		switch (category){
			case 1:
				if (income >= 17850)
					taxes = 17850 * 0.15 + (income - 17850) * 0.28;
				break;
			case 2:
				if (income >= 23900)
					taxes = 23900 * 0.15 + (income - 23900) * 0.28;
				break;
			case 3:
				if (income >= 29750)
					taxes = 29750 * 0.15 + (income - 29750) * 0.28;
				break;
			case 4:
				if (income >= 14875)
					taxes = 14875 * 0.15 + (income - 14875) * 0.28;
				break;
		}

		printf("Taxes is: %f\n", taxes);
	}
}

#define ARTICHOKE 2.05
#define BEET 1.15
#define CARROT 1.09
#define DELIVERY_AND_PACKAGING_1 6.5
#define DELIVERY_AND_PACKAGING_2 14.0
#define DELIVERY_AND_PACKAGING_3 0.5

void task_11(){
	char ch;
	int num_of_artichoke = 0;
	int num_of_beet = 0;
	int num_of_carrot = 0;
	int num;
	float total_cost = 0.0;
	float total_foot = 0.0;
	float total_cost_with_discount = 0.0;

	printf("Enter the product code and desired weight:\n"
		"a - artichokes\n" 
		"b - beets\n"
		"c - carrots\n"
		"q - complete the order process\n");

	while (scanf("%c %d\n", &ch, &num) == 2 && (ch != 'q') && (num > 0)){
		switch (ch){
			case 'a':
				num_of_artichoke += num;
				break;
			case 'b':
				num_of_beet += num;
				break;
			case 'c':
				num_of_carrot += num;
				break;
		}
	}

	printf("Arichoke cost %.2f$ per pound, ordered %d, price for all artichokes %.2f$\n", 
		ARTICHOKE, num_of_artichoke, ARTICHOKE * num_of_artichoke);

	printf("Beet cost %.2f$ per pound, ordered %d, price for all beet %.2f$\n", 
		BEET, num_of_beet, BEET * num_of_beet);

	printf("Carrot cost %.2f$ per pound, ordered %d, price for all carrot %.2f$\n", 
		CARROT, num_of_carrot, CARROT * num_of_carrot);

	total_cost = ARTICHOKE * num_of_artichoke + BEET * num_of_beet + CARROT * num_of_carrot;

	printf("Total order cost: %.2f\n", total_cost);

	if (total_cost >= 100){
		total_cost_with_discount += total_cost - total_cost * 0.05;
		printf("Cost is: %.2f$\n", total_cost * 0.05);
	}
	else
		printf("No discount provided\n");

	total_foot = num_of_artichoke + num_of_beet + num_of_carrot;

	if (total_foot <= 5){
		total_cost_with_discount = total_foot + DELIVERY_AND_PACKAGING_1;
		printf("Shipping cost is %f\n", DELIVERY_AND_PACKAGING_1);
	}
	else if (total_foot > 5 && total_foot <= 20){
		total_cost_with_discount = total_foot + DELIVERY_AND_PACKAGING_2;
		printf("Shipping cost is %f\n", DELIVERY_AND_PACKAGING_2);
	}
	else{
		total_cost_with_discount = total_foot + DELIVERY_AND_PACKAGING_2 + (total_foot - 20) * DELIVERY_AND_PACKAGING_3;
		printf("Shipping cost is %.2f\n", DELIVERY_AND_PACKAGING_2 + (total_foot - 20) * DELIVERY_AND_PACKAGING_3);
	}

	printf("Final cost: %.2f", total_cost_with_discount);
}


