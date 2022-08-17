#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random();
int choice(int num, int a);
void winner(int num, int a);

main(){
	int num, a;
	printf("rock?/paper?/scissors?\n");
	printf(" 0	1	2\n");
	printf("\n");
	printf("choose: ");
	scanf("%d", &num);
	a = random();
	printf("\n");
	choice(num, a);
	printf("\n\n");
	winner(num, a);
}

int random(){
	int a;
	srand(time(0));
	a = rand()%3;
	return a;
}

int choice(int num, int a){

	if(num == 0){
		printf("user: ROCK");
	} else if(num == 1){
		printf("user: PAPER");
	} else{
		printf("user: SCISSORS");
	}
	
	printf("\n\n");
	
	if(a == 0){
		printf("computer: ROCK");
	} else if (a == 1){
		printf("computer: PAPER");
	} else {
		printf("computer: SCISSORS");
	}
	
}

void winner(int num, int a){
	if(num == 0 && a == 2 || num == 1 && a == 0 || num == 2 && a == 1){
		printf("YOU WIN");
	} else if(num == 0 && a == 1 || num == 1 && a == 2 || num == 2 && a == 0){
		printf("YOU LOSE");
	} else{
		printf("DRAW");
	}
}




