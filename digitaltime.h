#ifndef DIGITALTIME_H
#define DIGITALTIME_H

#include <QMainWindow>
#include <QLCDNumber>

namespace Ui {
class digitaltime;
}

class digitaltime : public QLCDNumber
{
    Q_OBJECT

public:
    explicit digitaltime(QWidget *parent = nullptr);
    ~digitaltime();

private slots:
    void showTime();


private:
    Ui::digitaltime *ui;
};

#endif // DIGITALTIME_H
