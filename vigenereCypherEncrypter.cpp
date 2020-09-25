#include "vigenereCypher.hpp"

int main( int argc, char *argv[ ])
{
    if(argc == 4)
    {   std::cout<<"|vigenereCypherEncrypter by jjackbauer @https://github.com/jjackbauer/cryptoplusplus|"<<std::endl;
        std::vector<char> inputAlpha, cypherAlfa, key;

        for(int  c = 0; argv[1][c] ; c++)
            inputAlpha.push_back(argv[1][c]);

        for(int  c = 0; argv[2][c] ; c++)
            cypherAlfa.push_back(argv[2][c]);

        for(int  c = 0; argv[3][c] ; c++)
            key.push_back(argv[3][c]);


        vigenereCypher cypher(inputAlpha,cypherAlfa,key);

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
        std::cout<<"Please insert: input_Alphabeth cypher_Alphabeth key"<<std::endl;
    }
    
}