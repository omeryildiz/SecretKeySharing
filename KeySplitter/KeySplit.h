#ifndef KEYSPLIT_H
#define KEYSPLIT_H
#include "KeyUtil.h"
#include <iostream>
#include <string>
#include <vector>
#include "Key.h"

class KeySplit: public KeyUtil
{
    public:
        KeySplit();
        virtual ~KeySplit();
        static Key splitKey(int, std::string, int);
    protected:
    private:
        static std::string generateRandomNumber(int);
        static std::vector<std::string> getRandomPcsList(int, int);
};

#endif // KEYSPLIT_H
