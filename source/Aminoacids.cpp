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

void AminoAcid::showAminoList(){
  std::cout << " |----------------|-----|-----|-----| " << std::endl;
  std::cout << " |  Amino Acid    | 3LC | 1LC | AB  | " << std::endl;
  std::cout << " |----------------|-----|-----|-----| " << std::endl;
  std::cout << " |  Alanine       | Ala |  A  |  A  | " << std::endl;
  std::cout << " |  Arginine      | Arg |  R  |  B  | " << std::endl;
  std::cout << " |  Asparagine    | Asn |  N  |  B  | " << std::endl;
  std::cout << " |  Aspartic acid | Asp |  D  |  B  | " << std::endl;
  std::cout << " |  Cysteine      | Cys |  C  |  A  | " << std::endl;
  std::cout << " |  Glutamic acid | Glu |  E  |  B  | " << std::endl;
  std::cout << " |  Glutamine     | Gln |  Q  |  B  | " << std::endl;
  std::cout << " |  Glycine       | Gly |  G  |  A  | " << std::endl;
  std::cout << " |  Histidine     | His |  H  |  B  | " << std::endl;
  std::cout << " |  Isoleucine    | Ile |  I  |  A  | " << std::endl;
  std::cout << " |  Leucine       | Leu |  L  |  A  | " << std::endl;
  std::cout << " |  Lysine        | Lys |  K  |  B  | " << std::endl;
  std::cout << " |  Methionine    | Met |  M  |  A  | " << std::endl;
  std::cout << " |  Phenylalanine | Phe |  F  |  B  | " << std::endl;
  std::cout << " |  Proline       | Pro |  P  |  A  | " << std::endl;
  std::cout << " |  Serine        | Ser |  S  |  B  | " << std::endl;
  std::cout << " |  Threonine     | Thr |  T  |  B  | " << std::endl;
  std::cout << " |  Tryptophan    | Trp |  W  |  B  | " << std::endl;
  std::cout << " |  Tyrosine      | Tyr |  Y  |  B  | " << std::endl;
  std::cout << " |  Valine        | Val |  V  |  A  | " << std::endl;
  std::cout << " |----------------|-----|-----|-----| " << std::endl;
}

std::string AminoAcid::convertSequence(std::string seq){
  std::string res;

  for(auto it = seq.begin(); it != seq.end(); it++){
    res.push_back(getAmino(*it));
  }

  return res;
}
