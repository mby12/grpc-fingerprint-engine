// Your First C++ Program

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cstdlib>

#include "base642.h"

using std::string;

int main() {
    string myText = "Hello";     // String (text)
    string myTextDecode = "QVlBTSBHT1JFTkcgRElLRUNBUElO";     // String (text)

    std::cout << "Hello World! \n";
    std::cout << base64_encode(myText, false) << "\n";
    std::cout << base64_decode(myTextDecode, false) << "\n";
    return 0;
};