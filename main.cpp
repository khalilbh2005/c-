#include "piece.h"
#include <iostream>
#include <vector>
#include "piece.h"
#include "appartement.h"
#include <string>
using namespace std;
int main(){
    Appartement r1;
    Piece chambre0(3,5,"chambre0");
    Piece chambre1(3,5,"chambre1");
    Piece chambre2(3,5,"chambre2");
    Piece chambre3(3,5,"chambre3");
    Piece chambre4(3,5,"chambre4");
    Piece chambre5(3,5,"chambre5");
    Piece chambre55(3,5,"chambre5");
    Piece chambre555(3,5,"chambre5");
    Piece chambre5555(3,5,"chambre5");
    Piece chambre6(3,5,"chambre6");
    Piece chambre7(3,5,"chambre7");
    Piece chambre8(3,5,"chambre8");
    Piece chambre9(3,5,"chambre9");
    r1.ajoutPiece(chambre0);
    r1.ajoutPiece(chambre1);
    r1.ajoutPiece(chambre2);
    r1.ajoutPiece(chambre3);
    r1.ajoutPiece(chambre4);
    r1.ajoutPiece(chambre5);
    r1.ajoutPiece(chambre6);
    r1.ajoutPiece(chambre7);
    r1.ajoutPiece(chambre8);
    r1.ajoutPiece(chambre9);
    cout<<"chercher 5 avec recherche: => "<<r1.recherche("chambre5")<<endl;
    Appartement r2;
    r2.ajoutPiece(chambre0);
    r2.ajoutPiece(chambre1);
    r2.ajoutPiece(chambre2);
    r2.ajoutPiece(chambre3);
    r2.ajoutPiece(chambre4);
    r2.ajoutPiece(chambre5);
    r2.ajoutPiece(chambre55);
    r2.ajoutPiece(chambre55);
    r2.ajoutPiece(chambre555);
    r2.ajoutPiece(chambre5555);
    r2.ajoutPiece(chambre6);
    r2.ajoutPiece(chambre7);
    r2.ajoutPiece(chambre8);
    r2.ajoutPiece(chambre9);
    cout<<"recerche 5 avec recherche Premier => "<<r2.recherchePremier("chambre5")<<endl;
    return 0;
}
