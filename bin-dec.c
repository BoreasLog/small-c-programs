#include <stdio.h>


int main(){
	
	int input, i, j;
	int output;

	printf("Enter a Dec Value to convert to bin: ");
	scanf("%d", &input);
	
	while(input !=0){
		if(input % 2 == 0){
			printf("0");
		}else{
			printf("1");
		}	
		input = input/2;
	
	}

	return 0;
}
