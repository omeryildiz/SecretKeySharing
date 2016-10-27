/* 
 * File:   KeyAssembly.cpp
 * Author: root
 * 
 * Created on 03 Ocak 2016 Pazar, 00:40
 */

#include "KeyAssembly.h"

KeyAssembly::KeyAssembly() {
}

KeyAssembly::~KeyAssembly() {
}

std::string KeyAssembly::getKey(std::vector<std::string> &splitedPcs) {

    if (!splitedPcs.empty()) {
        return XorOnString(splitedPcs);
    }
    return NULL;
}