#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include "dom_8.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    //Student stud;
    //cout << " Введите данные \n";
    //cin >> stud;
    ////stud.print();
    //cout << stud;

    //------------------------------------

    cout << " Введите данные \n"; //на английском!!!
    Kartoteka kartoteka(3);
    cin >> kartoteka;
    cout << kartoteka;
    cout << endl;
    //kartoteka.Get(0) = kartoteka.Get(1);
    kartoteka[0] = kartoteka[1];  // перегрузка индексирования (для первых двух студентов картотеки)
    cout << endl;
    cout << kartoteka;


    //------------------------------------

   //Student stud1;
   //Student stud2;
   //cout << " Введите данные 1 студента \n";
   //cin >> stud1;
   //cout << stud1;
   //cout << " Введите данные 2 студента \n";
   //cin >> stud2;
   ////stud1.print();
   //cout << stud2;
   //stud2 = stud1;
   //cout << stud2;

    return 0;
}