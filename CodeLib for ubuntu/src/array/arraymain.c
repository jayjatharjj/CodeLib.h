#include"array.h"
void download(char *);

void array_option(int choice, int *arr, int arraysize, int pos, int data, char *arrayout){

	char temp[1000];
	char digit[10] = {'0'};
	switch(choice){

		case 1:{		
			reverseArray(arr, arraysize);
			sprintf(temp,"",temp);
			for(int i = 0; i < arraysize; i++){
				sprintf(digit,"%d ",arr[i]);
                                strcat(temp,digit);
			}
			
			sprintf(arrayout,"Your reversed array is {%s}\n",temp);
		       }
			break;
		case 2:{
			sortAscending(arr, arraysize);
			sprintf(temp,"",temp);
			for(int i = 0; i < arraysize; i++){
				sprintf(digit,"%d ",arr[i]);
                                strcat(temp,digit);
			}
	
			sprintf(arrayout,"Your ascending sorted array is {%s}\n",temp);
		       }
			break;
		case 3:{
			sortDescending(arr, arraysize);
                        sprintf(temp,"",temp);
                        for(int i = 0; i < arraysize; i++){
                                sprintf(digit,"%d ",arr[i]);
                                strcat(temp,digit);
                        }

                        sprintf(arrayout,"Your descending sorted array is {%s}\n",temp);
		       }
			break;
		case 4:{
			int ans = searchNumberInArray(arr, arraysize, data);

			if(ans == 1){
				sprintf(arrayout," %d is  present in array",data);
			}else{
				sprintf(arrayout," %d is not present in array",data);
			}
		       }
                        break;
		case 5:{
			int old = arraysize;

			arraysize = deleteNumberFromArray(arr, arraysize, data);

			if(old = arraysize){
				sprintf(arrayout,"Data %d not found in array",data);
			}else
				sprintf(temp,"",temp);
                        	for(int i = 0; i < arraysize; i++){
                                	sprintf(digit,"%d ",arr[i]);
                                	strcat(temp,digit);
                        	}
				sprintf(arrayout,"Data %d found in array and deleted\n\n Your new array is {%s}\n",data,temp);
		       }
			break;
		case 6:{
			int ans = nthMinimumNumberInArray(arr, arraysize, data);

			if(ans != -1 ){
					sprintf(arrayout," %d is %dth Minimum Number ",arr[ans],data);
				}else{
					sprintf(arrayout," No element found as %dth Minimun Number",data);
				}
		       }
			break;
		case 7:{
			int ans = nthMaximumNumberInArray(arr, arraysize ,data);

			if(ans != -1 ){
					sprintf(arrayout," %d is %dth Maximun Number ",arr[ans],data);
				}else{
					sprintf(arrayout," No element found as %dth Minimun Number",data);
				}
			}		
                        break;
		case 8:{
			int ans = removeOddNumber(arr, arraysize);

			sprintf(temp,"",temp);
                        for(int i = 0; i < ans; i++){
                        	sprintf(digit,"%d ",arr[i]);
                                strcat(temp,digit);
                        }
			sprintf(arrayout,"Updated array without odd number is {%s}",temp);
		       }
                        break;
		case 9:{
			int ans = removeEvenForArray(arr, arraysize);

			sprintf(temp,"",temp);
                        for(int i = 0; i < ans; i++){
                                sprintf(digit,"%d ",arr[i]);
                                strcat(temp,digit);
                        }
                        sprintf(arrayout,"Updated array without even number is {%s}",temp);
		       }
                        break;
		case 10:{
			 int ans = findPeak(arr,arraysize);

			 sprintf(arrayout," %d is the Peak Number ",arr[ans]);	
			}
                        break;
		case 11:{
			 int ans = firstNonRepeating(arr, arraysize);

			 if(ans > -1){
					sprintf(arrayout," %d is the First non repeating character ",arr[ans]);
				}else{
					sprintf(arrayout," Array Have Zero Unique Number ");
				}
			}
                        break;
		case 12:{
			 int ans = findMin(arr,arraysize);

			 sprintf(arrayout," %d is Minimum Number in array ",ans);
			}
                        break;
		case 13:{
			 int ans = countOccurrences(arr, arraysize, data);

			 sprintf(arrayout," Occurrence of %d in array is %d ",data, ans);
			}
                        break;
		case 14:{
			 int ans = maxSubArray(arr,arraysize);
			 
			 sprintf(arrayout," Maximum sub array Addition is %d ",ans);
			}
                        break;
		case 15:{
			 grpNegPosEle(arr, arraysize);
			
			 for(int i = 0; i < arraysize; i++){
                                sprintf(digit,"%d ",arr[i]);
                                strcat(temp,digit);
                         }
                         sprintf(arrayout,"Updated array with All Negative To One Size Of Array number is {%s}",temp);
			}
                        break;
		case 16:{
			 cyclicRotate(arr, arraysize);

			 for(int i = 0; i < arraysize; i++){
                                sprintf(digit,"%d ",arr[i]);
                                strcat(temp,digit);
                         }
                         sprintf(arrayout,"Cyclically Rotated An Array By One is {%s}",temp);
			}
                        break;
		case 17:{
			 int ans = getPairsCount(arr, arraysize, data);
			 sprintf(arrayout," There are %d pairs with sum of %d ", ans, data);
			}
                        break;
		case 18:{
			 int ans = countOfDuplicate(arr, arraysize);
			 sprintf(arrayout," There are %d duplicate Numbers in array ", ans);
			}
                        break;
		case 19:{
			 int ans = sumOfEvenEle(arr, arraysize);

			 sprintf(arrayout," Sum of even elements in array is %d",ans);
			}
                        break;
		case 20:{
			 int ans = sumOfOddEle(arr, arraysize);

                         sprintf(arrayout," Sum of odd elements in array is %d",ans);
			}
                        break;
		case 21:{
			 int ans = avgOfEle(arr, arraysize);

			 sprintf(arrayout," Average of array elements is %d", ans);
			}
                        break;
		case 22:{
			 int ans = arrayProduct(arr, arraysize);

			 sprintf(arrayout," Product Of Array Elements is %d",ans );
			}
                        break;
		case 23:{
			 repEleWithSum(arr, arraysize);
			
			 sprintf(temp,"",temp);
                        for(int i = 0; i < arraysize; i++){
                                sprintf(digit,"%d ",arr[i]);
                                strcat(temp,digit);
                        }
                        sprintf(arrayout,"Updated array is {%s}",temp);
			}
                        break;
		case 24:{
			 repEleWithSq(arr, arraysize);
			 sprintf(temp,"",temp);
                        for(int i = 0; i < arraysize; i++){
                                sprintf(digit,"%d ",arr[i]);
                                strcat(temp,digit);
                        }
                        sprintf(arrayout,"Updated array is {%s}",temp);
			}
                        break;
		case 25:{
			 repEleWithCube(arr, arraysize);
			 sprintf(temp,"",temp);
                        for(int i = 0; i < arraysize; i++){
                                sprintf(digit,"%d ",arr[i]);
                                strcat(temp,digit);
                        }
                        sprintf(arrayout,"Updated array is {%s}",temp);
			}
                        break;
		case 26:{
			 int ans = sumOddIndex(arr, arraysize);

			 sprintf(arrayout," Sum of all odd index elements is %d",ans );
			}
                        break;
		case 27:{
                         int ans = sumEvenIndex(arr, arraysize);

                         sprintf(arrayout," Sum of all even index elements is %d",ans );
                        }
                        break;
		case 28:{
			 int ans = primeArray(arr, arraysize);

			 sprintf(temp,"",temp);
                         for(int i = 0; i < ans; i++){
                                 sprintf(digit,"%d ",arr[i]);
                                 strcat(temp,digit);
                         }
                         sprintf(arrayout,"Updated array is {%s}",temp);
			}
                        break;
		case 29:{
                         int ans = compositeArray(arr, arraysize);

                         sprintf(temp,"",temp);
                         for(int i = 0; i < ans; i++){
                                 sprintf(digit,"%d ",arr[i]);
                                 strcat(temp,digit);
                         }
                         sprintf(arrayout,"Updated array is {%s}",temp);
                        }
                        break;
		case 30:{
                         int ans = perfectArray(arr, arraysize);

                         sprintf(temp,"",temp);
                         for(int i = 0; i < ans; i++){
                                 sprintf(digit,"%d ",arr[i]);
                                 strcat(temp,digit);
                         }
			 if(ans == 0)
				 sprintf(arrayout,"No perfect number found in array",temp);
			 else
				 sprintf(arrayout,"Updated array is {%s}",temp);
                        }
                        break;
		case 31:{
                         int ans = palindromeArray(arr, arraysize);

                         sprintf(temp,"",temp);
                         for(int i = 0; i < ans; i++){
                                 sprintf(digit,"%d ",arr[i]);
                                 strcat(temp,digit);
                         }
                         if(ans == 0)
                                 sprintf(arrayout,"No palindrome number found in array",temp);
                         else
                                 sprintf(arrayout,"Updated array is {%s}",temp);
                        }
                        break;
		case 32:{
                         int ans = revNumberArray(arr, arraysize);

                         sprintf(temp,"",temp);
                         for(int i = 0; i < ans; i++){
                                 sprintf(digit,"%d ",arr[i]);
                                 strcat(temp,digit);
                         }
                         sprintf(arrayout,"Updated array is {%s}",temp);
                        }
                        break;
		case 33:{
                         int ans = sumOfDigitArray(arr, arraysize);

                         sprintf(temp,"",temp);
                         for(int i = 0; i < ans; i++){
                                 sprintf(digit,"%d ",arr[i]);
                                 strcat(temp,digit);
                         }
                         sprintf(arrayout,"Updated array is {%s}",temp);
                        }

                        break;
		case 34:{
			 int ans = duckArray(arr, arraysize);

                         sprintf(temp,"",temp);
                         for(int i = 0; i < ans; i++){
                                 sprintf(digit,"%d ",arr[i]);
                                 strcat(temp,digit);
                         }
                         if(ans == 0)
                                 sprintf(arrayout,"No duck number found in array",temp);
                         else
                                 sprintf(arrayout,"Updated array is {%s}",temp);
                        }

                        break;
		case 35:{
			 int ans = automorphicArray(arr, arraysize);

                         sprintf(temp,"",temp);
                         for(int i = 0; i < ans; i++){
                                 sprintf(digit,"%d ",arr[i]);
                                 strcat(temp,digit);
                         }
                         if(ans == 0)
                                 sprintf(arrayout,"No automorphic number found in array",temp);
                         else
                                 sprintf(arrayout,"Updated array is {%s}",temp);
                        }

                        break;
		case 36:{
			 int ans = harshadArray(arr, arraysize);

                         sprintf(temp,"",temp);
                         for(int i = 0; i < ans; i++){
                                 sprintf(digit,"%d ",arr[i]);
                                 strcat(temp,digit);
                         }
                         if(ans == 0)
                                 sprintf(arrayout,"No harshad number found in array",temp);
                         else
                                 sprintf(arrayout,"Updated array is {%s}",temp);
                        }

                        break;
		case 37:{
			 int ans = armstrongArray(arr, arraysize);

                         sprintf(temp,"",temp);
                         for(int i = 0; i < ans; i++){
                                 sprintf(digit,"%d ",arr[i]);
                                 strcat(temp,digit);
                         }
                         if(ans == 0)
                                 sprintf(arrayout,"No armstrong number found in array",temp);
                         else
                                 sprintf(arrayout,"Updated array is {%s}",temp);
                        }

                        break;
		case 38:{
			 int ans = abundantArray(arr, arraysize);

                         sprintf(temp,"",temp);
                         for(int i = 0; i < ans; i++){
                                 sprintf(digit,"%d ",arr[i]);
                                 strcat(temp,digit);
                         }
                         if(ans == 0)
                                 sprintf(arrayout,"No abundant number found in array",temp);
                         else
                                 sprintf(arrayout,"Updated array is {%s}",temp);
                        }

                        break;
		case 39:{
			 int ans = spyArray(arr, arraysize);

                         sprintf(temp,"",temp);
                         for(int i = 0; i < ans; i++){
                                 sprintf(digit,"%d ",arr[i]);
                                 strcat(temp,digit);
                         }
                         if(ans == 0)
                                 sprintf(arrayout,"No spy number found in array",temp);
                         else
                                 sprintf(arrayout,"Updated array is {%s}",temp);
                        }

                        break;
		case 40:{
			 int ans = strongArray(arr, arraysize);

                         sprintf(temp,"",temp);
                         for(int i = 0; i < ans; i++){
                                 sprintf(digit,"%d ",arr[i]);
                                 strcat(temp,digit);
                         }
                         if(ans == 0)
                                 sprintf(arrayout,"No strong number found in array",temp);
                         else
                                 sprintf(arrayout,"Updated array is {%s}",temp);
                        }

                        break;
		case 41:{
			 int ans = disariumArray(arr, arraysize);

                         sprintf(temp,"",temp);
                         for(int i = 0; i < ans; i++){
                                 sprintf(digit,"%d ",arr[i]);
                                 strcat(temp,digit);
                         }
                         if(ans == 0)
                                 sprintf(arrayout,"No disarium number found in array",temp);
                         else
                                 sprintf(arrayout,"Updated array is {%s}",temp);
                        }

                        break;
		case 42:{
			 int ans = deficientArray(arr, arraysize);

                         sprintf(temp,"",temp);
                         for(int i = 0; i < ans; i++){
                                 sprintf(digit,"%d ",arr[i]);
                                 strcat(temp,digit);
                         }
                         if(ans == 0)
                                 sprintf(arrayout,"No deficient number found in array",temp);
                         else
                                 sprintf(arrayout,"Updated array is {%s}",temp);
                        }

                        break;
		default:
			printf("choice error in array execute");
                        break;
	}
}  

