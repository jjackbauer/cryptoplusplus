#ifndef VIGENERECYPHER_HPP_
#define VIGENERECYPHER_HPP_

#include <vector>
#include <iostream>
#include <string>

class vigenereCypher
{
    private:
        std::vector<char> inputAlphabeth;
        std::vector<char> cypherAlphabeth;
        std::vector<char> key;
        int               keyCounter;
        void          setInputAlphabeth(std::vector<char> &inputAlphabeth);
        void          setCypherAlphabeth(std::vector<char> &cypherAlphabeth);
        void          setKey(std::vector<char> &key);
        void          startKeyCounter();
        void          nextKeyCounter();
        int           getKeyCounter();
        int           getCurrentKeyShift();
    public:
        vigenereCypher( std::vector<char> & inputAlphabeth,std::vector<char> & cypherAlphabeth,std::vector<char> &key);
        std::string & encryptMessage(std::string & plainText,std::string & encryptedText);
        std::string & decryptMessage(std::string & encryptedText,std::string & plainText);
        
};

#endif /*VIGENERECYPHER_HPP_*/