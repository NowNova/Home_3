#include "Header.h"

int main()
{
    sa::String s1 ("Hello");
    s1.cout();
    sa::String s2 = "World"; //Конструктор копирования
    s2.cout();
    sa::String s3("Good");

    s3 = s2 = s1; //Оператор копирования
    s2.cout(); //Hello
    s3.cout(); //Hello
}

