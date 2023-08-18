#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<signal.h>
#include<unistd.h>
#include<string.h>
#include<gtk-3.0/gtk/gtk.h>
#include<gtk-3.0/gtk/gtkx.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>
#include"declarations/dec.h"
#include"src/concept/conceptmain.c"
#include"src/number/numbermain.c"
#include"src/array/arraymain.c"
#include"src/pattern/patternmain.c"
#include"src/string/stringmain.c"

//declarations
void on_about(GtkButton *);
void on_concept(GtkButton *);
void on_number(GtkButton *);
void on_pattern(GtkButton *);
void on_string(GtkButton *);
void on_array(GtkButton *);
void on_clear();
void on_ntoggle(GtkSwitch *, gboolean, gpointer);
void on_number_execute(GtkButton *);
void on_number_show(GtkButton *);
void on_number_download(GtkButton *);
void on_set_size(GtkButton *);
void on_enter_element(GtkButton *);
void on_array_execute(GtkButton *);
void on_array_show(GtkButton *);
void on_array_download(GtkButton *);
void on_pattern_execute(GtkButton *);
void on_pattern_show(GtkButton *);
void on_pattern_download(GtkButton *);
void on_string_execute(GtkButton *);
void on_string_show(GtkButton *);
void on_string_download(GtkButton *);


//window
GtkWidget *window;
GtkWidget *fixed;
GtkWidget *ss1;
GtkWidget *label2;
GtkWidget *aboutwindow;
GtkWidget *aboutfixed;
GtkWidget *madefor;
GtkWidget *logo;
GtkWidget *outputwindow;
GtkWidget *output;
GtkWidget *clear;
GtkWidget *footer;
GtkWidget *footerfixed;
GtkWidget *aboutbtn;
GtkWidget *aboutimg;
GtkWidget *header;
GtkWidget *headerfixed;
GtkWidget *c2wlogo;
GtkWidget *divider;

//home
GtkWidget *homeimg;
GtkWidget *homelabel;
GtkWidget *homebtn;
GtkWidget *about;

//stack

//concept
GtkWidget *option1;
GtkWidget *conceptlabel;
GtkWidget *csw;
GtkWidget *cvp;
GtkWidget *cgg;
GtkWidget *cinfo;

//number codes
GtkWidget *option2;
GtkWidget *numberlabel;
GtkWidget *nsw;
GtkWidget *nvp;
GtkWidget *ngg;
GtkWidget *nlabel;
GtkWidget *ninput1;
GtkWidget *ninput2;
GtkWidget *nexec;
GtkWidget *nshow;
GtkWidget *ndownload;
GtkWidget *ni1;
GtkWidget *ni2;
GtkWidget *ntoggle;
GtkWidget *single;
GtkWidget *range;

//array codes
GtkWidget *option6;
GtkWidget *arraylabel;
GtkWidget *asw;
GtkWidget *avp;
GtkWidget *agg;
GtkWidget *alabel;
GtkWidget *ainput1;
GtkWidget *ainput2;
GtkWidget *aexec;
GtkWidget *ashow;
GtkWidget *adownload;
GtkWidget *ai1;
GtkWidget *ai2;
GtkWidget *setsize;
GtkWidget *enterelement;
GtkWidget *enterp;
GtkWidget *entern;
GtkWidget *eplabel;
GtkWidget *enlabel;

//pattern codes
GtkWidget *option3;
GtkWidget *patternlabel;
GtkWidget *psw;
GtkWidget *pvp;
GtkWidget *pgg;
GtkWidget *plabel;
GtkWidget *pllabel;
GtkWidget *plist;
GtkWidget *pinput1;
GtkWidget *pinput2;
GtkWidget *pexec;
GtkWidget *pshow;
GtkWidget *pdownload;
GtkWidget *pi;

//string codes
GtkWidget *option4;
GtkWidget *stringlabel;
GtkWidget *label1;
GtkWidget *stack1;
GtkWidget *ssw;
GtkWidget *svp;
GtkWidget *sgg;
GtkWidget *slabel;
GtkWidget *sinput1;
GtkWidget *sinput2;
GtkWidget *sninput2;
GtkWidget *snlabel1;
GtkWidget *sninput1;
GtkWidget *snlabel2;
GtkWidget *sexec;
GtkWidget *sshow;
GtkWidget *sdownload;
GtkWidget *si1;
GtkWidget *si2;

