#include"myString.h"

int string_description(int choice, char *str){

    sprintf(str,"",str);
	
	if(choice<=0){
	
		strcat(str,"Enter enter choice correctly");
		return -1;
	}
	FILE* fp;
	switch(choice)
	{
        case 1:{
		    
		    fp = fopen("src/string/description/str1.txt", "r");
		    while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		    fclose(fp);
            }
	        break;
	    case 2:{
		
		    fp = fopen("src/string/description/str2.txt", "r");
		    while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		    fclose(fp);
	        }
	        break;
	    case 3:
	{
		
		fp = fopen("src/string/description/str3.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 4:
	{
		
		fp = fopen("src/string/description/str4.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 5:
	{
		
		fp = fopen("src/string/description/str5.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 6:
	{
		
		fp = fopen("src/string/description/str6.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 7:
	{
		
		fp = fopen("src/string/description/str7.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 8:
	{
		
		fp = fopen("src/string/description/str8.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 9:
	{
		
		fp = fopen("src/string/description/str9.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 10:
	{
		
		fp = fopen("src/string/description/str10.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 11:
	{
		
		fp = fopen("src/string/description/str11.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 12:
	{
		
		fp = fopen("src/string/description/str12.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 13:
	{
		
		fp = fopen("src/string/description/str13.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 14:
	{
		
		fp = fopen("src/string/description/str14.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 15:
	{
		
		fp = fopen("src/string/description/str15.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 16:
	{
		
		fp = fopen("src/string/description/str16.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 17:
	{
		
		fp = fopen("src/string/description/str17.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 18:
	{
		
		fp = fopen("src/string/description/str18.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 19:
	{
		
		fp = fopen("src/string/description/str19.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 20:
	{
		
		fp = fopen("src/string/description/str20.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 21:
	{
		
		fp = fopen("src/string/description/str21.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 22:
	{
		
		fp = fopen("src/string/description/str22.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 23:
	{
		
		fp = fopen("src/string/description/str23.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 24:
	{
		
		fp = fopen("src/string/description/str24.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 25:
	{
		
		fp = fopen("src/string/description/str25.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;

	case 26:
	{
		
		fp = fopen("src/string/description/str26.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 27:
	{
		
		fp = fopen("src/string/description/str27.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 28:
	{
		
		fp = fopen("src/string/description/str28.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 29:
	{
		
		fp = fopen("src/string/description/str29.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 30:
	{
		
		fp = fopen("src/string/description/str30.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 31:
	{
		
		fp = fopen("src/string/description/str31.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 32:
	{
		
		fp = fopen("src/string/description/str32.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 33:
	{
		
		fp = fopen("src/string/description/str33.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 34:
	{
		
		fp = fopen("src/string/description/str34.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 35:
	{
		
		fp = fopen("src/string/description/str35.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 36:
	{
		
		fp = fopen("src/string/description/str36.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 37:
	{
		
		fp = fopen("src/string/description/str37.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 38:
	{
		
		fp = fopen("src/string/description/str38.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 39:
	{
		
		fp = fopen("src/string/description/str39.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 40:
	{
		
		fp = fopen("src/string/description/str40.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 41:
	{
		
		fp = fopen("src/string/description/str41.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 42:
	{
		
		fp = fopen("src/string/description/str42.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 43:
	{
		
		fp = fopen("src/string/description/str43.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 44:
	{
		
		fp = fopen("src/string/description/str44.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	case 45:
	{
		
		fp = fopen("src/string/description/str45.txt", "r");
		while((*str = fgetc(fp)) != EOF){
            	str++;
			}
            *str = '\0';
		fclose(fp);
	}
	break;
	}
}

void string_option(int choice, char *sin1, char *sin2, int in1, int in2, char *str){

    switch (choice)
	{
	case 1:
	{
		if (strlen(sin1) != 0)
		{
			char ptr = firstRepChar(sin1);
			if (firstRepChar(sin1) >= 1 && firstRepChar(sin1) <= 128)
			{
				sprintf(str, "FIRST REPEATED CHARACTER : %c", ptr);
				
			}
			else
			{
				sprintf(str, "NO REPEATED CHARACTER");
				
			}
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 2:
	{
		if (strlen(sin1) != 0)
		{
			if (isAlpha(sin1))
			{
				sprintf(str, "%s : ONLY ALPHABETS", sin1);
				
			}
			else
			{
				sprintf(str, "%s : NON-ALPHABETIC CHARACTER PRESENT", sin1);
				
			}
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 3:
	{
		if (strlen(sin1) != 0)
		{
			if (isAlphaNum(sin1))
			{
				sprintf(str, "%s : ALPHA NUMERIC", sin1);
				
			}
			else
			{
				sprintf(str, "%s : ONLY ALPHABETS", sin1);
				
			}
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 4:
	{
		if (strlen(sin1) != 0)
		{
			if (isDigit(sin1))
			{
				sprintf(str, "%s : ONLY INTEGER", sin1);
				
			}
			else
			{
				sprintf(str, "%s : NON-INTEGER CHARACTERS PRESENT", sin1);
				
			}
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 5:
	{
		if (strlen(sin1) != 0)
		{
			if (isPalindrome(sin1))
			{
				sprintf(str, "%s : PALINDROME STRING", sin1);
				
			}
			else
			{
				sprintf(str, "%s : NON-PALINDROME STRING", sin1);
				
			}
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 6:
	{
		char *ch = largestChar(sin1);
		if (strlen(sin1) != 0)
		{
			sprintf(str, "LARGEST ASCII VALUE CHARACTER : %s", ch);
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 7:
	{
		if (myStrLen(sin1) != 0)
		{
			sprintf(str, "STRING LENGTH : %d", myStrLen(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 8:
	{
		if (myStrLen(sin1) != 0)
		{
			char temp[1000];
			strcpy(temp, sin1);
			sprintf(str, "BEFORE : %s\n\nAFTER : %s", temp, myStrRev(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 9:
	{
		if (myStrLen(sin1) != 0)
		{
			sprintf(str, "NUMBER OF ALPHABETS : %d", strAlphaCount(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 10:
	{
		if (myStrLen(sin1) != 0)
		{
			sprintf(str, "NUMBER OF INTEGERS : %d", strDigitCount(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;

	case 11:
	{
		if (strlen(sin1) != 0)
		{
			char temp[1000];
			strcpy(temp, sin1);
			char *ptr = toLowerCase(sin1);
			sprintf(str, "BEFORE : %s\n\nAFTER : %s", temp, ptr);
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 12:
	{
		if (strlen(sin1) != 0)
		{
			char temp[1000];
			strcpy(temp, sin1);
			char *ptr = toUpperCase(sin1);
			sprintf(str, "BEFORE : %s\n\nAFTER : %s", temp, ptr);
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 13:
	{
		char temp[1000];
		strcpy(temp, sin1);
		char *ptr = toToggleCase(sin1);
		if (strlen(sin1) != 0)
		{
			sprintf(str, "BEFORE : %s\n\nAFTRE : %s", temp, ptr);
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 14:
	{
		char ptr[10000];
		myStrCpy(ptr, sin1);
		if (strlen(sin1) != 0)
		{
			sprintf(str, ptr);
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 15:
	{
		if (strlen(sin1) != 0)
		{
			sprintf(str, "CONSONANT COUNT : %d", consonantCount(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 16:
	{
		if (strlen(sin1) != 0)
		{
			sprintf(str, "VOWEL COUNT : %d", vowelCount(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 17:
	{
		if (strlen(sin1) != 0)
		{
			sprintf(str, "LOWER CASE COUNT : %d", lowerCount(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 18:
	{
		if (strlen(sin1) != 0)
		{
			sprintf(str, "UPPER CASE COUNT : %d", upperCount(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 19:
	{
		if (strlen(sin1) != 0)
		{
			char temp[1000];
			strcpy(temp, sin1);
			sprintf(str, "BEFORE : %s\n\nAFTER : %s", temp, delDuplicate(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 20:
	{
		if (strlen(sin1) != 0)
		{
			char temp[1000];
			strcpy(temp, sin1);
			sprintf(str, "BEFORE : %s\n\nAFTER : %s", temp, charWordrev(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 21:
	{
		if (strlen(sin1) != 0)
		{
			char temp[1000];
			strcpy(temp, sin1);
			sprintf(str, "BEFORE : %s\n\nAFTER : %s", temp, removeDuplicates(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 22:
	{
		if (strlen(sin1) != 0)
		{
			char temp[1000];
			strcpy(temp, sin1);
			sprintf(str, "BEFORE : %s\n\nAFTER : %s", temp, remSpace(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 23:
	{
		if (strlen(sin1) != 0)
		{
			char temp[1000];
			strcpy(temp, sin1);
			sprintf(str, "BEFORE : %s\n\nAFTER : %s", temp, strSortAcce(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 24:
	{
		if (strlen(sin1) != 0)
		{
			char temp[1000];
			strcpy(temp, sin1);
			sprintf(str, "BEFORE : %s\n\nAFTER : %s", temp, strSortDesc(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 25:
	{
		if (strlen(sin1) != 0)
		{
			sprintf(str, "SPACE COUNT : %d ", spaceCount(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 26:
	{
		if (strlen(sin1) != 0)
		{
			sprintf(str, "SPECIAL CHARACTER COUNT : %d ", spcharCount(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 27:
	{
		if (strlen(sin1) != 0)
		{
			sprintf(str, "STRING TITLE : %s ", strTitle(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 28:
	{
		char temp[1000];
		strcpy(temp, sin1);
		char ptr[10000];
		strTrim(sin1, ptr);
		if (strlen(sin1) != 0)
		{
			sprintf(str, "BEFORE : %s\n\nAFTER : %s ", temp, ptr);
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 29:
	{
		if (strlen(sin1) != 0)
		{
			char temp[1000];
			strcpy(temp, sin1);
			sprintf(str, "BEFORE : %s\n\nAFTER : %s", temp, wordCapitlize(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 30:
	{
		if (strlen(sin1) != 0)
		{
			sprintf(str, "WORD COUNT : %d ", strWordCount(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 31:
	{
		if (strlen(sin1) != 0)
		{
			char temp[1000];
			strcpy(temp, sin1);
			sprintf(str, "BEFORE  : %s\n\nAFTER : %s", temp, revWord(sin1));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	/*******************************************************DOUBLE INPUT*************************************************************/
	case 32:
	{
		if (strlen(sin1) != 0 && strlen(sin2) == 1)
		{
			sprintf(str, "OCCCURANCE OF %s : %d", sin2, countOcc(sin1, sin2[0]));
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 33:
	{
		if (strlen(sin1) != 0 && strlen(sin2) == 1)
		{
			if (firstOccurance(sin1, sin2[0]) == -1)
			{
				sprintf(str, "%s NOT PRESENT", sin2);
				
			}
			else
			{
				sprintf(str, "FIRST OCCCURANCE OF %s : %d INDEX", sin2, firstOccurance(sin1, sin2[0]));
				
			}
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 34:
	{
		if (strlen(sin1) != 0 && strlen(sin2) == 1)
		{
			if (lastOccurance(sin1, sin2[0]) == -1)
			{
				sprintf(str, "%s NOT PRESENT", sin2);
				
			}
			else
			{
				sprintf(str, "LAST OCCCURANCE OF %s : %d INDEX", sin2, lastOccurance(sin1, sin2[0]));
				
			}
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 35:
	{
		if (strlen(sin1) != 0 && strlen(sin2) != 0)
		{
			myStrCat(sin1, sin2);
			sprintf(str, "%s", sin1);
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 36:
	{
		if (strlen(sin1) != 0 && strlen(sin2) != 0)
		{
			if (myStrCmp(sin1, sin2))
			{
				sprintf(str, "SIMILAR STRINGS");
				
			}
			else
			{
				sprintf(str, "DIFFERENT STRINGS");
				
			}
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 37:
	{
		if (strlen(sin1) != 0 && strlen(sin2) != 0)
		{
			if (myStrCmpi(sin1, sin2))
			{
				sprintf(str, "SIMILAR STRINGS");
				
			}
			else
			{
				sprintf(str, "DIFFERENT STRINGS");
				
			}
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 38:
	{
		if (strlen(sin1) != 0 && strlen(sin2) != 0)
		{
			if (isAnagram(sin1, sin2))
			{
				sprintf(str, "ANAGRAM STRINGS");
				
			}
			else
			{
				sprintf(str, "NON-ANAGRAM STRINGS");
				
			}
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 39:
	{
		if (strlen(sin1) != 0 && in1 >= 0)
		{
			char temp[1000];
			strcpy(temp, sin1);
			revUptoN(sin1, in1);
			sprintf(str, "BEFORE : %s\n\nAFTER : %s", temp, sin1);
			
		}
		else if (strlen(sin1) != 0 && in1 >= strlen(sin1))
		{
			sprintf(str, "INVALID RANGE");
			
		}
		else if (strlen(sin1) == 0)
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 40:
	{
		if (strlen(sin1) != 0 && strlen(sin1) != 0)
		{
			char temp[1000];
			strcpy(temp, sin1);
			catUptospace(sin1, sin2);
			sprintf(str, "BEFORE : %s\n\nAFTER : %s", temp, sin1);
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 41:
	{
		if (strlen(sin1) != 0 && strlen(sin2) == 1 && rfind(sin1, sin2[0]))
		{
			sprintf(str, "DISTANCE OF %s FROM END : %d", sin2, rfind(sin1, sin2[0]));
			
		}
		else if (rfind(sin1, sin2[0]) == 0)
		{
			sprintf(str, "%s NOT PRESENT", sin2);
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 42:
	{
		if (strlen(sin1) != 0 && in1 <= in2)
		{
			char temp[1000];
			strcpy(temp, sin1);
			strRevRange(sin1, in1, in2);
			sprintf(str, "BEFORE : %s\n\nAFTER : %s", temp, sin1);
			
		}
		else if (in1 > in2 && strlen(sin1) != 0)
		{
			sprintf(str, "INVALID RANGE");
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 43:
	{
		int range = in1;
		if (strlen(sin1) != 0 && strlen(sin2) != 0 && range <= strlen(sin2))
		{
			char temp[1000];
			strcpy(temp, sin1);
			catUpton(sin1, sin2, range);
			sprintf(str, "BEFORE : %s\n\nAFTER : %s", temp, sin1);
			
		}
		else if (range > strlen(sin1))
		{
			sprintf(str, "INVALID RANGE");
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 44:
	{
		int range = in1;
		if (strlen(sin1) != 0 && strlen(sin2) == 1 && range <= strlen(sin1))
		{
			char temp[1000];
			strcpy(temp, sin1);
			repCharPos(sin1, sin2[0], range);
			sprintf(str, "BEFORE : %s\n\nAFTER : %s", temp, sin1);
			
		}
		else if (range > strlen(sin1))
		{
			sprintf(str, "INVALID RANGE");
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;
	case 45:
	{
		int range = in1;
		if (strlen(sin1) != 0 && range <= strlen(sin1))
		{
			char *ptr = charAt(sin1, range);
			sprintf(str, "POSITION OF %s : %d", ptr, range);
			
		}
		else if (range > strlen(sin1))
		{
			sprintf(str, "INVALID RANGE");
			
		}
		else
		{
			sprintf(str, "ENTER COMPLETE STRING");
			
		}
	}
	break;

	default:
		sprintf(str,"NO OPTION SELECTED");
		break;
	}
	

}