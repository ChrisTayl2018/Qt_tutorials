#ifndef SOURCE_H
#define SOURCE_H

#include <QObject>
#include <QDebug>

class source : public QObject
{
    Q_OBJECT
public:
    explicit source(QObject *parent = nullptr);

    void sayHello();
    void doTest();

signals:
    void test();

public slots:

};

#endif // SOURCE_H
