//
// Created by kenneth on 24/03/18.
//

#include "SingleTone.h"
int SingleTone::repetitions = 0;
MainWindow* SingleTone::MaincreateWindow() {
    if(SingleTone::repetitions==0){
        repetitions++;
        MainWindow* var = nullptr;
        return var;
    }
    else{
        return nullptr;
    }
}