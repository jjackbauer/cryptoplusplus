# cryptoplusplus
## Library for cryptography methods in C++

### Substitution Cypher Encrypter
#### to compile $ g++ substitutionCypher.hpp substitutionCypher.cpp substitutionCypherEncrypter.cpp -o subCypherEncrypter.exe
#### to use  $ ./subCypher.exe <inputAlphabeth> <cypherAlphabeth>
```
$ ./subCypherEncrypter.exe abcdefghijklmnopqrstuvwxyz ZYXWVUTSRQPONMLKJIHGFEDCBA
|subCypherEncrypter by https://github.com/jjackbauer|

?>this is a test message
:>GSRH RH Z GVHG NVHHZTV

?>it should be encrypted
:>RG HSLFOW YV VMXIBKGVW


```
### Substitution Cypher Decrypter
#### to compile
##### $ g++ substitutionCypher.hpp substitutionCypher.cpp substitutionCypherDecrypter.cpp -o subCypherDecrypter.exe
#### to use  
##### $ ./subCypherDecrypter.exe <inputAlphabeth> <cypherAlphabeth>

```
$ ./subCypherDecrypter.exe abcdefghijklmnopqrstuvwxyz ZYXWVUTSRQPONMLKJIHGFEDCBA
|subCypherDecrypter by https://github.com/jjackbauer|

?>GSRH RH Z GVHG NVHHZTV
:>this is a test message

?>RG HSLFOW YV VMXIBKGVW
:>it should be encrypted

```

