#include"pattern.h"

int printf(const char *format,...);
int scanf(const char*format,...);

int pattern_options(int choice, int row, char *str){

	sprintf(str,"",str);
	
	if(choice<=0){
	
		strcat(str,"Enter enter choice correctly");
		return -1;
	}
	switch(choice){
	
		case 1:
			{
				if(Pattern1(str, row)){
					row = 0;
					printf("%s",str);
				}
			}
			break;
	
		case 2:
			{
				if(Pattern2(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
	
		case 3:
			{
				if(Pattern3(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 4:
			{
				if(Pattern4(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 5:
			{
				if(Pattern5(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 6:
			{
				if(Pattern6(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;

	
		
		case 7:
			{
				if(Pattern7(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 8:
			{
				if(Pattern8(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 9:
			{
				if(Pattern9(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 10:
			{
				if(Pattern10(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 11:
			{
				if(Pattern11(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 12:
			{
				if(Pattern12(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 13:
			{
				if(Pattern13(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 14:
			{
				if(Pattern14(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 15:
			{
				if(Pattern15(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 16:
			{
				if(Pattern16(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 17:
			{
				if(Pattern17(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 18:
			{
				if(Pattern18(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 19:
			{
				if(Pattern19(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 20:
			{
				if(Pattern20(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 21:
			{
				if(Pattern21(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 22:
			{
				if(Pattern22(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 23:
			{
				if(Pattern23(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}

			break;
		case 24:
			{
				if(Pattern24(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 25:
			{
				if(Pattern25(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 26:
			{
				if(Pattern26(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 27:
			{
				if(Pattern27(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 28:
			{	
				if(Pattern28(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 29:
			{
				if(Pattern29(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 30:
			{
				if(Pattern30(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 31:
			{
				if(Pattern31(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 32:
			{
				if(Pattern32(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 33:
			{
				if(Pattern33(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 34:
			{
				if(Pattern34(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 35:
			{
				if(Pattern35(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 36:
			{
				if(Pattern36(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 37:
			{
				if(Pattern37(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 38:
			{
				if(Pattern38(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;

		case 39:
			{
				if(Pattern39(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		
		case 40:
			{
				if(Pattern40(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 41:
			{
				if(Pattern41(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 42:
			{
				if(Pattern42(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 43:
			{
				if(Pattern43(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 44:
			{
				if(Pattern44(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 45:
			{
				if(Pattern45(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 46:
			{
				if(Pattern46(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 47:
			{
				if(Pattern47(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 48:
			{
				if(Pattern48(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 49:
			{
				if(Pattern49(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 50:
			{
				if(Pattern50(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 51:
			{
				if(Pattern51(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 52:
			{
				if(Pattern52(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
		case 53:
			{
				if(Pattern53(str, row)){
					printf("%s\n",str);
					row = 0;
				}
			}
			break;
	
		case 54:
			{
				if(Pattern54(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
	
		case 55:
			{
				if(Pattern55(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 56:
			{
				if(Pattern56(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 57:
			{
				if(Pattern57(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 58:
			{
				if(Pattern58(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 59:
			{
				if(Pattern59(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 60:
			{
				if(Pattern60(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 61:
			{
				if(Pattern61(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 62:
			{
				if(Pattern62(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 63:
			{
				if(Pattern63(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 64:
			{
				if(Pattern64(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 65:
			{
				if(Pattern65(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 66:
			{
				if(Pattern66(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 67:
			{
				if(Pattern67(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 68:
			{
				if(Pattern68(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 69:
			{
				if(Pattern69(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 70:
			{
				if(Pattern70(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 71:
			{
				if(Pattern71(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 72:
			{
				if(Pattern72(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 73:
			{
				if(Pattern73(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 74:
			{
				if(Pattern74(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 75:
			{
				if(Pattern75(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 76:
			{
				if(Pattern76(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 77:
			{
				if(Pattern77(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;

		case 78:
			{
				if(Pattern78(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 80:
			{
				if(Pattern80(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 81:
			{
				if(Pattern81(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 82:
			{
				if(Pattern82(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 83:
			{
				if(Pattern83(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 84:
			{
				if(Pattern84(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 85:
			{
				if(Pattern85(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 86:
			{
				if(Pattern86(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 87:
			{
				if(Pattern87(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 88:
			{
				if(Pattern88(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 89:
			{
				if(Pattern89(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 90:
			{
				if(Pattern90(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 91:
			{
				if(Pattern91(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 92:
			{
				if(Pattern92(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 93:
			{
				if(Pattern93(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 94:
			{
				if(Pattern94(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 95:
			{
				if(Pattern95(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 96:
			{
				if(Pattern96(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 97:
			{
				if(Pattern97(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 98:
			{
				if(Pattern98(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 99:
			{
				if(Pattern99(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 100:
			{
				if(Pattern100(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 101:
			{
				if(Pattern101(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 102:
			{
				if(Pattern102(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 103:
			{
				if(Pattern103(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		
		case 104:
			{
				if(Pattern104(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 105:
			{
				if(Pattern105(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 106:
			{
				if(Pattern106(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 107:
			{
				if(Pattern107(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 108:
			{
				if(Pattern108(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 109:
			{
				if(Pattern109(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 110:
			{
				if(Pattern110(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 111:
			{
				if(Pattern111(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 112:
			{
				if(Pattern112(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 113:
			{
				if(Pattern113(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 114:
			{
				if(Pattern114(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 115:
			{
				if(Pattern115(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 116:
			{
				if(Pattern116(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 117:
			{
				if(Pattern117(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 118:
			{
				if(Pattern118(str, row))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 119:
			{
				if(Pattern119(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 120:
			{
				if(Pattern120(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
		case 121:
			{
				if(Pattern121(str, row*2-1))
					printf("%s\n",str);
					row = 0;
			}
			break;
	}
}


int pattern_show(int choice, char *str){

	sprintf(str,"",str);
	
	if(choice<=0){
	
		strcat(str,"Enter enter choice correctly");
		return -1;
	}
	switch(choice){
	
		case 1:{
			FILE *p1 = fopen("src/pattern/code/Pattern1.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
		       }
			break;
		case 2:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern2.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
	
		case 3:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern3.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 4:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern4.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 5:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern5.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 6:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern6.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 7:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern7.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 8:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern8.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 9:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern9.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 10:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern10.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 11:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern11.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 12:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern12.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 13:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern13.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 14:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern14.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 15:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern15.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 16:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern16.c","r");

                       	while((*str = fgetc(p1)) != EOF){
                              	str++;
                       	}
                      	*str = '\0';
			}
			break;
		case 17:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern17.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 18:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern18.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 19:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern19.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 20:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern20.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 21:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern21.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 22:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern22.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 23:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern23.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 24:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern24.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 25:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern25.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 26:{
			FILE *p1 = fopen("src/pattern/code/Pattern26.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 27:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern27.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 28:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern28.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 29:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern29.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 30:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern30.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 31:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern31.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 32:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern32.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 33:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern33.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 34:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern34.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 35:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern35.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 36:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern36.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 37:
			{
			FILE *p1 = fopen("src/pattern/code/Patter37.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 38:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern38.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;

		case 39:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern39.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		
		case 40:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern40.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 41:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern41.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 42:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern42.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 43:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern43.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 44:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern44.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 45:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern45.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 46:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern46.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 47:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern47.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 48:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern48.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 49:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern49.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 50:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern50.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 51:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern51.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 52:
			FILE *p1 = fopen("src/pattern/code/Pattern52.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			break;
		case 53:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern53c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
	
		case 54:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern54.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
	
		case 55:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern55.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 56:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern56.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 57:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern57.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 58:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern58.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 59:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern59.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 60:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern60.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 61:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern61.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 62:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern62.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 63:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern63.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 64:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern64.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
			case 65:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern65.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 66:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern66.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 67:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern67.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 68:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern68.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 69:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern69.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 70:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern70.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 71:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern71.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 72:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern72.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 73:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern73.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 74:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern74.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 75:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern75.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 76:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern76.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 77:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern77.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;

		case 78:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern78.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 80:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern80.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 81:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern81.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 82:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern82.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 83:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern83.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        }
			break;
		case 84:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern84.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 85:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern85.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 86:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern86.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 87:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern87.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 88:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern88.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 89:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern89.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 90:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern90.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 91:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern91.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 92:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern92.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 93:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern93.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 94:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern94.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 95:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern95.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 96:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern96.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 97:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern97.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 98:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern98.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 99:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern99.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 100:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern100.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 101:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern101.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 102:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern102.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 103:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern103.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		
		case 104:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern104.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 105:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern105.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 106:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern106.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 107:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern107.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 108:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern108.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 109:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern109.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 110:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern110.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 111:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern111.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 112:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern112.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 113:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern113.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 114:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern114.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 115:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern115.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 116:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern116.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 117:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern117.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 118:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern118.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 119:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern119.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 120:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern120.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
		case 121:
			{
			FILE *p1 = fopen("src/pattern/code/Pattern121.c","r");

                        while((*str = fgetc(p1)) != EOF){
                                str++;
                        }
                        *str = '\0';
			}
			break;
	}
}			

void pattern_download(int choice, char *link){

	switch(choice){

		case 1:
			download("src/pattern/code/Pattern1.c");
			break;
		case 2:
            download("src/pattern/code/Pattern2.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
            break;
		case 3:
            download("src/pattern/code/Pattern3.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
            break;
		case 4:
            download("src/pattern/code/Pattern4.c");
			sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
            break;
		case 5:
                        download("src/pattern/code/Pattern5.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
		case 6:
                        download("src/pattern/code/Pattern6.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
			break;
		case 7:
                        download("src/pattern/code/Pattern7.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
		case 8:
                        download("src/pattern/code/Pattern8.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
		case 9:
                        download("src/pattern/code/Pattern9.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
		case 10:
                        download("src/pattern/code/Pattern10.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
		case 11:
                        download("src/pattern/code/Pattern11.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
		case 12:
                        download("src/pattern/code/Pattern12.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
		case 13:
                        download("src/pattern/code/Pattern13.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
		case 14:
                        download("src/pattern/code/Pattern14.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
		case 15:
                        download("src/pattern/code/Pattern15.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
		case 16:
                        download("src/pattern/code/Pattern16.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
		case 17:
                        download("src/pattern/code/Pattern17.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
		case 18:
                        download("src/pattern/code/Pattern18.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
		case 19:
                        download("src/pattern/code/Pattern19.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
		case 20:
                        download("src/pattern/code/Pattern20.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 21:
                        download("src/pattern/code/Pattern21.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 22:
                        download("src/pattern/code/Pattern22.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 23:
                        download("src/pattern/code/Pattern23.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 24:
                        download("src/pattern/code/Pattern24.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 25:
                        download("src/pattern/code/Pattern25.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 26:
                        download("src/pattern/code/Pattern26.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 27:
                        download("src/pattern/code/Pattern27.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 28:
                        download("src/pattern/code/Pattern28.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 29:
                        download("src/pattern/code/Pattern29.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
		case 30:
                        download("src/pattern/code/Pattern30.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 31:
                        download("src/pattern/code/Pattern31.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 32:
                        download("src/pattern/code/Pattern32.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 33:
                        download("src/pattern/code/Pattern33.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 34:
                        download("src/pattern/code/Pattern34.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 35:
                        download("src/pattern/code/Pattern35.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 36:
                        download("src/pattern/code/Pattern36.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 37:
                        download("src/pattern/code/Pattern37.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 38:
                        download("src/pattern/code/Pattern38.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 39:
                        download("src/pattern/code/Pattern39.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
		case 40:
                        download("src/pattern/code/Pattern40.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 41:
                        download("src/pattern/code/Pattern41.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 42:
                        download("src/pattern/code/Pattern42.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 43:
                        download("src/pattern/code/Pattern43.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 44:
                        download("src/pattern/code/Pattern44.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 45:
                        download("src/pattern/code/Pattern45.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 46:
                        download("src/pattern/code/Pattern46.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 47:
                        download("src/pattern/code/Pattern47.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 48:
                        download("src/pattern/code/Pattern48.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 49:
                        download("src/pattern/code/Pattern49.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
				case 50:
                        download("src/pattern/code/Pattern50.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 51:
                        download("src/pattern/code/Pattern51.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 52:
                        download("src/pattern/code/Pattern52.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 53:
                        download("src/pattern/code/Pattern53.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 54:
                        download("src/pattern/code/Pattern54.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 55:
                        download("src/pattern/code/Pattern55.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 56:
                        download("src/pattern/code/Pattern56.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 57:
                        download("src/pattern/code/Pattern57.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 58:
                        download("src/pattern/code/Pattern58.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 59:
                        download("src/pattern/code/Pattern59.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
				case 60:
                        download("src/pattern/code/Pattern60.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 61:
                        download("src/pattern/code/Pattern61.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 62:
                        download("src/pattern/code/Pattern62.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 63:
                        download("src/pattern/code/Pattern63.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 64:
                        download("src/pattern/code/Pattern64.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 65:
                        download("src/pattern/code/Pattern65.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 66:
                        download("src/pattern/code/Pattern66.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 67:
                        download("src/pattern/code/Pattern67.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 68:
                        download("src/pattern/code/Pattern68.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 69:
                        download("src/pattern/code/Pattern69.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
				case 70:
                        download("src/pattern/code/Pattern70.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 71:
                        download("src/pattern/code/Pattern71.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 72:
                        download("src/pattern/code/Pattern72.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 73:
                        download("src/pattern/code/Pattern73.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 74:
                        download("src/pattern/code/Pattern74.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 75:
                        download("src/pattern/code/Pattern75.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 76:
                        download("src/pattern/code/Pattern76.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 77:
                        download("src/pattern/code/Pattern77.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 78:
                        download("src/pattern/code/Pattern78.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 79:
                        download("src/pattern/code/Pattern89.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
				case 80:
                        download("src/pattern/code/Pattern80.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 81:
                        download("src/pattern/code/Pattern81.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 82:
                        download("src/pattern/code/Pattern82.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 83:
                        download("src/pattern/code/Pattern83.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 84:
                        download("src/pattern/code/Pattern84.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 85:
                        download("src/pattern/code/Pattern85.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 86:
                        download("src/pattern/code/Pattern86.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 87:
                        download("src/pattern/code/Pattern87.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 88:
                        download("src/pattern/code/Pattern88.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 89:
                        download("src/pattern/code/Pattern89.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
				case 90:
                        download("src/pattern/code/Pattern90.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 91:
                        download("src/pattern/code/Pattern91.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 92:
                        download("src/pattern/code/Pattern92.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 93:
                        download("src/pattern/code/Pattern93.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 94:
                        download("src/pattern/code/Pattern94.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 95:
                        download("src/pattern/code/Pattern95.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 96:
                        download("src/pattern/code/Pattern96.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 97:
                        download("src/pattern/code/Pattern97.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 98:
                        download("src/pattern/code/Pattern98.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 99:
                        download("src/pattern/code/Pattern99.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
				case 100:
                        download("src/pattern/code/Pattern100.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 101:
                        download("src/pattern/code/Pattern101.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 102:
                        download("src/pattern/code/Pattern102.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 103:
                        download("src/pattern/code/Pattern103.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 104:
                        download("src/pattern/code/Pattern104.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 105:
                        download("src/pattern/code/Pattern105.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 106:
                        download("src/pattern/code/Pattern106.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 107:
                        download("src/pattern/code/Pattern107.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 108:
                        download("src/pattern/code/Pattern108.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 109:
                        download("src/pattern/code/Pattern109.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
				case 110:
                        download("src/pattern/code/Pattern110.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 111:
                        download("src/pattern/code/Pattern111.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 112:
                        download("src/pattern/code/Pattern112.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 113:
                        download("src/pattern/code/Pattern113.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 114:
                        download("src/pattern/code/Pattern114.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 115:
                        download("src/pattern/code/Pattern115.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 116:
                        download("src/pattern/code/Pattern116.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 117:
                        download("src/pattern/code/Pattern117.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 118:
                        download("src/pattern/code/Pattern118.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 119:
                        download("src/pattern/code/Pattern119.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
				case 120:
                        download("src/pattern/code/Pattern120.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                case 121:
                        download("src/pattern/code/Pattern121.c");
						sprintf(link,
				"The code is ready in Source_Code.c file\n\nView by link : "
				"<a href=\"file:home/jay/jay/Projects/CodeLib.h-main/CodeLib for ubuntu/Source_Code.c\">"
				"Copy This Link</a>");
                        break;
                default:
					printf("error in choice for pattern download");
					break;
	}
}
		
