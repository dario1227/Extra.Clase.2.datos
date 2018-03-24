//
// Created by kenneth on 24/03/18.
//

#ifndef EXTRA_CLASE_2_DATOS_JSON_FACTORY_H
#define EXTRA_CLASE_2_DATOS_JSON_FACTORY_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <json-c/json.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

class Json_Factory {
public:

    json_object*  createJson(char* type,char* name,char* value,int tipo);
    json_object* createInt(char* type,char* name,char* value);
    json_object* createChar(char* type,char* name,char* value);
    json_object* createStruct(char* type,char* name,char* value);
    json_object* createFloat(char* type,char* name,char* value);
    json_object* createLong(char* type,char* name,char* value);
    json_object* createDouble(char* type,char* name,char* value);
    json_object* createReference(char* type,char* name,char* value);
};


#endif //EXTRA_CLASE_2_DATOS_JSON_FACTORY_H