int array_show(int choice, char *str){

        sprintf(str,"",str);
	
	if(choice<=0){
	
		strcat(str,"Enter enter choice correctly");
		return -1;
	}
	switch(choice){
	
		case 1:{
			FILE *p1 = fopen("src/array/code/reverseArray.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
		       }
			break;
                case 2:{
                        FILE *p2 = fopen("src/array/code/sortArrayAsc.c","r");

                        while((*str = fgetc(p2)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 3:{
                        FILE *p3 = fopen("src/array/code/sortArrayDsc.c","r");

                        while((*str = fgetc(p3)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 4:{
                        FILE *p4 = fopen("src/array/code/FindNumberInArray.c","r");

                        while((*str = fgetc(p4)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
              /*  case 5:{
                        FILE *p5 = fopen("src/array/code/.c","r");

                        while((*str = fgetc(p5)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 6:{
                        FILE *p6 = fopen("src/array/code/.c","r");

                        while((*str = fgetc(p6)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 7:{
                        FILE *p7 = fopen("src/array/code/.c","r");

                        while((*str = fgetc(p7)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
		case 8:{
                        FILE *p29 = fopen("src/array/code/oddArray.c","r");

                        while((*str = fgetc(p29)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 9:{
                        FILE *p28 = fopen("src/array/code/evenArray.c","r");

                        while((*str = fgetc(p28)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 10:{
                        FILE *p10 = fopen("src/array/code/.c","r");

                        while((*str = fgetc(p10)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 11:{
                        FILE *p11 = fopen("src/array/code/.c","r");

                        while((*str = fgetc(p11)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;*/
                case 12:{
                        FILE *p12 = fopen("src/array/code/findMin.c","r");

                        while((*str = fgetc(p12)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 13:{
                        FILE *p13 = fopen("src/array/code/occurenceCount.c","r");

                        while((*str = fgetc(p13)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 14:{
                        FILE *p14 = fopen("src/array/code/maxSubarray.c","r");

                        while((*str = fgetc(p14)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 15:{
                        FILE *p15 = fopen("src/array/code/grpNegPosEle.c","r");

                        while((*str = fgetc(p15)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 16:{
                        FILE *p16 = fopen("src/array/code/cyclicRotate.c","r");

                        while((*str = fgetc(p16)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 17:{
                        FILE *p17 = fopen("src/array/code/getPairsCount.c","r");

                        while((*str = fgetc(p17)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 18:{
                        FILE *p18 = fopen("src/array/code/countOfDuplicate.c","r");

                        while((*str = fgetc(p18)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 19:{
                        FILE *p19 = fopen("src/array/code/sumofEvenEle.c","r");

                        while((*str = fgetc(p19)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 20:{
                        FILE *p20 = fopen("src/array/code/sumofOddEle.c","r");

                        while((*str = fgetc(p20)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 21:{
                        FILE *p21 = fopen("src/array/code/Averageofele.c","r");

                        while((*str = fgetc(p21)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 22:{
                        FILE *p22 = fopen("src/array/code/arrayProduct.c","r");

                        while((*str = fgetc(p22)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 23:{
                        FILE *p23 = fopen("src/array/code/repWithSum.c","r");

                        while((*str = fgetc(p23)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 24:{
                        FILE *p24 = fopen("src/array/code/repWithSq.c","r");

                        while((*str = fgetc(p24)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 25:{
                        FILE *p25 = fopen("src/array/code/repWithCube.c","r");

                        while((*str = fgetc(p25)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 26:{
                        FILE *p26 = fopen("src/array/code/sumOddIndex.c","r");

                        while((*str = fgetc(p26)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 27:{
                        FILE *p27 = fopen("src/array/code/sumEvenIndex.c","r");

                        while((*str = fgetc(p27)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
		case 28:{
                        FILE *p28 = fopen("src/array/code/primeArray.c","r");

                        while((*str = fgetc(p28)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
			break;
                case 29:{
                        FILE *p29 = fopen("src/array/code/compositeArray.c","r");

                        while((*str = fgetc(p29)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 30:{
                        FILE *p30 = fopen("src/array/code/perfectArray.c","r");

                        while((*str = fgetc(p30)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 31:{
                        FILE *p31 = fopen("src/array/code/palindromeArray.c","r");

                        while((*str = fgetc(p31)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 32:{
                        FILE *p32 = fopen("src/array/code/revNumberArray.c","r");

                        while((*str = fgetc(p32)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 33:{
                        FILE *p33 = fopen("src/array/code/repWithSum.c","r");

                        while((*str = fgetc(p33)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 34:{
                        FILE *p34 = fopen("src/array/code/duckArray.c","r");

                        while((*str = fgetc(p34)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 35:{
                        FILE *p35 = fopen("src/array/code/automorphicArray.c","r");

                        while((*str = fgetc(p35)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 36:{
                        FILE *p36 = fopen("src/array/code/harshadArray.c","r");

                        while((*str = fgetc(p36)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 37:{
                        FILE *p37 = fopen("src/array/code/armstrongArray.c","r");

                        while((*str = fgetc(p37)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 38:{
                        FILE *p38 = fopen("src/array/code/abundantArray.c","r");

                        while((*str = fgetc(p38)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 39:{
                        FILE *p39 = fopen("src/array/code/spyArray.c","r");

                        while((*str = fgetc(p39)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 40:{
                        FILE *p40 = fopen("src/array/code/strongArray.c","r");

                        while((*str = fgetc(p40)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 41:{
                        FILE *p41 = fopen("src/array/code/disariumArray.c","r");

                        while((*str = fgetc(p41)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                case 42:{
                        FILE *p42 = fopen("src/array/code/deficientArray.c","r");

                        while((*str = fgetc(p42)) != EOF){
                                str++;
                        }
                        *str = '\0';
                       }
                        break;
                default:
			printf("choice error in array show");
                        break;
        }
}


void array_download(int choice, char *link){

        switch(choice){

                case 1:
                       	download("src/array/code/reverseArray.c"); 
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/reverseArray.c\">"
				"Copy This Link</a>");
                        break;
                case 2:
                        download("src/array/code/sortArrayAsc.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/sortArrayAsc.c\">"
				"Copy This Link</a>"); 
                        break;
                case 3:
                        download("src/array/code/sortArrayDsc.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/sortArrayDsc.c\">"
				"Copy This Link</a>");
                        break;
                case 4:
                        download("src/array/code/FindNumberInArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/FindNumberInArray.c\">"
				"Copy This Link</a>");
                        break;
                case 5:
			download("src/array/code/DeleteNumberArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/DeleteNumberArray.c\">"
				"Copy This Link</a>");
                        break;
                case 6:
			download("src/array/code/nthMinimum.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/nthMinimum.c\">"
				"Copy This Link</a>");
                        break;
                case 7:
			download("src/array/code/nthMaximum.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/nthMaximum.c\">"
				"Copy This Link</a>");
                        break;
                case 8:
			download("src/array/code/oddArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/oddArray.c\">"
				"Copy This Link</a>");
                        break;
                case 9:
			download("src/array/code/evenArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/evenArray.c\">"
				"Copy This Link</a>");
                        break;
                case 10:
			download("src/array/code/findPeak.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/findPeak.c\">"
				"Copy This Link</a>");
			break;
                case 11:
			download("src/array/code/firstNonRepeatingElement.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/firstNonRepeatingElement.c\">"
				"Copy This Link</a>");
                        break;
                case 12:
			download("src/array/code/findMin.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/findMin.c\">"
				"Copy This Link</a>");
                        break;
                case 13:
			download("src/array/code/occurenceCount.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/occurenceCount.c\">"
				"Copy This Link</a>");
                        break;
                case 14:
			download("src/array/code/maxSubarray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/maxSubarray.c\">"
				"Copy This Link</a>");
                        break;
                case 15:
			download("src/array/code/grpNegPosEle.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/grpNegPosEle.c\">"
				"Copy This Link</a>");
                        break;
                case 16:
			download("src/array/code/cyclicRotate.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/cyclicRotate.c\">"
				"Copy This Link</a>");
                        break;
                case 17:
			download("src/array/code/getPairsCount.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/getPairsCount.c\">"
				"Copy This Link</a>");
                        break;
                case 18:
			download("src/array/code/countOfDuplicate.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/countOfDuplicate.c\">"
				"Copy This Link</a>");
                        break;
                case 19:
			download("src/array/code/sumofEvenEle.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/sumofEvenEle.c\">"
				"Copy This Link</a>");
                        break;
                case 20:
			download("src/array/code/sumofOddEle.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/sumofOddEle.c\">"
				"Copy This Link</a>");
                        break;
                case 21:
			download("src/array/code/Averageofele.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/Averageofele.c\">"
				"Copy This Link</a>");
                        break;
                case 22:
			download("src/array/code/arrayProduct.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/arrayProduct.c\">"
				"Copy This Link</a>");
                        break;
                case 23:
			download("src/array/code/repWithSum.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/repWithSum.c\">"
				"Copy This Link</a>");
                        break;
                case 24:
			download("src/array/code/repWithSq.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/repWithSq.c\">"
				"Copy This Link</a>");
                        break;
                case 25:
			download("src/array/code/repWithCube.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/repWithCube.c\">"
				"Copy This Link</a>");
                        break;
                case 26:
			download("src/array/code/sumOddIndex.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/sumOddIndex.c\">"
				"Copy This Link</a>");
                        break;
                case 27:
			download("src/array/code/sumEvenIndex.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/sumEvenIndex.c\">"
				"Copy This Link</a>");
                        break;
                case 28:
			download("src/array/code/primeArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/primeArray.c\">"
				"Copy This Link</a>");
                        break;
                case 29:
			download("src/array/code/compositeArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/compositeArray.c\">"
				"Copy This Link</a>");
                        break;
                case 30:
			download("src/array/code/perfectArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/perfectArray.c\">"
				"Copy This Link</a>");
                        break;
                case 31:
			download("src/array/code/palindromeArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/palindromeArray.c\">"
				"Copy This Link</a>");
                        break;
                case 32:
			download("src/array/code/revNumberArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/revNumberArray.c\">"
				"Copy This Link</a>");
                        break;
                case 33:
			download("src/array/code/repWithSum.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/repWithSum.c\">"
				"Copy This Link</a>");
                        break;
                case 34:
			download("src/array/code/duckArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/duckArray.c\">"
				"Copy This Link</a>");
                        break;
                case 35:
			download("src/array/code/automorphicArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/automorphicArray.c\">"
				"Copy This Link</a>");
                        break;
                case 36:
			download("src/array/code/harshadArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/harshadArray.c\">"
				"Copy This Link</a>");
                        break;
                case 37:
			download("src/array/code/armstrongArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/armstrongArray.c\">"
				"Copy This Link</a>");
                        break;
                case 38:
			download("src/array/code/abundantArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/abundantArray.c\">"
				"Copy This Link</a>");
                        break;
                case 39:
			download("src/array/code/spyArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/spyArray.c\">"
				"Copy This Link</a>");
                        break;
                case 40:
			download("src/array/code/strongArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/strongArray.c\">"
				"Copy This Link</a>");
                        break;
                case 41:
			download("src/array/code/disariumArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/disariumArray.c\">"
				"Copy This Link</a>");
                        break;
                case 42:
			download("src/array/code/deficientArray.c");
                        sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/src/array/code/deficientArray.c\">"
				"Copy This Link</a>");
                        break;
                default:
			printf("choice error in array download");
                        break;
        }
}

