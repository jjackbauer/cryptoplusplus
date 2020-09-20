#include "ceasarsCypher.hpp"

ceasarsCypher::ceasarsCypher(std::vector<char> & inputAlphabeth, int displacement)
{
    std::vector<char> cypherAlphabeth(inputAlphabeth);

    for(int c=0; c< displacement % inputAlphabeth.size() ;c++)
    {
        cypherAlphabeth.erase(cypherAlphabeth.begin());
        cypherAlphabeth.push_back(inputAlphabeth.at(c));
    }
    
    setInputAlphabeth(inputAlphabeth);
    setCypherAlphabeth(cypherAlphabeth);
    return;
}