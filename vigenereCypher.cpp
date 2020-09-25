#include "vigenereCypher.hpp"

vigenereCypher::vigenereCypher( std::vector<char> & inputAlphabeth,std::vector<char> &cypherAlphabeth,std::vector<char> &key)
{
    if(inputAlphabeth.size() == cypherAlphabeth.size())
    {
        startKeyCounter();
        setInputAlphabeth(inputAlphabeth);
        setCypherAlphabeth(cypherAlphabeth);
        setKey(key); 
    }
}
std::string & vigenereCypher::encryptMessage(std::string & plainText,std::string & encryptedText)
{
    int k;
    encryptedText = "";
    startKeyCounter();

    for(char& c : plainText)
    {
        for(k=0;k<inputAlphabeth.size() && inputAlphabeth[k] !=c ;k++);
        encryptedText+=k<inputAlphabeth.size()?cypherAlphabeth.at(((k+getCurrentKeyShift())%(inputAlphabeth.size()))):c;
        nextKeyCounter();
    }

    return encryptedText;
}
std::string & vigenereCypher::decryptMessage(std::string & encryptedText,std::string & plainText)
{
    int k;
    plainText = "";
    startKeyCounter();

    for(char& c : encryptedText)
    {
        for(k=0;k<cypherAlphabeth.size() && cypherAlphabeth[k] !=c ;k++);
        plainText+= k<cypherAlphabeth.size()?inputAlphabeth.at((k-getCurrentKeyShift()+inputAlphabeth.size())%inputAlphabeth.size()):c;
        nextKeyCounter();
    }

    return plainText;
}
void          vigenereCypher::setInputAlphabeth(std::vector<char> &inputAlphabeth)
{
    this->inputAlphabeth = inputAlphabeth;
}
void          vigenereCypher::setCypherAlphabeth(std::vector<char> &cypherAlphabeth)
{
    this->cypherAlphabeth = cypherAlphabeth;
}
void          vigenereCypher::setKey(std::vector<char> &key)
{
    this->key = key;
}
void          vigenereCypher::nextKeyCounter()
{
    keyCounter = (keyCounter+1)%key.size();
}
int           vigenereCypher::getKeyCounter()
{
    return keyCounter;
}
void         vigenereCypher::startKeyCounter()
{
    keyCounter = 0;
}
int           vigenereCypher::getCurrentKeyShift()
{
    return key.at(getKeyCounter()) - 'a';
}