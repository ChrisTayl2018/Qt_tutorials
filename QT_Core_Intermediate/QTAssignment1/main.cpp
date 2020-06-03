#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    return a.exec();
}

// Assignment Instructions:

/* Use QScopedPointer
 * Make a Test Class
 * Observe the life cycle of this object as its in memory
 * Terminal should display the following
 * Constructed  object (test ( reference to this object memory location))
 * Deconstrcuted object (test ( reference to this object memory location))
 */
