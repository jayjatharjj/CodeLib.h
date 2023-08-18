

//	Pattern73.	D	C	B	A	B	C	D
//				c	b	a	b	c
//					B	A	B
//						a


#include<stdio.h>


int Pattern73(int rows){

	if(rows<=0){
	
		printf("Invalid input\n");
		return 0;
	}else{
	
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= (rows*2)-row; col++)
				if(col<row)
					printf("\t");
				else{
					if(row%2==0)
						if(col<rows)
							printf("%c\t", 97+rows-col);
						else
							printf("%c\t", 97+col-rows);
					else
						if(col<rows)
							printf("%c\t", 65+rows-col);
						else
							printf("%c\t", 65+col-rows);
				}

			printf("\n");
		}

		return 1;
	}
}

void main(){

	int rows = 0;

	printf("Enter no. of rows : ");
	scanf("%d", &rows);

	Pattern73(rows);
}
