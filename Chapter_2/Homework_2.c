#include <stdio.h> 

void task_1();
void task_2();
void task_3();
void task_4();
void jolly();
void deny();
void task_5();
void br();
void ic();
void task_6();
void task_7();
void task_8();
void one_three();
void two();

int main(void){
  task_8();
	return 0;
}

void task_1(){
	printf("Ivan Ivanov\n");
	printf("Ivan\n");
	printf("Ivanov\n");
	printf("Ivan ");
	printf("Ivanov\n\n");
}

void task_2(){
	printf("Ivan, st.Pushkina ap.Kolotushkina\n\n");
}

void task_3(){
	int years = 22;
	printf("Years: %d, Days: %d\n\n", years, years*365);
}

void task_4(){
	jolly();
	jolly();
	jolly();
	deny();
}

void jolly(){
	printf("He's a funny fellow\n");
}

void deny(){
	printf("No one can deny it\n\n");
}

void task_5(){
	br();
	printf(", ");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();
	printf("\n\n");
}

void br(){
	printf("Brazil, Russia");
}

void ic(){
	printf("India, China");
}

void task_6(){
	int toes = 10;
	printf("toes: %d, 2*toes: %d, toes^2: %d.\n\n", toes, 2*toes, toes*toes);
}

void task_7(){
	int n = 3;

	for (int i = 0; i < 3; i++){
		for (int j = n; j > 0; j--){
			printf("Smile!");
		}

		n--;
		printf("\n");
	}
	printf("\n\n");
}

void task_8(){
	printf("Let's start:\n");
	one_three();
	printf("order!\n\n");
}

void one_three(){
	printf("one\n");
	two();
	printf("three\n");
}

void two(){
	printf("two\n");
}