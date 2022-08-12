//Unit 6. Print multiplication table
#include<stdio.h>
#include<stdbool.h>

int checkYesNo(){
	char userInput;
	int check = 3;
	while(check == 3){
		fflush(stdin);
		printf("Do you want to continue (Y/N): ");
		scanf("%c", &userInput);
		if(userInput == 'y' || userInput == 'Y'){
			check = 1;
		}
		else if(userInput == 'n' || userInput == 'N'){
			check = 0;
		}
		else {
			check = 3;
		}
	}
	return check;
}

void displayMultiplicationTable(){
	int n, check;
	while(1){
		printf("Enter a number (1-9): ");
		scanf("%d", &n);
		if(n >= 1 && n <= 9){
			for(int i = 1; i <= 10; i++){
				printf("%d x %d = %d\n", n, i, n * i);
			}
			check = checkYesNo();
			if(check == 0){
				break;
			}
			//n = 0; //reset n
		}
	}
}

int main(){
	displayMultiplicationTable();
	return 0;
}