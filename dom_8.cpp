#include <string>
#include <cmath>
#include <vector>
#include "dom_8.h"

istream& Student::In(istream& in)
{
    in >> firstname;
    in >> secondname;
    in >> lastname;
    in >> numbergroup;
    return in;
}

void Student::print()
{
    cout << firstname << " " << secondname << " " << lastname << " " << numbergroup;
}

 istream& operator>>(istream& in, Student& stu)
{
    stu.In(in);
    return in;
}

ostream& operator<<(ostream& os, const Student& stu)
 {
     os <<endl<<"Данные студента: "<< stu.firstname << " " << stu.secondname << " " << stu.lastname << " " << stu.numbergroup << endl;

     return os;
 }

 Student& Student::operator=(Student& os)
 {
     if (this == &os)
     {
         return *this;
     }

     numbergroup = os.numbergroup;

     return *this;
 }

 istream& Kartoteka::In(istream& in)
 {
     for (int i = 0; i < N; i++)
     {
         Student k;
         cin >> k;
         mark.push_back(k);
     }
     return in;
 }

 ostream& Kartoteka::arr_out(ostream& os) const
 {
     for (auto x : mark)
     {
         cout << x << endl;
     }
     return os;
 }

 Kartoteka::Kartoteka(int N)
 {
     this->N = N;
 }

 void Kartoteka::print()
 {
     for (int i = 0; i < N; i++)
     {
         cout << mark[i];
     }

 }
 istream& operator>>(istream& in, Kartoteka& stu)
 {
     stu.In(in);
     return in;
 }

ostream& operator<<(ostream& os, const Kartoteka& stu)
 {
     stu.arr_out(os);
     return os;
 }

Student& Kartoteka::Get(int K)
{
    if (K > N)
    {
        cout << " Введите корректное число ";
        exit(EXIT_SUCCESS);
    }
    return mark[K];
}

Student& Kartoteka::operator[](int n)
{
        return mark[n];
}