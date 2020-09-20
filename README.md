# cryptoplusplus
## Library for cryptography and cryptoanalysis methods in C++

### Substitution Cypher Encrypter
#### to compile:
##### $ g++ substitutionCypher.hpp substitutionCypher.cpp substitutionCypherEncrypter.cpp -o subCypherEncrypter.exe
#### to use:
##### $ ./subCypher.exe inputAlphabeth cypherAlphabeth
```
$ ./subCypherEncrypter.exe abcdefghijklmnopqrstuvwxyz ZYXWVUTSRQPONMLKJIHGFEDCBA
|subCypherEncrypter by https://github.com/jjackbauer|

?>this is a test message
:>GSRH RH Z GVHG NVHHZTV

?>it should be encrypted
:>RG HSLFOW YV VMXIBKGVW


```
### Substitution Cypher Decrypter
#### to compile:
##### $ g++ substitutionCypher.hpp substitutionCypher.cpp substitutionCypherDecrypter.cpp -o subCypherDecrypter.exe
#### to use: 
##### $ ./subCypherDecrypter.exe inputAlphabeth cypherAlphabeth

```
$ ./subCypherDecrypter.exe abcdefghijklmnopqrstuvwxyz ZYXWVUTSRQPONMLKJIHGFEDCBA
|subCypherDecrypter by https://github.com/jjackbauer|

?>GSRH RH Z GVHG NVHHZTV
:>this is a test message

?>RG HSLFOW YV VMXIBKGVW
:>it should be encrypted

```

### Ceasar's Cypher Encrypter
#### to compile:
##### $ g++ substitutionCypher.hpp substitutionCypher.cpp ceasarsCypher.hpp ceasarsCypher.cpp ceasarsCypherEncrypter.cpp -o cesCypherEncrypter.exe
#### to use:
##### $ ./cesCypherEncrypter.exe inputAlphabeth displacement

```
$ ./cesCypherEncrypter.exe abcdefghijklmnopqrstuvwxyz 3
|***cesCypherEncrypter by https://github.com/jjackbauer***|

?>this is a test message
:>wklv lv d whvw phvvdjh

?>it should be encrypted
:>lw vkrxog eh hqfubswhg

```
### Ceasar's Cypher Decrypter
#### to compile:
##### $ g++ substitutionCypher.hpp substitutionCypher.cpp ceasarsCypher.hpp ceasarsCypher.cpp ceasarsCypherDecrypter.cpp -o cesCypherDecrypter.exe
#### to use:
##### $ ./cesCypherDecrypter.exe inputAlphabeth displacement


```

$ ./cesCypherDecrypter.exe abcdefghijklmnopqrstuvwxyz 3
|***cesCypherDecrypter by https://github.com/jjackbauer***|

?>wklv lv d whvw phvvdjh
:>this is a test message

?>lw vkrxog eh hqfubswhg
:>it should be encrypted

```
