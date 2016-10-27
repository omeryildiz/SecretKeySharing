#ifndef KEYUTIL_H
#define KEYUTIL_H
#include <iostream>
#include <vector>
#include <string>

class KeyUtil
{
    public:
        KeyUtil();
        virtual ~KeyUtil();
    protected:
        static std::string XorToString(std::string, std::string);
        static std::string XorOnString(std::vector<std::string> &);

    private:
};

#endif // KEYUTIL_H
