#include "ceasarsCypher.hpp"
#include <cstdlib>

int main( int argc, char *argv[ ])
{
    if(argc == 3)
    {   std::cout<<"|cesCypherEncrypter by jjackbauer @https://github.com/jjackbauer/cryptoplusplus|"<<std::endl;
        std::vector<char> inputAlpha, cypherAlfa;

        for(int  c = 0; argv[1][c] ; c++)
            inputAlpha.push_back(argv[1][c]);

        ceasarsCypher cypher(inputAlpha,std::atoi(argv[2]));

        while(true)
        {   std::string message;
            std::cout<<std::endl<<"?>";
            std::getline(std::cin, message);
            std::string  encryptedMessage;
            cypher.encryptMessage(message,encryptedMessage);
            std::cout<<":>"<<encryptedMessage<<std::endl;
        }
    
    }
    else
    {
        std::cout<<"Please insert: input_Alphabeth displacemnt"<<std::endl;
    }
    
}