/*
 * Buch.cpp
 *
 *  Created on: 03.07.2023
 *      Author: umutk
 */

#include "Buch.h"

/** initTitel must be initialized from BaseClass ( Medium ) */

Buch::Buch(std::string initTitel, std::string initAutor) : Medium(initTitel), autor(initAutor){}

///�berladung von ausgabe mit Mediumspezifischen Daten

void Buch::ausgabe(std::ostream& out) const
{
    Medium::ausgabe(out);
    out << "Autor: " << autor << std::endl;
}



