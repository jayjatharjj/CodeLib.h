

//	Pattern59.				d
//					C	C	C
//				b	b	b	b	b
//			A	A	A	A	A	A	A


#include<stdio.h>


int Pattern59(int rows){

	if(rows<=0){
	
		printf("Invalid input\n");
		return 0;
	}else{
	
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+row-1; col++)
				if(col<=rows-row)
					printf("\t");
				else
					if(row%2==0)
						printf("%c\t", 65+rows-row);
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

	Pattern59(rows);
}
