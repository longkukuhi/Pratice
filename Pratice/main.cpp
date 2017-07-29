//
//  main.cpp
//  Pratice
//
//  Created by Longkuku on 2017/7/29.
//  Copyright © 2017年 Longkuku. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

// "select *(pointer1) from *(pointer2)"
char *catch_Title_EventName_DisplayALL(char *pointer1,char *pointer2){
    long titleLength = strlen(pointer1);
    long nameLength = strlen(pointer2);
    char *Sql_Display_Buffer= new char[titleLength+nameLength+10];
    strcpy(Sql_Display_Buffer, "select ");
    strcat(Sql_Display_Buffer, pointer1);
    strcat(Sql_Display_Buffer, " from ");
    strcat(Sql_Display_Buffer, pointer2);
    cout<<Sql_Display_Buffer<<endl;
    return Sql_Display_Buffer;
}
void test_catch_Title_EventName_DisplayALL(){
    char *title_Name = "name";
    char *Open_Name = "event";
    char *sql = catch_Title_EventName_DisplayALL(title_Name, Open_Name);
    cout<<sql<<endl;
}


int main(int argc, const char * argv[]) {
//    char Sql_Display_Buffer[200]="select * from "; //= new char[400];
//    char Open_Name[200]="event"; //= new char[100];

//    char *Sql_Display_Buffer= new char[400];
//    char *Open_Name= new char[100];
//    Open_Name = "event";
//    Sql_Display_Buffer = "select * from ";
//      strcpy(Open_Name, "event");
//      strcpy(Sql_Display_Buffer, "select * from ");
//    strcpy(Open_Name, Sql_Display_Buffer);
//    cout<<Open_Name<<endl;
//    char good[20];
//    *good = 'w';
//    int length = strlen(Open_Name);
//    int length2 = strlen(Sql_Display_Buffer);
//    for (int i=0; i<length; i++) {
//        Sql_Display_Buffer[length2+i] = Open_Name[i];
//    }
//    int number = length2+1 ;
    //Sql_Display_Buffer[number] = 'o';
//    strcat(Sql_Display_Buffer,Open_Name);
//    cout<<Sql_Display_Buffer<<endl;

    return 0;
}
