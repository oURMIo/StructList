#include <iostream>
#include <string>

using namespace std;

struct Student {
    float name;
//    Student *next;
};
Student number;

void printStudent(int ch)
{
    number.name=ch;
    cout<<"Student  "<<number.name<<endl;
}

int main()
{
    int size,ch;
    cout << "Размер списка  :   ";
    cin>>size;

    for (int i = size; i >0; --i) {
        ch=i;
        printStudent(ch);
    }
    return 0;
}