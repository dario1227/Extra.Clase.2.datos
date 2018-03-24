//
// Created by kenneth on 24/03/18.
//
#include "Json_Factory.h"
json_object* Json_Factory::createJson(char *type, char *name, char *value, int tipo) {
    if(tipo==0){
        return createChar(type,name,value);
    }
    if(tipo==1){
        return createInt(type,name,value);
    }
    if(tipo==2){
        return createLong(type,name,value);
    }
    if(tipo==3){
        return createStruct(type,name,value);
    }
    if(tipo==4){
        return createDouble(type,name,value);
    }
    if(tipo==5){
        return createReference(type,name,value);
    }
    if(tipo==6){
        return createFloat(type,name,value);
    }




}
json_object* Json_Factory::createChar(char *type, char *name, char *value) {}
json_object* Json_Factory::createDouble(char *type, char *name, char *value) {}
json_object* Json_Factory::createFloat(char *type, char *name, char *value) {}
json_object* Json_Factory::createInt(char *type, char *name, char *value) {}
json_object* Json_Factory::createLong(char *type, char *name, char *value) {}
json_object* Json_Factory::createReference(char *type, char *name, char *value) {};
json_object* Json_Factory::createStruct(char *type, char *name, char *value) {}