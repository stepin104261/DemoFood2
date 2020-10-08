#include <food.h>

/*void cls(){

	system("cls");

}

void echo(char print[]){

	printf("%s",print);
}

void br(int line){
	for(int i=0; i<line;i++){
		printf("\n");
	}
}

void pre(int tab){

	for(int i=0; i<tab;i++){
		printf("\t");
	}

}
void span(int space){

	for(int i=0; i<space;i++){
		printf(" ");
	}

}

void main_menu(){

	cls();
	br(5); pre(3); echo("===> 1. Food List"); Sleep(400);
	br(2); pre(3); echo("===> 2. Admin Panel"); Sleep(400);
	br(2); pre(3); echo("===> 3. Exit");  Sleep(400);
	//   br(2); pre(3); echo("=> 4. Admin Panel");  Sleep(400);

	br(1);

}

void insertend(int data, char foodname[25], int quantity, float price){

	node *temp;

	temp=(node *)malloc(sizeof(node));

	temp->data = data;

	temp->price = price;

	temp-> quantity = quantity;

	strcpy(temp->foodname,foodname);

	temp->next = NULL;


	if(head==NULL){
		head = temp;
		list = head;
	}
	else{

		while(head->next != NULL){
			head = head->next;
		}

		head->next = temp;
	}

}

void insertfirst(int data, char foodname[25], int quantity, float price){

	node *temp;

	temp=(node *)malloc(sizeof(node));

	temp->data = data ;

	temp->price = price;

	strcpy(temp->foodname,foodname);

	temp-> quantity = quantity;


	temp->next = head;

	head = temp;

	list = head ;

}

void insertmid(int pos, int data, char foodname[25], int quantity, float price){

	node *temp;

	temp=(node *)malloc(sizeof(node));

	temp->data = data;

	temp->price = price;

	temp-> quantity = quantity;

	strcpy(temp->foodname,foodname);

	while(head->next->data != pos ){


		head = head->next ;

	}

	temp->next = head->next;
	head->next = temp ;

	//    free(temp);
}*/
struct Node{

	char foodname[50];
	int quantity;
	float price;
	int data;
	struct Node *next;

};

int deletefood(int serial){

	node *temp;
	temp=(node *)malloc(sizeof(node));

	temp = list;


	if(temp->data != serial){

		while(temp->next->data != serial){
			temp = temp->next;
		}

		if(temp->next->data == serial){

			temp->next = temp->next->next;
			cls();
			printf("\n\n\n\n\t\t\tDeleting Item %d ",serial);for(int cs=0;cs<4;cs++){printf(" .");Sleep(400);}

			printf("\n\n\n\n\t\t\tDeleted Successfully \n"); Sleep(500);

		}
		else{
			printf("\n\n\n\n\t\t\tFood Item Not Found\n"); Sleep(500);
		}

		head = temp ;

	}
	else{

		temp = temp->next;
		cls();
		printf("\n\n\n\n\t\t\tDeleting Item %d ",serial);for(int cs=0;cs<4;cs++){printf(" .");Sleep(400);}

		printf("\n\n\n\n\t\t\tDeleted Successfully \n"); Sleep(500);

		head = temp ;

		list=head;
	}
	return 1;
}