//dsa
GtkWidget *option5;
GtkWidget *dsalabel;
GtkWidget *dslabel;
GtkWidget *dsastack;
GtkWidget *linkedlist;
GtkWidget *stack;
GtkWidget *queue;
GtkWidget *tree;
GtkWidget *graph;
GtkWidget *search;
GtkWidget *sort;
GtkWidget *dsstacksidebar;


char downloadlink[1000];


//stack
char str[1000];
GtkWidget *button[100];
int row;

//single or range toggle
bool togglestate = false;
int numflag = 1;

//option choice
int choice;

//concept
char content[1000000];
char description[1000000];

//number
char numout[100000];

//array
int arraysize;
int array[1000];
int iarr;
char arrayout[1000];

//pattern
char patternout[100000];

//string
char strout[100000];


GtkBuilder *builder;

int main(int argc, char *argv[]){

	gtk_init(&argc, &argv);

	//for main window
	
    builder = gtk_builder_new_from_file("GUI/GUImain.glade");
    window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));
	aboutwindow = GTK_WIDGET(gtk_builder_get_object(builder, "aboutwindow"));
    g_signal_connect(window, "destroy",G_CALLBACK(gtk_main_quit), NULL);

	gtk_builder_connect_signals(builder, NULL);

	fixed = GTK_WIDGET(gtk_builder_get_object(builder, "fixed"));
	madefor = GTK_WIDGET(gtk_builder_get_object(builder, "madefor"));
	logo = GTK_WIDGET(gtk_builder_get_object(builder, "logo"));
	label1 = GTK_WIDGET(gtk_builder_get_object(builder, "label1"));
	label2 = GTK_WIDGET(gtk_builder_get_object(builder, "label2"));
    stack1 = GTK_WIDGET(gtk_builder_get_object(builder, "stack1"));
    ss1 = GTK_WIDGET(gtk_builder_get_object(builder, "ss1"));
    option1 = GTK_WIDGET(gtk_builder_get_object(builder, "option1"));
    conceptlabel = GTK_WIDGET(gtk_builder_get_object(builder, "conceptlabel"));
	csw = GTK_WIDGET(gtk_builder_get_object(builder, "csw"));
	cvp = GTK_WIDGET(gtk_builder_get_object(builder, "cvp"));
	cgg = GTK_WIDGET(gtk_builder_get_object(builder, "cgg"));
	cinfo = GTK_WIDGET(gtk_builder_get_object(builder, "cinfo"));
    option2 = GTK_WIDGET(gtk_builder_get_object(builder, "option2"));
    numberlabel = GTK_WIDGET(gtk_builder_get_object(builder, "numberlabel"));
	nsw = GTK_WIDGET(gtk_builder_get_object(builder, "nsw"));
    nvp = GTK_WIDGET(gtk_builder_get_object(builder, "nvp"));
    ngg = GTK_WIDGET(gtk_builder_get_object(builder, "ngg"));
    option3 = GTK_WIDGET(gtk_builder_get_object(builder, "option3"));
    patternlabel = GTK_WIDGET(gtk_builder_get_object(builder, "patternlabel"));
	psw = GTK_WIDGET(gtk_builder_get_object(builder, "psw"));
    pvp = GTK_WIDGET(gtk_builder_get_object(builder, "pvp"));
    pgg = GTK_WIDGET(gtk_builder_get_object(builder, "pgg"));
    option4 = GTK_WIDGET(gtk_builder_get_object(builder, "option4"));
    stringlabel = GTK_WIDGET(gtk_builder_get_object(builder, "stringlabel"));
	ssw = GTK_WIDGET(gtk_builder_get_object(builder, "ssw"));
    svp = GTK_WIDGET(gtk_builder_get_object(builder, "svp"));
    sgg = GTK_WIDGET(gtk_builder_get_object(builder, "sgg"));
    option5 = GTK_WIDGET(gtk_builder_get_object(builder, "option5"));
    dsalabel = GTK_WIDGET(gtk_builder_get_object(builder, "dsalabel"));
	linkedlist = GTK_WIDGET(gtk_builder_get_object(builder, "linkedlist"));
    stack = GTK_WIDGET(gtk_builder_get_object(builder, "stack"));
    queue = GTK_WIDGET(gtk_builder_get_object(builder, "queue"));
	tree = GTK_WIDGET(gtk_builder_get_object(builder, "tree"));
    graph = GTK_WIDGET(gtk_builder_get_object(builder, "graph"));
    search = GTK_WIDGET(gtk_builder_get_object(builder, "search"));
	sort = GTK_WIDGET(gtk_builder_get_object(builder, "sort"));
	dsstacksidebar = GTK_WIDGET(gtk_builder_get_object(builder, "dsstacksidebar"));
	nlabel = GTK_WIDGET(gtk_builder_get_object(builder, "nlabel"));
	plabel = GTK_WIDGET(gtk_builder_get_object(builder, "plabel"));
	slabel = GTK_WIDGET(gtk_builder_get_object(builder, "slabel"));
	dslabel = GTK_WIDGET(gtk_builder_get_object(builder, "dslabel"));
	outputwindow = GTK_WIDGET(gtk_builder_get_object(builder, "outputwindow"));
	output = GTK_WIDGET(gtk_builder_get_object(builder, "output"));
	aboutbtn = GTK_WIDGET(gtk_builder_get_object(builder, "aboutbtn"));
	ninput1 = GTK_WIDGET(gtk_builder_get_object(builder, "ninput1"));
	ninput2 = GTK_WIDGET(gtk_builder_get_object(builder, "ninput2"));
	nexec = GTK_WIDGET(gtk_builder_get_object(builder, "nexec"));
	nshow = GTK_WIDGET(gtk_builder_get_object(builder, "nshow"));
	ndownload = GTK_WIDGET(gtk_builder_get_object(builder, "ndownload"));
	ni1 = GTK_WIDGET(gtk_builder_get_object(builder, "ni1"));
	ni2 = GTK_WIDGET(gtk_builder_get_object(builder, "ni2"));
	single = GTK_WIDGET(gtk_builder_get_object(builder, "single"));
    range = GTK_WIDGET(gtk_builder_get_object(builder, "range"));
    pinput1 = GTK_WIDGET(gtk_builder_get_object(builder, "pinput1"));
	pinput2 = GTK_WIDGET(gtk_builder_get_object(builder, "pinput2"));
	pllabel = GTK_WIDGET(gtk_builder_get_object(builder, "pllabel"));
	plist = GTK_WIDGET(gtk_builder_get_object(builder, "plist"));
    pexec = GTK_WIDGET(gtk_builder_get_object(builder, "pexec"));
    pshow = GTK_WIDGET(gtk_builder_get_object(builder, "pshow"));
    pdownload = GTK_WIDGET(gtk_builder_get_object(builder, "pdownload"));
    pi = GTK_WIDGET(gtk_builder_get_object(builder, "pi"));
    sinput1 = GTK_WIDGET(gtk_builder_get_object(builder, "sinput1"));
	sinput2 = GTK_WIDGET(gtk_builder_get_object(builder, "sinput2"));
    sninput1 = GTK_WIDGET(gtk_builder_get_object(builder, "sninput1"));
    sninput2 = GTK_WIDGET(gtk_builder_get_object(builder, "sninput2"));
	snlabel1 = GTK_WIDGET(gtk_builder_get_object(builder, "snlabel1"));
    snlabel2 = GTK_WIDGET(gtk_builder_get_object(builder, "snlabel2"));
	sexec = GTK_WIDGET(gtk_builder_get_object(builder, "sexec"));
    sshow = GTK_WIDGET(gtk_builder_get_object(builder, "sshow"));
    sdownload = GTK_WIDGET(gtk_builder_get_object(builder, "sdownload"));
    si1 = GTK_WIDGET(gtk_builder_get_object(builder, "si1"));
	si2 = GTK_WIDGET(gtk_builder_get_object(builder, "si2"));
	option6 = GTK_WIDGET(gtk_builder_get_object(builder, "option6"));
    arraylabel = GTK_WIDGET(gtk_builder_get_object(builder, "arraylabel"));
    asw = GTK_WIDGET(gtk_builder_get_object(builder, "asw"));
    avp = GTK_WIDGET(gtk_builder_get_object(builder, "avp"));
    agg = GTK_WIDGET(gtk_builder_get_object(builder, "agg"));
	alabel = GTK_WIDGET(gtk_builder_get_object(builder, "alabel"));
    ainput1 = GTK_WIDGET(gtk_builder_get_object(builder, "ainput1"));
    ainput2 = GTK_WIDGET(gtk_builder_get_object(builder, "ainput2"));
    aexec = GTK_WIDGET(gtk_builder_get_object(builder, "aexec"));
    ashow = GTK_WIDGET(gtk_builder_get_object(builder, "ashow"));
    adownload = GTK_WIDGET(gtk_builder_get_object(builder, "adownload"));
    ai1 = GTK_WIDGET(gtk_builder_get_object(builder, "ai1"));
    ai2 = GTK_WIDGET(gtk_builder_get_object(builder, "ai2"));
	clear = GTK_WIDGET(gtk_builder_get_object(builder, "clear"));
	footer = GTK_WIDGET(gtk_builder_get_object(builder, "footer"));
	footerfixed = GTK_WIDGET(gtk_builder_get_object(builder, "footerfixed"));
	aboutbtn = GTK_WIDGET(gtk_builder_get_object(builder, "aboutbtn"));
	aboutimg = GTK_WIDGET(gtk_builder_get_object(builder, "aboutimg"));
	header = GTK_WIDGET(gtk_builder_get_object(builder, "header"));
	headerfixed = GTK_WIDGET(gtk_builder_get_object(builder, "headerfixed"));
	c2wlogo = GTK_WIDGET(gtk_builder_get_object(builder, "c2wlogo"));
    divider = GTK_WIDGET(gtk_builder_get_object(builder, "divider"));
	ntoggle = GTK_WIDGET(gtk_builder_get_object(builder, "ntoggle"));
	single = GTK_WIDGET(gtk_builder_get_object(builder, "single"));
	range = GTK_WIDGET(gtk_builder_get_object(builder, "range"));
	setsize = GTK_WIDGET(gtk_builder_get_object(builder, "setsize"));
	enterelement = GTK_WIDGET(gtk_builder_get_object(builder, "enterelement"));
	enterp = GTK_WIDGET(gtk_builder_get_object(builder, "enterp"));
	entern = GTK_WIDGET(gtk_builder_get_object(builder, "entern"));
	eplabel = GTK_WIDGET(gtk_builder_get_object(builder, "eplabel"));
	enlabel = GTK_WIDGET(gtk_builder_get_object(builder, "enlabel"));
	homebtn = GTK_WIDGET(gtk_builder_get_object(builder, "homebtn"));
	homeimg = GTK_WIDGET(gtk_builder_get_object(builder, "homeimg"));
	homelabel = GTK_WIDGET(gtk_builder_get_object(builder, "homelabel"));
	about = GTK_WIDGET(gtk_builder_get_object(builder, "about"));
	

	//grey
    GdkColor color1;
    color1.red = 0x1900;
	color1.green = 0x1900;
    color1.blue = 0x1900;

    //beige
    GdkColor color2;
    color2.red = 0xeeee;
    color2.green = 0xeeee;
    color2.blue = 0xd080;

	//light grey
	GdkColor color3;
	color3.red = 0x3300;
    color3.green = 0x3300;
    color3.blue = 0x3300;

	//Dark grey
    GdkColor color4;
    color4.red = 0x2250;
    color4.green = 0x2250;
    color4.blue = 0x2250;

	//black
	GdkColor color5;


	gtk_widget_modify_bg(GTK_WIDGET(window),GTK_STATE_NORMAL, &color1);
	gtk_widget_modify_bg(GTK_WIDGET(homelabel),GTK_STATE_NORMAL, &color1);
	gtk_widget_modify_fg(GTK_WIDGET(about),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(madefor),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_bg(GTK_WIDGET(output),GTK_STATE_NORMAL, &color5);
	gtk_widget_modify_fg(GTK_WIDGET(output),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(label1),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(label2),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(cinfo),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(eplabel),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(enlabel),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(si1),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(si2),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(snlabel1),GTK_STATE_NORMAL, &color2);
    gtk_widget_modify_fg(GTK_WIDGET(snlabel2),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(conceptlabel),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(numberlabel),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(patternlabel),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(stringlabel),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(dsalabel),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(arraylabel),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(alabel),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(nlabel),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(plabel),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(slabel),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(dslabel),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(aboutbtn),GTK_STATE_NORMAL, &color4);
	gtk_widget_modify_fg(GTK_WIDGET(ni1),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(ni2),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(single),GTK_STATE_NORMAL, &color2);
    gtk_widget_modify_fg(GTK_WIDGET(range),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(ai1),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(ai2),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(pi),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_fg(GTK_WIDGET(pllabel),GTK_STATE_NORMAL, &color2);
	gtk_widget_modify_bg(GTK_WIDGET(clear),GTK_STATE_NORMAL, &color3);
	gtk_widget_modify_bg(GTK_WIDGET(footerfixed),GTK_STATE_NORMAL, &color4);
    gtk_widget_modify_bg(GTK_WIDGET(footer),GTK_STATE_NORMAL, &color4);
	gtk_widget_modify_bg(GTK_WIDGET(outputwindow),GTK_STATE_NORMAL, &color5);	
	gtk_widget_modify_bg(GTK_WIDGET(divider),GTK_STATE_NORMAL, &color1);
	

//------concept option scrolled window--------------------------------------------------------
        FILE *cf = fopen("lists/concept.txt","r");

        row = 0;
        while(1){

                if(fgets(str,100,cf)==NULL){

                        fclose(cf);
                        break;
                }

                str[strlen(str)-1] = '\0';
                gtk_grid_insert_row(GTK_GRID(cgg),row);
		button[row] = gtk_button_new_with_label(str);
		gtk_button_set_alignment(GTK_BUTTON(button[row]),0,0);
		gtk_grid_attach(GTK_GRID(cgg),button[row],1,row,1,1);
		g_signal_connect(button[row],"clicked",G_CALLBACK(on_concept),NULL);
                row++;
		
        }
//--------------------------------------------------------------------------------------
//------number option scrolled window--------------------------------------------------------
        FILE *nf = fopen("lists/number.txt","r");

        row = 0;
        while(1){

                if(fgets(str,100,nf)==NULL){

                        fclose(nf);
                        break;
                }

                str[strlen(str)-1] = '\0';
				gtk_grid_insert_row(GTK_GRID(ngg),row);
                button[row] = gtk_button_new_with_label(str);
                gtk_button_set_alignment(GTK_BUTTON(button[row]),0,0);
                gtk_grid_attach(GTK_GRID(ngg),button[row],1,row,1,1);
                g_signal_connect(button[row],"clicked",G_CALLBACK(on_number),NULL);
                row++;
        }

//--------------------------------------------------------------------------------------
//------string option scrolled window--------------------------------------------------------
        FILE *sf = fopen("lists/string.txt","r");

        row = 0;
        while(1){

                if(fgets(str,100,sf)==NULL){

                        fclose(sf);
                        break;
                }

                str[strlen(str)-1] = '\0';
                gtk_grid_insert_row(GTK_GRID(sgg),row);
                button[row] = gtk_button_new_with_label(str);
                gtk_button_set_alignment(GTK_BUTTON(button[row]),0,0);
                gtk_grid_attach(GTK_GRID(sgg),button[row],1,row,1,1);
                g_signal_connect(button[row],"clicked",G_CALLBACK(on_string),NULL);
                row++;

        }
//--------------------------------------------------------------------------------------
//------array option scrolled window--------------------------------------------------------
        FILE *af = fopen("lists/array.txt","r");

        row = 0;
        while(1){

                if(fgets(str,100,af)==NULL){

                        fclose(af);
                        break;
                }

                str[strlen(str)-1] = '\0';
                gtk_grid_insert_row(GTK_GRID(agg),row);
                button[row] = gtk_button_new_with_label(str);
                gtk_button_set_alignment(GTK_BUTTON(button[row]),0,0);
                gtk_grid_attach(GTK_GRID(agg),button[row],1,row,1,1);
                g_signal_connect(button[row],"clicked",G_CALLBACK(on_array),NULL);

                row++;
        }
//--------------------------------------------------------------------------------------

	gtk_widget_show_all(window);
	gtk_main();

	return EXIT_SUCCESS;
}

void on_homebtn(GtkButton *b){

	gtk_widget_set_visible(homeimg, FALSE);
	gtk_widget_set_visible(homelabel, FALSE);
	gtk_widget_set_visible(homebtn, FALSE);
	gtk_widget_set_visible(about, FALSE);

}

//clear
void on_clear(){

	gtk_label_set_text(GTK_LABEL(output),(const gchar*)"OUTPUT TERMINAL\n\nSelect Any Option to Show Result");
	gtk_label_set_text(GTK_LABEL(cinfo),(const gchar*)NULL);
}

//about window button
void on_about(GtkButton *b){

        builder = gtk_builder_new_from_file("GUI/about.glade");
        aboutwindow = GTK_WIDGET(gtk_builder_get_object(builder, "aboutwindow"));
        g_signal_connect(aboutwindow, "destroy",G_CALLBACK(gtk_main_quit), NULL);
        gtk_builder_connect_signals(builder, NULL);
		gtk_widget_show(aboutwindow);
        gtk_main();
}

//concept option button clicked
void on_concept(GtkButton *b){

	on_clear();

	sprintf(str,"%s",gtk_button_get_label(b));

	choice = 0;
	int i = 0;
	while(str[i] != '.'){

		choice = choice*10 + str[i] - '0';
		i++;
	}

	sprintf(content,"",content);
	sprintf(description,"",description);

	c_content_options(choice, content);
	gtk_label_set_text(GTK_LABEL(output),(const gchar*)content);
	
    c_description_options(choice, description);
    gtk_label_set_text(GTK_LABEL(cinfo),(const gchar*)description);

	gtk_widget_set_visible(ni2,false);
	gtk_widget_set_visible(ninput2,false);
}
//number option button clicked
void on_number(GtkButton *b){

        on_clear();

        sprintf(str,"%s",gtk_button_get_label(b));

        choice = 0;
        int i = 0;
        while(str[i] != '.'){

                choice = choice*10 + str[i] - '0';
                i++;
        }

		if(numflag == 1){
			gtk_widget_set_visible(ni2,false);
			gtk_widget_set_visible(ninput2,false);
		}
		number_description(choice, numout);
		gtk_label_set_text(GTK_LABEL(output),(const gchar*)numout);
}

//pattern option button clicked
void on_pattern(GtkButton *b){

        on_clear();

        char str[100];
        sprintf(str,"%s",gtk_button_get_label(b));

        choice = 0;
        int i = 0;
        while(str[i] != '.'){

                choice = choice*10 + str[i] - '0';
                i++;
        }
        printf("%d\n",choice);
}

//string option button clicked
void on_string(GtkButton *b){

        on_clear();
		strhide();

        char str[100];
        sprintf(str,"%s",gtk_button_get_label(b));

        choice = 0;
        int i = 0;
        while(str[i] != '.'){

                choice = choice*10 + str[i] - '0';
                i++;
        }
       	
		strunhide(choice);
		string_description(choice, strout);
		gtk_label_set_text(GTK_LABEL(output),(const gchar*)strout);
}


//array option button clicked
void on_array(GtkButton *b){

        on_clear();

        char str[100];
        sprintf(str,"%s",gtk_button_get_label(b));

        choice = 0;
        int i = 0;
        while(str[i] != '.'){

                choice = choice*10 + str[i] - '0';
                i++;
        }

	if(choice == 4 ||choice == 5 || choice == 6 ||choice == 7 || choice == 17){
        
		gtk_widget_set_visible(ai1,true);
		gtk_widget_set_visible(ai2,true);
		gtk_widget_set_visible(ainput1,true);
		gtk_widget_set_visible(ainput2,true);
		gtk_widget_set_visible(setsize,true);
		gtk_widget_set_visible(enterelement,true);
		gtk_widget_set_visible(eplabel,true);
		gtk_widget_set_visible(enlabel,true);
		gtk_widget_set_visible(enterp,true);
		gtk_widget_set_visible(entern,true);

	}else{
		
		gtk_widget_set_visible(ai1,true);
        gtk_widget_set_visible(ai2,true);
        gtk_widget_set_visible(ainput1,true);
        gtk_widget_set_visible(ainput2,true);
        gtk_widget_set_visible(setsize,true);
        gtk_widget_set_visible(enterelement,true);
        gtk_widget_set_visible(eplabel,false);
        gtk_widget_set_visible(enlabel,false);
        gtk_widget_set_visible(enterp,false);
        gtk_widget_set_visible(entern,false);
	}
}

//-------------------------Number--------------------------------------------------------------------------

//change labels for input in number codes
void on_ntoggle(GtkSwitch *w, gboolean state, gpointer ud){

	togglestate = state;
	if(togglestate){
		numflag = 0;
		gtk_widget_set_visible(ni2,true);
		gtk_widget_set_visible(ninput2,true);
		gtk_label_set_text(GTK_LABEL(ni1),(const gchar*)"Enter Start\nof Range");
        gtk_label_set_text(GTK_LABEL(ni2),(const gchar*)"Enter End\nof Range");
	}else{
		numflag = 1;
		gtk_label_set_text(GTK_LABEL(ni1),(const gchar*)"Enter Input");
    	gtk_widget_set_visible(ni2,false);
		gtk_widget_set_visible(ninput2,false);
	}
}

//execute button for number codes
void on_number_execute(GtkButton *b){

	int input1 = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ninput1));
	int input2 = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ninput2));

	number_options(numflag, choice, input1, input2, numout);
    	
	gtk_label_set_text(GTK_LABEL(output),(const gchar*)numout);
}

