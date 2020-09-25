#include "substitutionCypher.hpp"

int main( int argc, char *argv[ ])
{
    if(argc == 3)
    {
        std::cout<<"|subCypherDecrypter by jjackbauer @https://github.com/jjackbauer/cryptoplusplus|"<<std::endl;
        std::vector<char> inputAlpha, cypherAlfa;

        for(int  c = 0; argv[1][c] ; c++)
            inputAlpha.push_back(argv[1][c]);

        for(int  c = 0; argv[2][c] ; c++)
            cypherAlfa.push_back(argv[2][c]);


        substitutionCypher cypher(inputAlpha,cypherAlfa);

        while(true)
        {   std::string message;
            std::cout<<std::endl<<"?>";
            std::getline(std::cin, message);
            std::string  decryptedMessage;
            cypher.decryptMessage(message,decryptedMessage);
            std::cout<<":>"<<decryptedMessage<<std::endl;
        }
    
    }
    else
    {
        std::cout<<"Please insert: input_Alphabeth cypher_Alphabeth"<<std::endl;
    }
    
}