#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QBrush>
#include <QPen>
#include <QPixmap>
#include <QWidget>
#include "shape.h"
#include "vector.h"
#include "drawwt.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_contactUs_btn_clicked();

    void on_draw_btn_clicked();


    void on_login_btn_clicked();

    void on_pushButton_4_clicked();

    void on_move_btn_clicked();

private:
    Ui::MainWindow *ui;
     Shape * currentShape;
     vectorType<Shape*> shapeV;
     drawWt *d ;
     void parse();
};

#endif // MAINWINDOW_H
