#ifndef ANIMAL_H //if not define
#define ANIMAL_H // define

#include <QObject>
#include <QtDebug>

class animal : public QObject // inheriting the public parts of QObject
{
    Q_OBJECT // Q_Object macro. Wra
public: // anything not in public is considered private ;
    explicit animal(QObject *parent = nullptr);

    void speak(QString message);

signals:


public slots:

};

#endif // ANIMAL_H
