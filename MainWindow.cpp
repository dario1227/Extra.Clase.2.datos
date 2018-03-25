//
// Created by kenneth on 01/03/18.
//

#include "MainWindow.h"
#include <QApplication>
#include <QtWidgets/QPushButton>
#include <iostream>
#include <QLineEdit>
#include <string>
#include "_Estructures/Double_Node.h"
#include "_Estructures/Simple_Node.h"
/**
 * Inicia la ventana y pone los labels junto con los botones
 * @param parent
 */
MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
{
this->resize(1550,700);
}
