#include "KeySplit.h"
#include <cstdlib>
#include <ctime>

KeySplit::KeySplit() {
    //ctor
}

KeySplit::~KeySplit() {
    //dtor
}

Key KeySplit::splitKey(int numOfSplitPieces, std::string k, int pieceLength) {
    std::vector<std::string> randomPcs = getRandomPcsList(numOfSplitPieces - 1, pieceLength);

    std::string xorPcs = XorOnString(randomPcs);
    std::string lastPcs = XorToString(xorPcs, k);

    Key key;
    key.setOrgKey(k);
    randomPcs.push_back(lastPcs);
    key.setSplitedPieces(randomPcs);
    return key;


}

std::string KeySplit::generateRandomNumber(int keyLength) {

    std::string secretKey = "";
    for (int i = 0; i < keyLength; i++) {
        secretKey.push_back(rand() % 120 + 1);

    }

    return secretKey;


}

std::vector<std::string> KeySplit::getRandomPcsList(int numberOfPieces, int pieceLength) {
    srand(time(NULL));
    std::vector<std::string> secretKeyList;
    for (int i = 0; i < numberOfPieces; i++) {
        secretKeyList.push_back(generateRandomNumber(pieceLength));


    }

    return secretKeyList;

}
