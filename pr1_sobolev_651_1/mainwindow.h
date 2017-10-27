#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
#include <time.h>
#include <vector>
#include <QVector>



using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QVector <int> vec = QVector <int> (10000);
    QString str;
    QString iznmas;
    QString vr;




public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushButton_4_clicked();

    void Sort ();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
