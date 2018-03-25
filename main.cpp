#include <iostream>
#include <QtWidgets/QApplication>
#include "MainWindow.h"
#include "SingleTon.h"
#include "FacadeRAM.h"
#include <QWidget>
int main(int argc,char* argv[]) {
    QApplication app(argc, argv);
    MainWindow* window = SingleTon::MaincreateWindow();
    FacadeRAM::facade();
    return 0;
}