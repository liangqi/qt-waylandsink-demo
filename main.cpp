#include "widget.h"
#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gst_init(&argc, &argv);

    QWidget *m = new QWidget();
    Widget *w = new Widget(m);
    QHBoxLayout *box = new QHBoxLayout(m);
    box->addWidget(w);

    m->resize(640, 480);
    m->show();

    return a.exec();
}