//show code button for number codes
void on_number_show(GtkButton *b){

	number_show(numflag, choice, numout);

    gtk_label_set_text(GTK_LABEL(output),(const gchar*)numout);
}

//download button for number codes
void on_number_download(GtkButton *b){

	number_download(numflag, choice, downloadlink);
    gtk_label_set_markup(GTK_LABEL(output), downloadlink);
}

//------------------------Array----------------------------------------------------------------------------
//set size button for array codes
void on_set_size(GtkButton *b){

	arraysize = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ainput1));
	sprintf(arrayout,"Your array size is %d\n\nPlease enter %d elements\n",arraysize,arraysize);
	gtk_label_set_text(GTK_LABEL(output),(const gchar*)arrayout);
	
	iarr = 0;
}

//enter element button for array codes
void on_enter_element(GtkButton *b){

	if(iarr == arraysize)
		sprintf(arrayout,"Your array size is full\n\nPlease click Execute",arraysize,arraysize);
	else if(iarr < arraysize){
		array[iarr] = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ainput2));
		sprintf(arrayout,"Please enter %d more elements\n",arraysize-iarr-1);
		iarr++;
		printf("%d",array[iarr]);
		if(iarr == arraysize){
			char arr[1000];
			char digit[10] = {'0'};

			sprintf(arr,"",arr);
			for(int i = 0; i < arraysize; i++){

				sprintf(digit,"%d ",array[i]);
				strcat(arr,digit);
			}
	
                	sprintf(arrayout,"Your array size is full\n\nArray : {%s}\n\nPlease click Execute",arr);
		}
	}

	gtk_label_set_text(GTK_LABEL(output),(const gchar*)arrayout);
}

