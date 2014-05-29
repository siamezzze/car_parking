#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QKeyEvent>
#include "qpaintwidget.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;// Указатель на объект нашего класса
    QPaintWidget *wgt;

protected:
    void keyPressEvent(QKeyEvent *e);

};

#endif // WIDGET_H
