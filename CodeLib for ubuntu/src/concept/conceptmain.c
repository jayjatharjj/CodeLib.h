
void c_content_options(int ch,char *str){

        switch(ch){
        
                case 1:
			sprintf(str,"",str);
                        FILE *f1 = fopen("src/concept/content/intro.txt","r");

                        while((*str = fgetc(f1)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
		case 2:
			sprintf(str,"",str);
                        FILE *f2 = fopen("src/concept/content/datatype.txt","r");

                        while((*str = fgetc(f2)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
		case 3:
			sprintf(str,"",str);
                        FILE *f3 = fopen("src/concept/content/operator.txt","r");

                        while((*str = fgetc(f3)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
		case 4:
			sprintf(str,"",str);
                        FILE *f4 = fopen("src/concept/content/statement.txt","r");

                        while((*str = fgetc(f4)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 5:
			sprintf(str,"",str);
                        FILE *f5 = fopen("src/concept/content/loop.txt","r");

                        while((*str = fgetc(f5)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 6:
			sprintf(str,"",str);
                        FILE *f6 = fopen("src/concept/content/array.txt","r");

                        while((*str = fgetc(f6)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 7:
			sprintf(str,"",str);
                        FILE *f7 = fopen("src/concept/content/pointer.txt","r");

                        while((*str = fgetc(f7)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 8:
			sprintf(str,"",str);
                        FILE *f8 = fopen("src/concept/content/rap.txt","r");

                        while((*str = fgetc(f8)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 9:
			sprintf(str,"",str);
                        FILE *f9 = fopen("src/concept/content/function.txt","r");

                        while((*str = fgetc(f9)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 10:
			sprintf(str,"",str);
                        FILE *f10 = fopen("src/concept/content/string.txt","r");

                        while((*str = fgetc(f10)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
		case 11:
			sprintf(str,"",str);
                        FILE *f11 = fopen("src/concept/content/storage.txt","r");

                        while((*str = fgetc(f11)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 12:
			sprintf(str,"",str);
                        FILE *f12 = fopen("src/concept/content/dma.txt","r");

                        while((*str = fgetc(f12)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 13:
			sprintf(str,"",str);
                        FILE *f13 = fopen("src/concept/content/structure.txt","r");

                        while((*str = fgetc(f13)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
		case 14:
			sprintf(str,"",str);
                        FILE *f14 = fopen("src/concept/content/union.txt","r");

                        while((*str = fgetc(f14)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
		case 15:
			sprintf(str,"",str);
                        FILE *f15 = fopen("src/concept/content/enum.txt","r");

                        while((*str = fgetc(f15)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 16:
			sprintf(str,"",str);
                        FILE *f16 = fopen("src/concept/content/typedef.txt","r");

                        while((*str = fgetc(f16)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
		case 17:
                        sprintf(str,"",str);
                        FILE *f17 = fopen("src/concept/content/filehandling.txt","r");

                        while((*str = fgetc(f17)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
		case 18:
                        sprintf(str,"",str);
                        FILE *f18 = fopen("src/concept/content/preproccesor.txt","r");

                        while((*str = fgetc(f18)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
		case 19:
                        sprintf(str,"",str);
                        FILE *f19 = fopen("src/concept/content/lifecycle.txt","r");

                        while((*str = fgetc(f19)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                default:
			printf("Invalid Input\n");
			break;
	}
}

void c_description_options(int ch, char *str){

        switch(ch){
                case 1:
			sprintf(str,"",str);
                        FILE *f1 = fopen("src/concept/description/datatype.txt","r");

                        while((*str = fgetc(f1)) != EOF){
				str++;
                        }
			*str = '\0';
                        break;
		case 2:
                        sprintf(str,"",str);
                        FILE *f2 = fopen("src/concept/description/operator.txt","r");

                        while((*str = fgetc(f2)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 3:
                        sprintf(str,"",str);
                        FILE *f3 = fopen("src/concept/description/statement.txt","r");

                        while((*str = fgetc(f3)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 4:
                        sprintf(str,"",str);
                        FILE *f4 = fopen("src/concept/description/loop.txt","r");

                        while((*str = fgetc(f4)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 11:
                        sprintf(str,"",str);
                        FILE *f11 = fopen("src/concept/description/dma.txt","r");

                        while((*str = fgetc(f11)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 14:
                        sprintf(str,"",str);
                        FILE *f14 = fopen("src/concept/description/enum.txt","r");

                        while((*str = fgetc(f14)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 15:
                        sprintf(str,"",str);
                        FILE *f15 = fopen("src/concept/description/typedef.txt","r");

                        while((*str = fgetc(f15)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 17:
                        sprintf(str,"",str);
                        FILE *f17 = fopen("src/concept/description/filehandling.txt","r");

                        while((*str = fgetc(f17)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 18:
                        sprintf(str,"",str);
                        FILE *f18 = fopen("src/concept/description/preprocessor.txt","r");

                        while((*str = fgetc(f18)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
                case 19:
                        sprintf(str,"",str);
                        FILE *f19 = fopen("src/concept/description/lifecycle.txt","r");

                        while((*str = fgetc(f19)) != EOF){
                                str++;
                        }
                        *str = '\0';
                        break;
		default:
                        printf("Invalid Input\n");
                        break;
        }
}