//execute button for array codes
void on_array_execute(GtkButton *b){

	int pos = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(enterp));
	int data = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(entern));

	if(iarr != arraysize)
		sprintf(arrayout,"Your array is incomplete\n\nPlease enter %d more elements\n",arraysize-iarr);

	int arr[arraysize];

	for(int i = 0; i < arraysize; i++){

		arr[i] = array[i];
	}

	array_option(choice, arr, arraysize, pos, data, arrayout);
	
	gtk_label_set_text(GTK_LABEL(output),(const gchar*)arrayout);
}

//show code button for array codes
void on_array_show(GtkButton *b){

    array_show(choice, patternout);

    gtk_label_set_text(GTK_LABEL(output),(const gchar*)patternout);

}

//download button for array codes
void on_array_download(GtkButton *b){

	array_download(choice, downloadlink);
	gtk_label_set_markup(GTK_LABEL(output), downloadlink);
}

//------------------------Pattern----------------------------------------------------------------------------

//show list button for pattern codes
void on_plist(GtkButton *b){

	int i = 0;
	FILE *p = fopen("lists/pattern.txt","r");

	while((patternout[i] = fgetc(p)) != EOF){
		i++;
        }
        patternout[i] = '\0';

	gtk_label_set_text(GTK_LABEL(output),(const gchar*)patternout);
}

