//
// Created by kenneth on 01/03/18.
//

#ifndef ESTRUCTURES_MAINWINDOW_H
#define ESTRUCTURES_MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QtWidgets/QLabel>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
Q_OBJECT
public:


    explicit MainWindow(QWidget* parent = 0);
    virtual ~MainWindow();





};


#endif //ESTRUCTURES_MAINWINDOW_H
