#include <QtWidgets>
#include "digitaltime.h"


digitaltime::digitaltime(QWidget *parent)
    : QLCDNumber(parent)
{
   setSegmentStyle(Filled);
   QTimer *timer = new QTimer(this);
   connect(timer,&QTimer::timeout,this,&digitaltime::showTime);
   timer-> start(1000);

   showTime();

   setWindowTitle(tr("Jam Digital"));
   resize(300,200);
}

void digitaltime::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if((time.second()%2)==0)
        text[2] =' ';
    display(text);
}



digitaltime::~digitaltime()
{
    delete ui;
}
