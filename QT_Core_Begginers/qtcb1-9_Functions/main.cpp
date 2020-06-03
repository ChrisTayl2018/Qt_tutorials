#include <QCoreApplication>
#include <QDebug>
#include <iostream>

// This qt Project covers the Udemy course for the section 6 "Flow Control"
// Including:
// 1 - Intro To functions
// 2 - Functions Params
// 3 - Function Flow Control
// 4 - Overloading
// 5 - By ref and by value
// 6 - Functions in structs


// 1 - Intro To functions

void test(){
    qInfo() << "This is a test function" ;
}
int calc(int x , int y){ return x+ y; };

// 5 - By ref and by value
// Pass by value means we are actually passing a copy of the value through with this function
// the function takes a copy and then makes then performs the logic within the function and returns a value

void testValue(int x){
    x= x+ 10;
    qInfo() << "x = " << x;
}

// Pass by reference meaning that we are actually passing the object stored in memory
// into the function
void testRef(int &y){
    y= y+ 10;
    qInfo() << "y = " << y;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    // 1 - Intro To functions

    // First test function
    test();

    int age, years;
    qInfo() << "Enter your age: " ;
    std::cin >> age;
    qInfo() << "Enter years :" ;
    std::cin >> years;
    int age2= calc(age, years);
    qInfo() << "You will be: " << age2 << " in " << years << " years";




    // 5 - By ref and by value
    int x = 1;
    int y= 5;
    qInfo() << "Testing Value: " ;
    testValue(x);
    qInfo() << "X = " << x;

    qInfo() << "Testing Reference: " ;
    testRef(y);
    qInfo() << "Y= " << y;

    // Read up more about references and values. These are actually different to pointers.
    // REFERENCES AND POINTERS ARE NOT THE SAME


    return a.exec();
}


