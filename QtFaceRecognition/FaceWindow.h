#ifndef FACEWINDOW_H
#define FACEWINDOW_H

#include <QMainWindow>

namespace Ui {
class FaceWindow;
}

class FaceWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FaceWindow(QWidget *parent = 0);
    ~FaceWindow();

private:
    Ui::FaceWindow *ui;
};

#endif // FACEWINDOW_H
