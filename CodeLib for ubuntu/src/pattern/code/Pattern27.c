

//	Pattern27.	D	C	B	A
//			C	B	A	
//			B	A
//			A


#include<stdio.h>


int Pattern27(int rows){

	if(rows<=0){
	
		printf("Invalid input\n");
		return 0;
	}else{
	
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+1-row; col++)
				printf("%c\t", rows+2-row-col);

			printf("\n");
		}

		return 1;
	}
}

void main(){

	int rows = 0;

	printf("Enter no. of rows : ");
	scanf("%d", &rows);

	Pattern27(rows);
}