//execute button for pattern codes
void on_pattern_execute(GtkButton *b){

	choice = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(pinput1));
    int row = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(pinput2));

	pattern_options(choice, row, patternout);

	char out[10000];

	sprintf(out,"\nYour selected pattern with %d rows :\n\n%s",row,patternout);
	gtk_label_set_text(GTK_LABEL(output),(const gchar*)out);
}

//show code button for pattern codes
void on_pattern_show(GtkButton *b){

	choice = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(pinput1));

	pattern_show(choice, patternout);

	gtk_label_set_text(GTK_LABEL(output),(const gchar*)patternout);
}

//download button for pattern codes
void on_pattern_download(GtkButton *b){

	pattern_download(choice, downloadlink);
	gtk_label_set_markup(GTK_LABEL(output), downloadlink);
}

//------------------------String----------------------------------------------------------------------------

void strhide()
{
	gtk_widget_set_visible(si1, FALSE);
	gtk_widget_set_visible(si2, FALSE);
	gtk_widget_set_visible(snlabel1, FALSE);
	gtk_widget_set_visible(snlabel2, FALSE);
	gtk_widget_set_visible(sinput1, FALSE);
	gtk_widget_set_visible(sinput2, FALSE);
	gtk_widget_set_visible(sninput1, FALSE);
	gtk_widget_set_visible(sninput2,FALSE);
}

