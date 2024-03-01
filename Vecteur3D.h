#pragma once

#include <array>
#include <iostream>

enum Coordonnees3D {X, Y, Z};
class Vecteur3D {
public:
    void set_coord(Coordonnees3D axis, double val);
    void affiche() const;
    bool compare(Vecteur3D vect, double precision = 1e-10) const;

private:
    std::array<double, 3> coord;
    std::array<double, 3> get_coord(Vecteur3D vect) const;
};