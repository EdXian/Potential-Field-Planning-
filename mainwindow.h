#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "stdlib.h"
#include "stdio.h"
#include "qcustomplot.h"
#include "iostream"
#include "potential_field.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QVector<double> q;
private:
  //  void define_domain(float x_range, float y_range,double dq,QVector<double>& q);

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H