#include "FaceWindow.h"
#include "ui_FaceWindow.h"

FaceWindow::FaceWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FaceWindow)
{
    ui->setupUi(this);
}

FaceWindow::~FaceWindow()
{
    delete ui;
}
