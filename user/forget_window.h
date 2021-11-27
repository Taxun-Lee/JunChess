#ifndef FORGET_WINDOW_H
#define FORGET_WINDOW_H

#include <QMainWindow>

namespace Ui {
class ForgetWindow;
}

class ForgetWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ForgetWindow(QWidget *parent = nullptr);
    ~ForgetWindow();

private:
    Ui::ForgetWindow *ui;
};

#endif // FORGET_WINDOW_H
