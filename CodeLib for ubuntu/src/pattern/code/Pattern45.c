

//	Pattern45.	d	d	d	d	
//				c	c	c		
//					b	b	
//						a


#include<stdio.h>


int Pattern45(int rows){

	if(rows<=0){
	
		printf("Invalid input\n");
		return 0;
	}else{
	
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++)
				if(col<row)
					printf("\t");
				else
					printf("%c\t", 97+rows-row);

			printf("\n");
		}

		return 1;
	}
}

void main(){

	int rows = 0;

	printf("Enter no. of rows : ");
	scanf("%d", &rows);

	Pattern45(rows);
}
