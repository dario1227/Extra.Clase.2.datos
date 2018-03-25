//
// Created by kenneth on 24/03/18.
//

#include "SingleTon.h"
int SingleTon::repetitions = 0;
MainWindow* SingleTon::MaincreateWindow() {
    if(SingleTon::repetitions==0){
        repetitions++;
        MainWindow* var = nullptr;
        return var;
    }
    else{
        return nullptr;
    }
}