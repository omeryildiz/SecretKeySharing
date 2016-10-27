#include "Key.h"

Key::Key() {
    //ctor
}

Key::~Key() {
    //dtor
}

void Key::setSplitedPieces(std::vector<std::string> &sPieces) {
    this->splitedPieces.swap(sPieces);
}

void Key::setOrgKey(std::string oKey) {
    this->orgKey = oKey;
}

std::string Key::getOrgKey() {
    return this->orgKey;
}

std::vector<std::string> Key::getSplitedPieces() {
    return this->splitedPieces;
}