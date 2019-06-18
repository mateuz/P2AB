#include <cstdio>
#include <iostream>
#include "Aminoacids.hpp"

int main(int argc, char * argv[]){

  if( argc == 1 ){
    printf("The amino acid sequence must be passed as parameters.\n");
    exit(-1);
  }

  if( argc == 2 ){
    std::string T(argv[1]);

    AminoAcid * a = new AminoAcid();

    T = a->convertSequence(T);
    std::cout << "Sequence Length: " << T.length() << std::endl;
    std::cout << T << std::endl;
  }

  // AminoAcid * a = new AminoAcid();
  //
  // std::cout << a->getSize() << std::endl;
  //
  // a->showAminoList();
  //
  // //std::cout << a->getAmino('X') << std::endl;
  //
  //
  // std::string T = "GVPINVSCTGSPQCIKPCKDAGMRFGKCMNRKCHCTPK";
  //
  // T = a->convertSequence(T);
  //
  // std::cout << T << std::endl;
  //
  // std::string res = "AAAABABABABABAABAABBAAABBABAABBBABABAB";
  //
  // if( T != res ){ printf("TEST FAILED\n"); } else { printf("TEST PASSED\n"); }

  return 0;
}
