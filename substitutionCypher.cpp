#include "substitutionCypher.hpp"
substitutionCypher::substitutionCypher()
{
    return;
}
substitutionCypher::substitutionCypher(std::vector<char> & inputAlphabeth,std::vector<char> & cypherAlphabeth)
{
    if(inputAlphabeth.size() == cypherAlphabeth.size())
    {
        setInputAlphabeth(inputAlphabeth);
        setCypherAlphabeth(cypherAlphabeth);
        
    }
    else
    {
        std::cout<<"Input Alphabeth size is different from Cypher Alphabeth size"<<std::endl;
        std::cout<<"Input Alphabeth size: "<<inputAlphabeth.size()<<std::endl;
        std::cout<<"Cypher Alphabeth size: "<<cypherAlphabeth.size()<<std::endl;
    }
    
}
std::string & substitutionCypher::encryptMessage(std::string & plainText,std::string & encryptedText)
{
    int k;
    encryptedText = "";
    for(char& c : plainText) 
    {
        for(k=0;k<inputAlphabeth.size() && inputAlphabeth[k] !=c ;k++);
        encryptedText+= k<inputAlphabeth.size()?cypherAlphabeth[k]:c;
    }
    return encryptedText;
}
std::string & substitutionCypher::decryptMessage(std::string & encryptedText,std::string & plainText)
{
    int k;
    plainText = "";

    for(char& c : encryptedText) 
    {
        for(k=0;k<cypherAlphabeth.size() && cypherAlphabeth[k] !=c ;k++);
        plainText+= k<cypherAlphabeth.size()?inputAlphabeth[k]:c;
    }

    return plainText;

}
void substitutionCypher::setInputAlphabeth(std::vector<char> & inputAlphabeth)
{
    this->inputAlphabeth = inputAlphabeth;
}
void substitutionCypher::setCypherAlphabeth(std::vector<char> & cypherAlphabeth)
{
    this->cypherAlphabeth = cypherAlphabeth;
}