#include <QCoreApplication>
#include <QDebug>
#include <array>
#include <iostream>
#include <string>

// This qt Project covers the Udemy course for the section 6 "Flow Control"
// Including:
// 1 - Flow Control
// 2 - If and else
// 3 - Ternary Operators
// 4 - Switch Statements
// 5 - Do While/While  loops
// 6 - For Loops


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    // -----------------------------------
    // 1 - Flow Control
    // -----------------------------------

    int age = 6 ;
    qInfo()  << "Enter your age: " ;
    std::cin >> age;

    if(age ==0) qFatal("You have not enetered a valid age!");
    qInfo() << "You entred" << age;


    if(age < 18){
    qInfo() <<"You are not old enough yet";
    }

    if(age < 21 && age >= 18) qInfo() << "You are not an adult yet";

    if(age > 21) qInfo() << "you are an adult";

    if (age > 110) qCritical() << "That is not possible";




    // -----------------------------------
    // 2 - If and else, else if statements
    // -----------------------------------

    double height;
    qInfo() << "Enter your height";
    std::cin >> height;

    if(height < 5.7){
        qInfo() << "You are Shorter then me";
    } else if(height == 5.7){
        qInfo() << "We are the same height";
    }
    else{
        qInfo() << "You are Taller then me";
    }




    // -----------------------------------
    // 3 - Ternary Operators
    // -----------------------------------
    int shoeSize;
    qInfo() << "Please enter your shoe size";
    std::cin >> shoeSize;

    // The ternary operator is distinguishable by the ? mark. This is basically comparitve to a if else statement
    // (Boolean condition that gets met) ? (IF Condition == True)    :  (IF Condition == False);
    shoeSize > 0 && shoeSize < 14 ? qInfo ("You have entered a valid shoe size") : qFatal("Your shoe size doesn't exist");



    // -----------------------------------
    // 4 - Switch Statements
    // -----------------------------------
    // Switch statements are used when you are looking for a specific variable value, in which case you create some known control action dependent on that value. It basically
    // Compares the case value to the variable and if true performs the rest of the logic. Default if else;

    int fathersAge;
    qInfo() << "Please enter your fathers age" ;
    std::cin >> fathersAge;

    switch(fathersAge){
    case 0: qFatal("That isn't possible or you wouldn't be alive!"); break;
    case 30: qInfo() << "Your father still has plenty of years left ahead of him"; break;
    case 40: qInfo() << "Your father is nearly a middle age male!" ; break;
    case 50: qInfo() << "Your father is a middle age male"; break;
    case 60: qInfo() << "Your father is turning into a grandpa"; break;
    case 70: qInfo() << "Your father is a grandpa"; break;
    default: qInfo() << "Your father id a very old man" ; break;
    }


    // -----------------------------------
    // 5 - Do While/While  loops
    // -----------------------------------

    // Important differences between the two.
    //While loop evaluates the condition prior to executing the loop
    // Do While loop evaluates one iteration of the loop and then checks the condition after execution.

    int start = 1;
    int max = 10;
    int i = start;
    while( i < max ) { qInfo() << "While: " << i; i++; };

    i = start;
    do { qInfo() << "Do: " << i; i++; } while( i < max);


    // -----------------------------------
    // 6 - For Loops
    // -----------------------------------
//    std::array<int, 7> ages = {10, 20, 30, 40, 50, 60, 70};
//    for(int i =0; i < ages.size(); i++) s
//        qInfo() < "ages[" << i << "]" << ages.at(i);
//    }

    // KNOWN BUG IN THE FOR LOOP WHEN COMPARING INT TO CHAR


    qInfo() << "Finished Program - Ctrl C to close";

    return a.exec();
}
