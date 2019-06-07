# Amino2AB

The spatial structure of proteins determines many of its essential biological functions. The Protein Structure Prediction (PSP) is the problem of determining the native structure of a protein, given its sequence of amino acid. Therefore, several computational methods were proposed, such as *homology modeling*, *threading*, and the *ab-initio*. The *ab-initio* approach intents to predict the native conformation of a protein using only its primary sequence and the properties of the amino acids, such as the **hydrophobic** and **hydrophilic** interactions. The AB off-lattice model has been widely explored but still is an open problem in structural bioinformatics. In this model, the protein sequence is labeled as 'A' or 'B' according to the amino acid classification, hydrophobic (non-polar or water-hating) or hydrophilic (polar or water-liking) residues respectively. In this way, this repository provides a C++ converter that given the amino acid sequence, output the respective AB sequence.

The 20 Naturally occurring Amino Acids and it's sequence is reported in the table below.

|  Amino Acid Name | 3 Letter Code   | 1 Letter Code   | AB Classification    |
|:-----------------|:---------------:|:---------------:|:--------------------:|
|  Alanine         | Ala             |  A              |  A                   |
|  Arginine        | Arg             |  R              |  B                   |
|  Asparagine      | Asn             |  N              |  B                   |
|  Aspartic acid   | Asp             |  D              |  B                   |
|  Cysteine        | Cys             |  C              |  A                   |
|  Glutamic acid   | Glu             |  E              |  B                   |
|  Glutamine       | Gln             |  Q              |  B                   |
|  Glycine         | Gly             |  G              |  A                   |
|  Histidine       | His             |  H              |  B                   |
|  Isoleucine      | Ile             |  I              |  A                   |
|  Leucine         | Leu             |  L              |  A                   |
|  Lysine          | Lys             |  K              |  B                   |
|  Methionine      | Met             |  M              |  A                   |
|  Phenylalanine   | Phe             |  F              |  B                   |
|  Proline         | Pro             |  P              |  A                   |
|  Serine          | Ser             |  S              |  B                   |
|  Threonine       | Thr             |  T              |  B                   |
|  Tryptophan      | Trp             |  W              |  B                   |
|  Tyrosine        | Tyr             |  Y              |  B                   |
|  Valine          | Val             |  V              |  A                   |
