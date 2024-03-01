#include "Vecteur3D.h"

using namespace std;

int main(){
    Vecteur3D vect;
    vect.set_coord(X, 2.7);
    vect.set_coord(Y, 1.6);
    vect.set_coord(Z, 5.0);
    vect.affiche();
    Vecteur3D vect2;
    vect2.set_coord(X, 10);
    vect2.set_coord(Y, 9);
    vect2.set_coord(Z, 2.4);
    vect2.affiche();

    if (vect.compare(vect2)) {
        cout << "true";
    }
    else cout << "false";

    return 0;
}