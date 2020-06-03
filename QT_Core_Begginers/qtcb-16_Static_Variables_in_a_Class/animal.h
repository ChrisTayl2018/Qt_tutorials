#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>

class animal : public QObject
{
    Q_OBJECT
public:
    explicit animal(QObject *parent = nullptr, QString name = " ");

    QString name;

signals:

};

#endif // ANIMAL_H
