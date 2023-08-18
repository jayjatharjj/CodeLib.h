

//	Pattern7.	A	A	A	A
//			B	B	B	B	
//			C	C	C	C
//			D	D	D	D


#include<stdio.h>


int Pattern7(int rows){

	if(rows<=0){
	
		printf("Invalid input\n");
		return 0;
	}else{
	
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++)
				printf("%c\t", 64+row);

			printf("\n");
		}

		return 1;
	}
}

void main(){

	int rows = 0;

	printf("Enter no. of rows : ");
	scanf("%d", &rows);

	Pattern7(rows);
}