void strunhide(int choice)
{
	char tmp1[20];
	char tmp2[20];
	char tmp3[20];
	if (choice >= 1 && choice <= 31)
	{
		gtk_widget_set_visible(si1, TRUE);
		gtk_widget_set_visible(sinput1, TRUE);

	}
	else if (choice >= 32 && choice <= 34 || choice == 41)
	{
		sprintf(tmp1, "Enter Char");
		gtk_label_set_text(GTK_LABEL(si2), tmp1);
		gtk_widget_set_visible(si1, TRUE);
		gtk_widget_set_visible(sinput1, TRUE);
		gtk_widget_set_visible(si2, TRUE);
		gtk_widget_set_visible(sinput2, TRUE);
	}
	else if(choice >= 35 && choice <= 38)
	{
		sprintf(tmp1, "Enter String 2");
		gtk_label_set_text(GTK_LABEL(si2), tmp1);
		gtk_widget_set_visible(si1, TRUE);
		gtk_widget_set_visible(sinput1, TRUE);
		gtk_widget_set_visible(si2, TRUE);
		gtk_widget_set_visible(sinput2, TRUE);
	}
	else if (choice == 39 || choice == 45)
	{
		sprintf(tmp1, "Enter Range");
		gtk_label_set_text(GTK_LABEL(snlabel1), tmp1);
		gtk_widget_set_visible(si1, TRUE);
		gtk_widget_set_visible(sinput1, TRUE);
		gtk_widget_set_visible(snlabel1, TRUE);
		gtk_widget_set_visible(sninput1, TRUE);
	}
	else if (choice == 40 || choice == 43 || choice == 44)
	{
		if (choice == 44)
		{
			sprintf(tmp1, "Enter Char");
			gtk_label_set_text(GTK_LABEL(si2), tmp1);
		}
		else
		{
			sprintf(tmp1, "Enter String 2");
			gtk_label_set_text(GTK_LABEL(si2),tmp1);
		}
		sprintf(tmp2, "Enter number");
		gtk_label_set_text(GTK_LABEL(snlabel1), tmp2);
		gtk_widget_set_visible(si1, TRUE);
		gtk_widget_set_visible(sinput1, TRUE);
		gtk_widget_set_visible(si2, TRUE);
		gtk_widget_set_visible(sinput2, TRUE);
		gtk_widget_set_visible(snlabel1, TRUE);
		gtk_widget_set_visible(sninput1, TRUE);
	}
	else if (choice == 42)
	{
		sprintf(tmp2, "Start");
		gtk_label_set_text(GTK_LABEL(snlabel1), tmp2);
		sprintf(tmp3, "End");
		gtk_label_set_text(GTK_LABEL(snlabel2), tmp3);
		gtk_widget_set_visible(si1, TRUE);
		gtk_widget_set_visible(sinput1, TRUE);
		gtk_widget_set_visible(snlabel1, TRUE);
		gtk_widget_set_visible(sninput1, TRUE);
		gtk_widget_set_visible(snlabel2, TRUE);
		gtk_widget_set_visible(sninput2, TRUE);
	}
	else if (choice == 0)
	{
		char tmp[20];
		sprintf(tmp, "Enter String 1");
		gtk_label_set_text(GTK_LABEL(si1), tmp);
		sprintf(tmp1, "Enter String 2");
		gtk_label_set_text(GTK_LABEL(si2), tmp1);
		sprintf(tmp2, "Enter Input 1");
		gtk_label_set_text(GTK_LABEL(snlabel1), tmp2);
		sprintf(tmp3, "Enter Input 2");
		gtk_label_set_text(GTK_LABEL(snlabel2), tmp3);
		gtk_widget_set_visible(si1, TRUE);
		gtk_widget_set_visible(sinput1, TRUE);
		gtk_widget_set_visible(si2, TRUE);
		gtk_widget_set_visible(sinput2, TRUE);
		gtk_widget_set_visible(snlabel1, TRUE);
		gtk_widget_set_visible(sninput1, TRUE);
		gtk_widget_set_visible(snlabel2, TRUE);
		gtk_widget_set_visible(sninput2, TRUE);
	}
}

//execute button for string codes
void on_string_execute(GtkButton *b){

	char sin1[1000];
	sprintf(sin1,"%s",gtk_entry_get_text(sinput1));
	char sin2[1000];
	sprintf(sin2,"%s",gtk_entry_get_text(sinput2));
	int in1 = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(sninput1));
	int in2 = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(sninput2));

	string_option(choice, sin1, sin2, in1, in2, strout);
	gtk_label_set_text(GTK_LABEL(output),(const gchar*)strout);
}

/*
//show code button for string codes
void on_string_show(GtkButton *b){

}

//download button for string codes
void on_string_download(GtkButton *b){

}

*/

//download
void download(char *str){

	FILE *fd1 = fopen(str,"r");
	FILE *fd2 = fopen("Source_Code.c","w");
	rewind(fd2);
	char ch;
	while((ch = fgetc(fd1)) != -1){
		fputc(ch,fd2);
	}
        fclose(fd2);
	fclose(fd1);
}

