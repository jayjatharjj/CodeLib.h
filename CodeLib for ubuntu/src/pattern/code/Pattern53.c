

//	Pattern53.	A	b	C	d
//				e	G	i		
//					K	n
//						q	


#include<stdio.h>


int Pattern53(int rows){

	if(rows<=0){
	
		printf("Invalid input\n");
		return 0;
	}else{
	
		for(int row = 1, temp = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows; col++)
				if(col<row)
					printf("\t");
				else{
					if(col%2==0)
						printf("%c\t", 96+temp);
					else
						printf("%c\t", 64+temp);

					temp+=row;
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

	Pattern53(rows);
}
