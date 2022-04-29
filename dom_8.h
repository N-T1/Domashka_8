#ifndef DOM_8
#define DOM_8
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

class Student : private string
{
private:
    string firstname;
    string secondname;
    string lastname;
    string numbergroup;

    istream& In(istream& in);
public:
    void print();
    friend istream& operator>>(istream& in, Student& stu); 
    friend ostream& operator<<(ostream& os, const Student& stu);
    Student& operator=(Student& os);
};

class Kartoteka : private std::string
{
private:
    vector <Student> mark;
    int N;

    istream& In(istream& in);
    ostream& arr_out(ostream& os) const;
public:
    Kartoteka() {};
    Kartoteka(int N);
    void print();
    friend std::istream& operator>>(std::istream& in, Kartoteka& stu);
    friend ostream& operator<<(ostream& os, const Kartoteka& stu);
    Student& Get(int K);
    Student& operator[](int n);
};

#endif
