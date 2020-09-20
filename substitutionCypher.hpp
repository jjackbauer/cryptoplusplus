#ifndef SUBSTITUTIONCYPHER_HPP_
#define SUBSTITUTIONCYPHER_HPP_

#include <vector>
#include <iostream>
#include <string>

class substitutionCypher
{
    private:
        std::vector<char> inputAlphabeth;
        std::vector<char> cypherAlphabeth;
    public:
                     substitutionCypher();
                     substitutionCypher(std::vector<char> & inputAlphabeth,std::vector<char> & cypherAlphabeth);
       std::string & encryptMessage(std::string & plainText,std::string & encryptedText);
       std::string & decryptMessage(std::string & encryptedText,std::string & plainText);
       void          setInputAlphabeth(std::vector<char> & inputAlphabeth);
       void          setCypherAlphabeth(std::vector<char> & cypherAlphabeth);
};

#endif /*SUBSTITUTIONCYPHER_HPP_*/