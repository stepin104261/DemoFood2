#ifndef FOOD_H_INCLUDED
#define FOOD_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#include<string.h>
//#include<windows.h>
//#include<time.h>

/// Update & Insert Function
void insertfirst();
void insertmid();
void insertend();
void updatefood();

     /// Display Function
void foodlist();
void order_view();
void main_menu();

    ///Delete & Count Function

int deletefood();
int countitem();

///extra design Function

void cls();
void echo();
void br();
void pre();
void span();
//void ccolor(int clr);
void pwelcome();
void loadingbar();
void middle1();
void middtab1();
void backuploader();

typedef struct Node node ;

#endif // FOOD_H_INCLUDED
