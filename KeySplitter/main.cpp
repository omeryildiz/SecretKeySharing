/* 
 * File:   main.cpp
 * Author: root
 *
 * Created on 02 Ocak 2016 Cumartesi, 19:46
 */

#include <iostream>
#include <string>
#include "Key.h"
#include "KeySplit.h"
#include "KeyAssembly.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string myKey = "merhaba dunya";
    int pcsNo = 3;
    KeySplit kspl;

    Key keyPcs = kspl.splitKey(pcsNo, myKey, myKey.length());

    string orgKey = keyPcs.getOrgKey();

    string split1 = keyPcs.getSplitedPieces().at(0);
    string split2 = keyPcs.getSplitedPieces().at(1);
    string split3 = keyPcs.getSplitedPieces().at(2);

    vector<string> spltpcs;
    for (int i = 0; i < keyPcs.getSplitedPieces().size(); i++) {
        spltpcs.push_back(keyPcs.getSplitedPieces().at(i));
    }


    KeyAssembly kasm;
    string nOrgKey = kasm.getKey(spltpcs);
    return 0;
}

