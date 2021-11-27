#include "forget_window.h"
#include "ui_forget_window.h"

ForgetWindow::ForgetWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ForgetWindow)
{
    ui->setupUi(this);
    //跳转到登录界面
    connect(ui->pushButton_ret, &QPushButton::clicked, parent, [=](){
        parent->show();
        this->hide();
    });
}

ForgetWindow::~ForgetWindow()
{
    delete ui;
}
