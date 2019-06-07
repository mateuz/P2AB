#include "Aminoacids.hpp"

AminoAcid::AminoAcid(){
  aminomap['A'] = 'A';
  aminomap['R'] = 'B';
  aminomap['N'] = 'B';
  aminomap['D'] = 'B';
  aminomap['C'] = 'A';
  aminomap['E'] = 'B';
  aminomap['Q'] = 'B';
  aminomap['G'] = 'A';
  aminomap['H'] = 'B';
  aminomap['I'] = 'A';
  aminomap['L'] = 'A';
  aminomap['K'] = 'B';
  aminomap['M'] = 'A';
  aminomap['F'] = 'B';
  aminomap['P'] = 'A';
  aminomap['S'] = 'B';
  aminomap['T'] = 'B';
  aminomap['W'] = 'B';
  aminomap['Y'] = 'B';
  aminomap['V'] = 'A';
}

AminoAcid::~AminoAcid(){
  /* empty */
}

char AminoAcid::getAmino(char who){
    std::map<char,char>::iterator it;

    it = aminomap.find(who);
    if( it != aminomap.end() )
      return it->second;

    return '#';
}

size_t AminoAcid::getSize(){
  return aminomap.size();
}
