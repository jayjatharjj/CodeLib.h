#include"integerheader.h"

int number_description(int choice ,char *str){

sprintf(str,"",str);
	
	if(choice<=0){
	
		strcat(str,"Enter enter choice correctly");
		return -1;
	}
	FILE* fp;
	switch(choice)
	{
		case 0:
		{
			sprintf(str,"%s","NO INPUT");
		}
		break;
		case 1:
		{
			fp = fopen("src/number/description/AbundantNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
			fclose(fp);
		}
		break;

		case 2:
		{
			fp = fopen("src/number/description/ArmstrongNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;

		case 3:
		{
			fp = fopen("src/number/description/Factorial.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;

		case 4:
		{
			fp = fopen("src/number/description/DeficientNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 5:
		{
			fp = fopen("src/number/description/IntPalindrome.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 6:
		{
			fp = fopen("src/number/description/PerfectNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 7:
		{
			fp = fopen("src/number/description/PrimeNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;

		case 8:
		{
			fp = fopen("src/number/description/ReverseNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;

		case 9:
		{
			fp = fopen("src/number/description/StrongNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 10:
		{
			fp = fopen("src/number/description/NivenNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;

		case 11:
		{
			fp = fopen("src/number/description/DuckNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;

		case 12:
		{
			fp = fopen("src/number/description/DisariumNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 13:
		{
			fp = fopen("src/number/description/AutomorphicNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 14:
		{
			fp = fopen("src/number/description/CompositeNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;

		case 15:
		{
			fp = fopen("src/number/description/SumOfFactors.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;

		case 16:
		{
			fp = fopen("src/number/description/SquareRoot.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 17:
		{
			fp = fopen("src/number/description/DigitCount.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 18:
		{
			fp = fopen("src/number/description/MaxDigit.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 19:
		{
			fp = fopen("src/number/description/MinDigit.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 20:
		{
			fp = fopen("src/number/description/GCD.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 21:
		{
			fp = fopen("src/number/description/LCM.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 22:
		{
			fp = fopen("src/number/description/HCF.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 23:
		{
			fp = fopen("src/number/description/SumOfDigits.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 24:
		{
			fp = fopen("src/number/description/Power.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 25:
		{
			fp = fopen("src/number/description/Leapyear.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;

		case 26:
		{
			fp = fopen("src/number/description/Table.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;

		case 27:
		{
			fp = fopen("src/number/description/EvenNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 28:
		{
			fp = fopen("src/number/description/OddNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 29:
		{
			fp = fopen("src/number/description/SpyNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;

		case 30:
		{
			fp = fopen("src/number/description/ProdOfDigits.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;

		case 31:
		{
			fp = fopen("src/number/description/FibonacciSeries.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 32:
		{
			fp = fopen("src/number/description/DigitSearch.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 33:
		{
			fp = fopen("src/number/description/BellNumber.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 34:
		{
			fp = fopen("src/number/description/AmicableNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 35:
		{
			fp = fopen("src/number/description/AnagramNum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
		case 36:
		{
			fp = fopen("src/number/description/EvenDigitSum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;

		case 37:
		{
			fp = fopen("src/number/description/OddDigitSum.txt", "r");
			while((*str = fgetc(fp)) != EOF){
            str++;
}
            *str = '\0';
			fclose(fp);
		}
		break;
	}	
}

void number_options(int flag, int choice, int input1, int input2, char *numout){

	int intOutput;
	long longOutput;
	float floatOutput;

	if(flag == 1){

		switch (choice){

		case 0:
		{ 
			sprintf(numout,"%s","NO OPTION SELECTED");
			break;
		}
		case 1:
		{
			intOutput = abundant(input1);

			if (intOutput == 1)
			{		
				sprintf(numout,"%d in %s",input1,"ABUNDANT NUMBER");
			}
			else
			{	 
				sprintf(numout,"%d in %s",input1,"NOT AN ABUNDANT NUMBER");
			}
		}
		break;
		case 2:
		{
			intOutput = isArmstrong(input1);

			if (intOutput == 1)
			{		
				sprintf(numout,"%d in %s",input1,"ARMSTRONG NUMBER");
			}
			else
			{	 
				sprintf(numout,"%d in %s",input1,"NOT AN ARMSTRONG NUMBER");
			}
		}
		break;
		case 3:
		{
			longOutput = factorial(input1);
			sprintf(numout, "%ld", longOutput);
		}
		break;
		case 4:
		{
			intOutput = deficient(input1);

			if (intOutput == 1)
			{			
				sprintf(numout,"%d in %s",input1,"DEFICIENT NUMBER");
			}
			else
			{				 
				sprintf(numout,"%d in %s",input1,"NOT AN DEFICIENT NUMBER");
			}
		}
		break;
		case 5:
		{
			intOutput = palindrome(input1);

			if (intOutput == 1)
			{			
				sprintf(numout,"%d in %s",input1,"PALINDROME NUMBER");
			}
			else
			{	 
				sprintf(numout,"%d in %s",input1,"NOT AN PALINDROME NUMBER");
			}
		}
		break;
		case 6:
		{
			intOutput = perfect(input1);

			if (intOutput == 1)
			{		
				sprintf(numout,"%d in %s",input1,"PERFECT NUMBER");
			}
			else
			{
				sprintf(numout,"%d in %s",input1,"NOT AN PERFECT NUMBER");
			}
		}
		break;
		case 7:
		{
			intOutput = isPrime(input1);

			if (intOutput == 1)
			{		
				sprintf(numout,"%d in %s",input1,"PRIME NUMBER");
			}
			else
			{	 
				sprintf(numout,"%d in %s",input1,"NOT AN PRIME NUMBER");
			}
		}
		break;
		case 8:
		{
			intOutput = intReverse(input1);
			sprintf(numout, "%d", intOutput);
		}
		break;
		case 9:
		{
			intOutput = isStrong(input1);

			if (intOutput == 1)
			{			
				sprintf(numout,"%d in %s",input1,"STRONG NUMBER");
			}
			else
			{
				sprintf(numout,"%d in %s",input1,"NOT A STRONG NUMBER");
			}
		}
		break;
		case 10:
		{
			intOutput = isNiven(input1);

			if (intOutput == 1)
			{			
				sprintf(numout,"%d in %s",input1,"NIVEN NUMBER");
			}
			else
			{	 
				sprintf(numout,"%d in %s",input1,"NOT AN NIVEN NUMBER");
			}
		}
		break;
		case 11:
		{
			intOutput = isDuck(input1);

			if (intOutput == 1)
			{			
				sprintf(numout,"%d in %s",input1,"DUCK NUMBER");
			}
			else
			{	 
				sprintf(numout,"%d in %s",input1,"NOT AN DUCK NUMBER");
			}
		}
		break;
		case 12:
		{

			intOutput = isDisarium(input1);

			if (intOutput == 1)
			{		
				sprintf(numout,"%d in %s",input1,"DISARIUM NUMBER");
			}
			else
			{	 
				sprintf(numout,"%d in %s",input1,"NOT AN DISARIUM NUMBER");
			}
		}
		break;
		case 13:
		{

			intOutput = isAutomorphic(input1);

			if (intOutput == 1)
			{	
				sprintf(numout,"%d in %s",input1,"AUTOMORPHIC NUMBER");
			}
			else
			{ 
				sprintf(numout,"%d in %s",input1,"NOT AN AUTOMORPHIC NUMBER");
			}
		}
		break;
		case 14:
		{

			intOutput = isComposite(input1);

			if (intOutput == 1)
			{		
				sprintf(numout,"%d in %s",input1,"COMPOSITE NUMBER");
			}
			else
			{
	 
				sprintf(numout,"%d in %s",input1,"NOT AN COMPOSITE NUMBER");
			}
		}
		break;

		case 15:
		{

			intOutput = sumOfFactors(input1);
			sprintf(numout, "%d", intOutput);

				
			
		}
		break;

		case 16:
		{

			floatOutput = squareRoot(input1);
			sprintf(numout, "%.2f", floatOutput);

				
			
		}
		break;
		case 17:
		{
			intOutput = digitCount(input1);
			sprintf(numout, "%d", intOutput);
				
			
		}
		break;
		case 18:
		{
			intOutput = maxDigit(input1);
			sprintf(numout, "%d", intOutput);
				
			
		}
		break;
		case 19:
		{
			intOutput = minDigit(input1);
			sprintf(numout, "%d", intOutput);
				
			
		}
		break;

		case 23:
				{
					intOutput = sumOfDigits(input1);
					sprintf(numout, "%d", intOutput);
	
						
					
				}
				break;  

		case 25:
		{

			intOutput = leapyear(input1);

			if (intOutput == 1)
			{

					
				sprintf(numout,"%d in %s",input1,"LEAP YEAR");
			}
			else
			{
	
				 
				sprintf(numout,"%d in %s",input1,"NOT A LEAP YEAR");
			}
		}
		break;
		case 26:
		{
			sprintf(numout, Table(input1));

			 
			
		}
		break;
		case 27:
		{

			intOutput = evenNum(input1);

			if (intOutput == 1)
			{

					
				sprintf(numout,"%d in %s",input1,"EVEN NUMBER");
			}
			else
			{
	
				 
				sprintf(numout,"%d in %s",input1,"NOT AN EVEN NUMBER");
			}
		}
		break;
		case 28:
		{

			intOutput = oddNum(input1);

			if (intOutput == 1)
			{

					
				sprintf(numout,"%d in %s",input1,"ODD NUMBER");
			}
			else
			{
	
				 
				sprintf(numout,"%d in %s",input1,"NOT AN ODD NUMBER");
			}
		}
		break;
		case 29:
		{

			intOutput = spyNum(input1);

			if (intOutput == 1)
			{

				
				sprintf(numout,"%d in %s",input1,"SPY NUMBER");
			}
			else
			{
	
				 
				sprintf(numout,"%d in %s",input1,"NOT A SPY NUMBER");
			}
		}
		break;
		case 30:
		{
			intOutput = prodOfDigits(input1);
			sprintf(numout, "%d", intOutput);
		}
		break;
		case 31:
		{
			sprintf(numout, fibonacciRange(input1));
		}
		break;

		case 33:
		{
			sprintf(numout, bellNumber(input1));
		}
		break;
		case 36:
		{
			intOutput = evenDigitSum(input1);
			sprintf(numout, "%d", intOutput);
		}
		break;
		case 37:
		{
			intOutput = oddDigitSum(input1);
			sprintf(numout, "%d", intOutput);
		}
		break;

		default:
		{
			 sprintf(numout,"%s","SWITCH TO RANGE INPUT");
		}
		break;
	}

	}else if(flag == 0){

		switch (choice){

		case 0:
		{
			sprintf(numout,"%s","NO OPTION SELECTED");
		}
		break;
		case 1:
		{
			sprintf(numout,"Abundant number in given range : %s",abundantRange(input1, input2));

			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
			
		}
		break;
		case 2:
		{
			sprintf(numout,"Armstrong number in given range : %s" ,armstrongRange(input1, input2));
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
			
		}
		break;

		case 4:
		{
			sprintf(numout,"Deficient number in given range : %s", deficientRange(input1, input2)); 
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
	
		break;
		case 5:
		{
			sprintf(numout,"Palimdrome number in given range : %s", palindromeRange(input1, input2));
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
			
		}
		break;
		case 6:
		{
			sprintf(numout,"Perfect number in given range : %s", perfectRange(input1, input2));	 
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
				
		}
		break;
		case 7:
		{
			
			sprintf(numout,"Prime number in given range : %s", primeRange(input1, input2));
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
				
		}
		break;

		case 9:
		{
			
			sprintf(numout,"Strong number in given range : %s", strongRange(input1, input2));
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
				
		}
		break;

		case 10:
		{
			
			sprintf(numout,"Niven number in given range : %s", nivenRange(input1, input2));
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
				
		}
		break;

		case 12:
		{
			
			sprintf(numout,"Disarium number in given range : %s", disariumRange(input1, input2));
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
				
		}
		break;

		case 13:
		{
			
			sprintf(numout,"Automorphic number in given range : %s", automorphicRange(input1, input2));
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
				
		}
		break;
		case 14:
		{
			
			sprintf(numout,"Composite number in given range : %s", compositeRange(input1, input2));
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
	
		}
		break;

		case 16:
		{
			
			printf("%d\n", input1);
			printf("%d\n", input2);
			sprintf(numout,"Square root of given range : %s", squareRootRange(input1, input2));
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
				
		}
		break;

		case 20:
		{
			
			intOutput = GCD(input1, input2);
			sprintf(numout,"GCD number in given range : %s", "%d", intOutput);
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
				
		}
		break;

		case 21:
		{
			
			intOutput = lcm(input1, input2);
			sprintf(numout,"LCM number in given range : %s", "%d", intOutput);
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
				
		}
		break;
		case 22:
		{
			
			intOutput = hcf(input1, input2);
			sprintf(numout,"HCF number in given range : %s", "%d", intOutput);
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
				
		}
		break;

		case 24:
		{
			
			intOutput = power(input1, input2);
			sprintf(numout, "%d", intOutput);
			
		}
		break;

		case 25:
		{
			
			sprintf(numout, LeapyearRange(input1, input2));
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
				
		}
		break;

		case 27:
		{
			
			sprintf(numout,"Even number in given range : %s", evenNumRange(input1, input2));
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
				
		}
		break;

		case 28:
		{
			sprintf(numout,"Odd number in given range : %s", oddNumRange(input1, input2));
			
		}
		break;

		case 29:
		{
			
			sprintf(numout,"Spy number in given range : %s", spyNumRange(input1, input2));
			if(strcmp(numout,"-1")==0)
				sprintf(numout,"%s", "NO NUMBER FOUND");
				
		}
		break;
		case 32:
		{
			

			intOutput = digitSearch(input1,input2);

			if (intOutput == 1)
			{

				sprintf(numout,"%s","DIGIT FOUND");
			}
			else
			{
			
				sprintf(numout,"%s","DIGIT NOT FOUND");
			}
		}
		break;
		case 34:
		{
			

			intOutput = amicableNumber(input1, input2);

			if (intOutput == 1)
			{

				sprintf(numout,"%s","AMICABLE NUMBERS");
			}
			else
			{
				sprintf(numout,"%s","NON AMICABLE NUMBERS");
			}
		}
		break;
		case 35:
		{
			

			intOutput = Anagrams_Num(input1, input2);

			if (intOutput == 1){
				sprintf(numout,"%s","ANAGRAM NUMBER");
			}
			else
			{
				sprintf(numout,"%s","NOT AN ANAGRAM NUMBER");
			}
		}
		break;

		default:
		{
			sprintf(numout,"%s","SWITCH TO SINGLE INPUT");
		}
		}
		}
	}
}

void number_show(int flag, int choice, char *str){

	FILE *fp;

	if(flag == 1){
		switch (choice){

		case 0:
		{
			sprintf(str,"%s","NO OPTION SELECTED");
		}
		break;
		case 1:
		{
			fp = fopen("src/number/code/AbundantNum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 2:
		{
			fp = fopen("src/number/code/ArmstrongNum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 3:
		{
			fp = fopen("src/number/code/Factorial.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 4:
		{
			fp = fopen("src/number/code/DeficientNum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 5:
		{
			fp = fopen("src/number/code/IntPalindrome.c", "r");
			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 6:
		{
			fp = fopen("src/number/code/PerfectNum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 7:
		{
			fp = fopen("src/number/code/PrimeNum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 8:
		{
			fp = fopen("src/number/code/ReverseNum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 9:
		{
			fp = fopen("src/number/code/StrongNum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 10:
		{
			fp = fopen("src/number/code/NivenNum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 11:
		{
			fp = fopen("src/number/code/DuckNum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 12:
		{
			fp = fopen("src/number/code/DisariumNum.c", "r");
			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 13:
		{
			fp = fopen("src/number/code/AutomorphicNum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;	
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 14:
		{
			fp = fopen("src/number/code/CompositeNum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 15:
		{
			fp = fopen("src/number/code/SumOfFactors.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 16:
		{
			fp = fopen("src/number/code/SquareRoot.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 17:
		{
			fp = fopen("src/number/code/DigitCount.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 18:
		{
			fp = fopen("src/number/code/MaxDigit.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 19:
		{
			fp = fopen("src/number/code/MinDigit.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 23:
		{
			fp = fopen("src/number/code/SumOfDigits.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 25:
		{
			fp = fopen("src/number/code/Leapyear.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 26:
		{
			fp = fopen("src/number/code/Table.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 27:
		{
			fp = fopen("src/number/code/EvenNum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 28:
		{
			fp = fopen("src/number/code/OddNum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 29:
		{
			fp = fopen("src/number/code/SpyNum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
		*str = '\0';
			fclose(fp);
		}
		break;

		case 30:
		{
			fp = fopen("src/number/code/ProdOfDigits.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 31:
		{
			fp = fopen("src/number/code/FibonacciSeries.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 33:
		{
			fp = fopen("src/number/code/BellNum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 36:
		{
			fp = fopen("src/number/code/EvenDigitSum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 37:
		{
			fp = fopen("src/number/code/OddDigitSum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		default:
		{
			sprintf(str,"%s","Switch to Range Input");
		}
		}
	}else{
		
		switch (choice){

		case 0:
		{
			sprintf(str,"%s","NO OPTION SELECTED");
		}
		break;
		case 1:
		{
			fp = fopen("src/number/code/AbundantNumRange.c", "r");
			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;

		case 2:
		{
			fp = fopen("src/number/code/ArmstrongNumRange.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 4:
		{
			fp = fopen("src/number/code/DeficientNumRange.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 5:
		{
			fp = fopen("src/number/code/IntPalindromeRange.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 6:
		{
			fp = fopen("src/number/code/PerfectNumRange.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 7:
		{
			fp = fopen("src/number/code/PrimeRange.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 9:
		{
			fp = fopen("src/number/code/StrongNumRange.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 10:
		{
			fp = fopen("src/number/code/NivenNumRange.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 12:
		{
			fp = fopen("src/number/code/DisariumNumRange.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 13:
		{
			fp = fopen("src/number/code/AutomorphicNumRange.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 14:
		{
			fp = fopen("src/number/code/CompositeNumRange.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 16:
		{
			fp = fopen("src/number/code/SquareRootRange.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 20:
		{
			fp = fopen("src/number/code/GCD.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 21:
		{
			fp = fopen("src/number/code/LCM.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 22:
		{
			fp = fopen("src/number/code/HCF.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 24:
		{
			fp = fopen("src/number/code/Power.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 25:
		{
			fp = fopen("src/number/code/LeapyearRange.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 27:
		{
			fp = fopen("src/number/code/EvenNumRange.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 28:
		{
			fp = fopen("src/number/code/OddNumRange.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 29:
		{
			fp = fopen("src/number/code/SpyNumRange.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 32:
		{
			fp = fopen("src/number/code/DigitSearch.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		case 35:
		{
			fp = fopen("src/number/code/AnagramNum.c", "r");

			while((*str = fgetc(fp)) != EOF){
            	str++;
			}
			*str = '\0';
			fclose(fp);
		}
		break;
		default:
		{
			sprintf(str,"%s","Switch to Single Input");
		}
		}

	}

}

void number_download(int flag, int choice, char *link){


	if(flag == 1){

		switch (choice){

		case 0:
		{
			sprintf(link,"NO OPTION SELECTED");
		}
		break;
		case 1:
		{
			download("src/number/code/AbundantNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 2:
		{
			download("src/number/code/ArmstrongNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 3:
		{
			download("src/number/code/Factorial.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 4:
		{
			download("src/number/code/DeficientNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 5:
		{
			download("src/number/code/IntPalindrome.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 6:
		{
			download("src/number/code/PerfectNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 7:
		{
			download("src/number/code/PrimeNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 8:
		{

			download("src/number/code/ReverseNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 9:
		{
			download("src/number/code/StrongNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 10:
		{
			download("src/number/code/NivenNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 11:
		{
			download("src/number/code/DuckNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 12:
		{
			download("src/number/code/DisariumNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 13:
		{
			download("src/number/code/AutomorphicNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 14:
		{
			download("src/number/code/CompositeNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 15:
		{
			download("src/number/code/SumOfFactors.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 16:
		{
			download("src/number/code/SquareRoot.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 17:
		{
			download("src/number/code/DigitCount.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 18:
		{
			download("src/number/code/MaxDigit.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 19:
		{
			download("src/number/code/MinDigit.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 23:
		{
			download("src/number/code/SumOfDigits.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 25:
		{
			download("src/number/code/Leapyear.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 26:
		{
			download("src/number/code/Table.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 27:
		{
			download("src/number/code/EvenNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 28:
		{
			download("src/number/code/OddNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;
		case 29:
		{
			download("src/number/code/SpyNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 30:
		{
			download("src/number/code/ProdOfDigits.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 31:
		{
			download("src/number/code/FibonacciSeries.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 33:
		{
			download("src/number/code/BellNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 36:
		{
			download("src/number/code/EvenDigitSum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 37:
		{
			download("src/number/code/OddDigitSum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		default:
		{
			sprintf(link,"Switch to Range Input");
		}
		}
	}else{

		switch (choice){

		case 0:
		{
			sprintf(link,"NO OPTION SELECTED");
		}
		break;
		case 1:
		{
			download("src/number/code/AbundantNumRange.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 2:
		{
			download("src/number/code/ArmstrongNumRange.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 4:
		{
			download("src/number/code/DeficientNumRange.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 5:
		{
			download("src/number/code/IntPalindromeRange.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 6:
		{
			download("src/number/code/PerfectNumRange.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 7:
		{
			download("src/number/code/PrimeRange.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 9:
		{
			download("src/number/code/StrongNumRange.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 10:
		{
			download("src/number/code/NivenNumRange.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 12:
		{
			download("src/number/code/DisariumNumRange.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 13:
		{
			download("src/number/code/AutomorphicNumRange.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 14:
		{
			download("src/number/code/CompositeNumRange.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 16:
		{
			download("src/number/code/SquareRootRange.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;
		case 20:
		{
			download("src/number/code/GCD.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;
		case 21:
		{
			download("src/number/code/LCM.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 22:
		{
			download("src/number/code/HCF.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 24:
		{
			download("src/number/code/Power.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 25:
		{
			download("src/number/code/LeapyearRange.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 27:
		{
			download("src/number/code/EvenNumRange.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 28:
		{
			download("src/number/code/OddNumRange.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 29:
		{
			download("src/number/code/SpyNumRange.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 32:
		{
			download("src/number/code/DigitSearch.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		case 35:
		{
			download("src/number/code/AnagramNum.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
		}
		break;

		default:
		{
			sprintf(link,"Switch to Single Input");
		}
		}

	}
}
