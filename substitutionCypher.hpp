#ifndef LOVELACEREPRESENTATION_HPP_
#define LOVELACEREPRESENTATION_HPP_

#include <vector>
#include <iostream>
#include <string>

class substitutionCypher
{
    private:
        std::vector<char> inputAlphabeth;
        std::vector<char> cypherAlphabeth;
    public:
       substitutionCypher(std::vector<char> & inputAlphabeth,std::vector<char> & cypherAlphabeth);
       std::string & encryptMessage(std::string & plainText,std::string & encryptedText);
       std::string & decryptMessage(std::string & encryptedText,std::string & plainText);
};

#endif /*LOVELACEREPRESENTATION_HPP_*/