/*void updatefood(int udata, int uquantity){

	node *temp;
	temp = list;

	while(temp->data!=udata){
		temp = temp->next;

	}
	if(temp->data == udata){
		temp->quantity = uquantity;
	}

}

int countitem(){

	node *temp;

	temp = list;

	int countitem=0;

	if(temp==NULL){
		countitem = 0;
	}
	else{
		countitem = 1;
		while(temp->next != NULL){
			countitem++;
			temp = temp->next;
		}

	}


	return countitem;

}
void foodlist(){

	ccolor(26);

	printf("\n\t\t"); ccolor(240);
	printf("______________________________________________________ ");ccolor(26);
	printf("\n\t\t"); ccolor(240);
	printf("|  Food No.  |   Food Name   |  Price  |   In Stock   |");ccolor(26);
	printf("\n\t\t"); ccolor(240);
	printf("-------------------------------------------------------");ccolor(26);

	node *temp;

	temp = list;

	while(temp != NULL){

		ccolor(26);


		printf("\n\t\t"); ccolor(62);
		printf("|     %d      |    %s  |    %0.2f   |    %d    |",temp->data,temp->foodname, temp->price, temp->quantity);
		ccolor(26);
		printf("\n\t\t"); ccolor(62);
		printf("-------------------------------------------------------");


		temp = temp->next ;

		Sleep(100);

	}

	ccolor(26);

	//  free(temp);

}


void order_view(int order, int quantity, int or_no){



	ccolor(26);

	node *temp;

	temp = list;

	while(temp->data != order){

		temp = temp->next;

	}
	if(temp->data == order){

		ccolor(26);

		printf("\n\t\t"); ccolor(62);
		printf("|     %d      |    %s  |     %d     |     %d     |",or_no,temp->foodname,quantity,temp->quantity);
		ccolor(26);
		printf("\n\t\t"); ccolor(62);
		printf("-------------------------------------------------------");

		Sleep(100);

	}

	ccolor(26);

}

void ccolor(int clr){

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, clr);

}


///HEERE PRINTF STYLE FUNCTION

void pwelcome(){
	ccolor(26);

	char welcome[50]="WELCOME";
	char welcome2[50]=" TO";
	char welcome3[50]=" FOOD ORDER";
	char welcome4[50]=" MANAGEMENT SYSTEM";
	printf("\n\n\n\n\n\t\t\t");
	for(int wlc=0; wlc<strlen(welcome);wlc++){
             ccolor(120+(wlc*9));

		printf(" %c",welcome[wlc]);
		Sleep(200);
	}
	ccolor(26);
	printf("\n\n\t\t\t\t ");
	for(int wlc2=0; wlc2<strlen(welcome2) ;wlc2++){
            ccolor(160+(wlc2*9));

		printf(" %c",welcome2[wlc2]);
		Sleep(200);
	}
	ccolor(26);
	printf("\n\n\n\t\t\t ");
	for(int wlc3=0; wlc3<strlen(welcome3) ;wlc3++){
		if(welcome3[wlc3]!='D'){
		    ccolor(121+(wlc3*4));

			printf(" %c",welcome3[wlc3]);
		}
		else{
		    ccolor(11);

			printf(" %c",welcome3[wlc3]);
		}

		Sleep(200);
	}
	ccolor(26);
	printf("\n\n\n\t\t\t\t ");
	for(int wlc3=0; wlc3<strlen(welcome4) ;wlc3++){
		if(welcome4[wlc3]!='A' && welcome4[wlc3]!='E'){
                ccolor(121+(wlc3*4));

			printf(" %c",welcome4[wlc3]);
		}
		else{
		    ccolor(11);

			printf(" %c",welcome4[wlc3]);
		}
		Sleep(200);
	}
	ccolor(26);

}
void loadingbar(void){

	for (int i=15;i<=100;i+=5){

		cls();
		ccolor(26);

		printf("\n\n\n\n\n\n\n\t\t\t\t");
		printf("%d %% Loading...\n\n\t\t",i);

		printf("");

		for (int j=0; j<i;j+=2){

			ccolor(160+j);
			printf(" ");
			ccolor(26);

		}
		Sleep(100);
		if(i==90 || i==50 || i==96 || i==83){
			Sleep(100);
		}

	}

}
void backuploader(void){

	for (int i=15;i<=100;i+=5){

		cls();
		ccolor(26);

		printf("\n\n\n\n\n\n\n\t\t\t\t");
		printf("%d %% Backing UP DATA...\n\n\t\t",i);

		printf("");

		for (int j=0; j<i;j+=2){

			ccolor(120+j);
			printf(" ");
			ccolor(26);

		}
		Sleep(50);
		if(i==90 || i==50 || i==96 || i==83){
			Sleep(50);
		}
	}
}

void middle1(void){

	printf("\n\n\n\n\n\n\n");
}

void middtab1(void){
	printf("\t\t\t\t\t");
}*/
