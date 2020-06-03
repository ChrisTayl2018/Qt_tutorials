#ifndef MAMMAL_H
#define MAMMAL_H
#include "animal.h";
#include <QObject>

class mammal : public animal
{
    Q_OBJECT
public:
    explicit mammal(QObject *parent = nullptr);
    void isAlive();

signals:

};

#endif // MAMMAL_H
