#include "log_in_window.h"
#include "ui_log_in_window.h"

LogInWindow::LogInWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LogInWindow)
{
    //Server
    Connection *cont = Connection::getConnection();

    ui->setupUi(this);

    reg = new RegisterWindow(this);
    modify = new ForgetWindow(this);

    //跳转到注册界面
    connect(ui->pushButton_reg, &QPushButton::clicked, reg, [=](){
        reg->show();
        this->hide();
    });

    //跳转到修改密码界面
    connect(ui->pushButton_modify, &QPushButton::clicked, modify, [=](){
        modify->show();
        this->hide();
    });

    connect(ui->pushButton_log_in, &QPushButton::clicked, this, [=](){

        // only for test
       //auto gameWindow = new MainWindow();
       auto roomWindow = new dating();
       roomWindow->show();
       this->close();
       //
    });
}

LogInWindow::~LogInWindow()
{
    delete ui;
}

void LogInWindow::show()
{
   this->QMainWindow::show();
}
