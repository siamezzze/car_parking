#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);// Создаем виджет
    wgt = new QPaintWidget(this);

    // И кладём его в лайаут
    ui->verticalLayout->addWidget(wgt);
}

void Widget::keyPressEvent(QKeyEvent *e)
{
    wgt->keyPressEvent(e);
}

Widget::~Widget()
{
    delete ui;
}
