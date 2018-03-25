#include <iostream>
#include <QtWidgets/QApplication>
#include "MainWindow.h"
#include "SingleTone.h"
#include <QWidget>
int main(int argc,char* argv[]) {
    std::cout << "Hello, World!" << std::endl;
    QApplication app(argc, argv);
    MainWindow* window = SingleTone::MaincreateWindow();
    return 0;
}