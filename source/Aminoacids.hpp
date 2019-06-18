#ifndef _AMINOACIDS_H
#define _AMINOACIDS_H

#include <iostream>
#include <map>
#include <string>

/*
 |----------------|-----|-----|-----|
 |  Amino Acid    | 3LC | 1LC | AB  |
 |----------------|-----|-----|-----|
 |  Alanine       | Ala |  A  |  A  |
 |  Arginine      | Arg |  R  |  B  |
 |  Asparagine    | Asn |  N  |  B  |
 |  Aspartic acid | Asp |  D  |  B  |
 |  Cysteine      | Cys |  C  |  A  |
 |  Glutamic acid | Glu |  E  |  B  |
 |  Glutamine     | Gln |  Q  |  B  |
 |  Glycine       | Gly |  G  |  A  |
 |  Histidine     | His |  H  |  B  |
 |  Isoleucine    | Ile |  I  |  A  |
 |  Leucine       | Leu |  L  |  A  |
 |  Lysine        | Lys |  K  |  B  |
 |  Methionine    | Met |  M  |  A  |
 |  Phenylalanine | Phe |  F  |  B  |
 |  Proline       | Pro |  P  |  A  |
 |  Serine        | Ser |  S  |  B  |
 |  Threonine     | Thr |  T  |  B  |
 |  Tryptophan    | Trp |  W  |  B  |
 |  Tyrosine      | Tyr |  Y  |  B  |
 |  Valine        | Val |  V  |  A  |
 |----------------|-----|-----|-----|

*/

class AminoAcid {
protected:
  std::map<char, char> aminomap;

public:
  AminoAcid();
  ~AminoAcid();

  char getAmino(char);
  size_t getSize();

  void showAminoList();

  std::string convertSequence(std::string);
};


#endif
