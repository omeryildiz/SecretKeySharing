#ifndef KEY_H
#define KEY_H
#include <iostream>
#include <string>
#include <vector>

class Key {
public:
    Key();
    virtual ~Key();
    void setSplitedPieces(std::vector<std::string>&);
    std::vector<std::string> getSplitedPieces();
    std::string getOrgKey();
    void setOrgKey(std::string);
protected:
private:
    std::string orgKey;
    std::vector<std::string> splitedPieces;

};

#endif // KEY_H
