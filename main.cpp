#include <cstdio>
#include <iostream>
#include "Aminoacids.hpp"

int main(int argc, char * argv[]){

  if( argc == 1 ){
    printf("The amino acid sequence must be passed as parameters.\n");
  }

  AminoAcid * a = new AminoAcid();

  std::cout << a->getSize() << std::endl;


  return 0;
}
