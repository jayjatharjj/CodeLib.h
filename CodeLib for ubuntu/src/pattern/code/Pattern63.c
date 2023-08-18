

//	Pattern63.					A
//						b	a	b
//					C	E	G	E	C
//				d	c	b	a	b	c	d
//			E	G	I	K	M	K	I	G	E


#include<stdio.h>


int Pattern63(int rows){

	if(rows<=0){
	
		printf("Invalid input\n");
		return 0;
	}else{
	
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1, temp = row; col <= rows+row-1; col++)
				if(col<=rows-row)
					printf("\t");
				else{
					if(row%2==0)
						if(col<rows)
							printf("%c\t", 96+temp--);
						else
							printf("%c\t", 96+temp++);
					else
						if(col<rows){
							printf("%c\t", 64+temp);
							temp+=2;
						}else{
							printf("%c\t", 64+temp);
							temp-=2;
						}
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

	Pattern63(rows);
}
