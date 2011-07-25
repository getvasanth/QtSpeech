#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QtSpeech speech;
    QString text = "Geeky-gadgets.com";

    QObject::connect(ui->btn,SIGNAL(clicked()), this, SLOT(say_text()));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::say_text()
{
    QString text = "Hello guys!!";
    speech.say(text);
}
