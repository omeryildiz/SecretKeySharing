/* 
 * File:   KeyAssembly.h
 * Author: root
 *
 * Created on 03 Ocak 2016 Pazar, 00:40
 */

#ifndef KEYASSEMBLY_H
#define	KEYASSEMBLY_H

#include "KeyUtil.h"
#include <vector>
#include <iostream>

class KeyAssembly : KeyUtil {
public:
    static std::string getKey(std::vector<std::string> &);
    KeyAssembly();
    virtual ~KeyAssembly();
private:

};

#endif	/* KEYASSEMBLY_H */

