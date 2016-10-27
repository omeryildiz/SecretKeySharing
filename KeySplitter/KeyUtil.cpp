#include "KeyUtil.h"

KeyUtil::KeyUtil() {
    //ctor
}

KeyUtil::~KeyUtil() {
    //dtor
}

std::string KeyUtil::XorOnString(std::vector<std::string> &listString) {
    std::string xorstr = "";
    std::string deneme1 = listString[0];
    std::string deneme2 = listString[1];
    if (listString.empty() || listString.size() < 1) {

        return NULL;
    } else if (listString.size() < 2) {
        return listString[0];
    } else {
        xorstr = XorToString(deneme1, deneme2);
        for (int i = 2; i < listString.size(); i++) {
            xorstr = XorToString(xorstr, listString[i]);
        }

    }

    return xorstr;

}

std::string KeyUtil::XorToString(std::string stringContainer1, std::string stringContainer2) {
    std::string out = "";
    int a = stringContainer1.length();
    if (stringContainer1.length() == 0 || stringContainer2.length() == 0) {
        return NULL;
    } else {

        if (stringContainer1.length() >= stringContainer2.length()) {
            for (int i = 0; i < stringContainer1.length(); i++) {
                out.push_back(stringContainer1.at(i) ^ stringContainer2.at(i % stringContainer2.length()));
            }
        } else {
            for (int i = 0; i < stringContainer2.length(); i++) {
                out.push_back(stringContainer2.at(i) ^ stringContainer1.at(i % stringContainer1.length()));
            }

        }

        return out;
    }

}

