#ifndef CESARSCYPHER_HPP_
#define CESARSCYPHER_HPP_
#include "substitutionCypher.hpp"

class ceasarsCypher : public substitutionCypher
{   
    public:
        ceasarsCypher(std::vector<char> & inputAlphabeth, int displacement);
};

#endif /*CEASARSCYPHER_HPP_*/
