#include <QCoreApplication>
#include <QDebug>
#include <iostream>


int addTen(int ageArg){
    qInfo() << &ageArg << " memory variable" ;
    return ageArg + 10;
}

int addTen2(int &ageArg){
    qInfo() << &ageArg << " memory variable" ;
    return ageArg + 10;
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age1, age2 = 0;

    qInfo () << "Enter a number between 1 and 10";
    std::cin >> age1;
    qInfo() << &age1 << " memory variable 1";
    int returnedAge1 = addTen(age1);
    qInfo() << "In ten years time you will be: " << returnedAge1 << " old \n" ;


    // ---------------------------------------------
    // A work around to avoid continously using more memory then nessesary
    qInfo () << "Enter a number between 1 and 10";
    std::cin >> age2;
    qInfo() << &age2 << " memory variable 2" ;
    int returnedAge2 = addTen2(age2);
    qInfo() << "In ten years time you will be: " << returnedAge2 << " old \n" ;

    return a.exec();
}


// Note the objective of this tutorial was to demonstrate that using static variables can really make things
// quiet difficult when doing coding. Using static variables can really start to mess up the CPP scope.

// Most important take away from this lesson and this assignment is two things

/* int addTen(int ageArg){ return ageArg + 10;}
actually takes a copy of the arguement passed into the variable. That being ageArg. Then it works with this copy and then returns a value)

A work around for this is to define a function that takes a pointer to the memory location of a variable (actually called "passing by reference").
This means you can still pass the variable in  as normal
but it now no longer takes a copy of this variable, instead it is actually using the value of the variable saved in this memory location


*/
