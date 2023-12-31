


		#include<stdio.h>


		/*

		Prototype :

		void sortAscending(int * arr , int lim );

		This function takes array address and array limit as input
		and sort the array in ascending order 

		Parameters: 
		
		int * arr  : pointer to an array 
		int lim  : limit of the array
		
		Return type : 

		Returns nothing 

		*/

		void sortAscending(int * arr , int lim ){
		
			for (int i = 1; i < lim ; i++) 
			{
				int t = arr[i];
				int j = i - 1;
				while (j >= 0 && arr[j] > t) 
				{
					arr[j + 1] = arr[j];
					j = j - 1;
				}
				arr[j + 1] = t;
			}
		}
		/*

		Prototype :

		void nthMinimumNumberInArray(int * arr , int lim , int nth);

		this functions return the nth minimum number 

		Parameters : 
		
		int * arr  :  pointer to an array
		int lim    :  limit of the array
		int nth    :  nth position of number 

		Return type : 

		return nth minimum number in the array 

		*/

		int nthMinimumNumberInArray(int * arr , int lim , int nth){

		// printf("nthMinimumNumberInArray\n");
		sortAscending( arr , lim );

		if(nth==1){
			return 0; 
		}

		int count = 1 ;
		int last_val = arr[0];
		
		for(int i = 1 ; i < lim ; i++){

			if( last_val != arr[i] ){

			last_val =arr[i]; 
			count++;

			if(count==nth){

				return i;

			}
			}

		}

		return -1;
		}


		void main(){

		int lim ; 
		printf("Arrray Size : \n");
		scanf("%d",&lim);

		int arr[lim];
		for(int i=0 ; i<lim ; i++ ){
			printf("Enter Data At Index %d : ",i );
			scanf("%d",&arr[i]);
		}

		printf("INPUT ARRAY :\n");
		for(int i=0 ; i< lim ; i++ ){
			printf(" %d ",arr[i]);
		}

		int t;
		printf("\nEnter nth minimum position : ");
		scanf("%d",&t);

		int nth = nthMinimumNumberInArray(arr , lim , t );

		printf("\n%d is the %dth minimum element \n",arr[nth]);

		}


		