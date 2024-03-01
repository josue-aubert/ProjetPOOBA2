#include "Vecteur3D.h"

using namespace std;

void Vecteur3D::set_coord(Coordonnees3D axis, double val) {
    coord[axis] = val;
}

void Vecteur3D::affiche() const {
    cout << coord[0] << " " << coord[1] << " " << coord[2] << endl;
}

bool Vecteur3D::compare(Vecteur3D vect, double precision ) const {
    for (size_t i = 0; i < coord.size(); ++i) {
    if (fabs(coord[i] - vect.coord[i]) > precision) {
            return false;
        }
    }
    return true;
}
array<double, 3> Vecteur3D::get_coord(Vecteur3D vect) const {
    return vect.coord;
}
