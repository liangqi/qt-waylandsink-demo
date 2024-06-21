#include "widget.h"
#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>

class MyWidget : public QWidget {
public:
    MyWidget() {
        setAttribute(Qt::WA_NativeWindow);
        Widget *win = new Widget();
        QHBoxLayout *layout = new QHBoxLayout(this);
        layout->addWidget(win);
    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gst_init(&argc, &argv);

    //Widget *win = new Widget();
    MyWidget *win = new MyWidget();
    win->resize(640, 480);
    win->show();

    return a.exec();
}
