

//	Pattern24.	a	b	c	d
//			a	b	c	
//			a	b
//			a


#include<stdio.h>


int Pattern24(int rows){

	if(rows<=0){
	
		printf("Invalid input\n");
		return 0;
	}else{
	
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+1-row; col++)
				printf("%c\t", col+96);

			printf("\n");
		}

		return 1;
	}
}

void main(){

	int rows = 0;

	printf("Enter no. of rows : ");
	scanf("%d", &rows);

	Pattern24(rows);
}
