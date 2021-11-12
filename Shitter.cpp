//
// Ver 0.2 <3
//
#include <iostream>
#include <string>
#include "Shitter.h"
using namespace std;

Shitter::Shitter(string person, int shits){

    name = person;

    num_shits = shits;

}

int Shitter::get_shits(){

    return num_shits;

}

Shitter Shitter::update_shits(int new_shits){

num_shits = new_shits;

}

string Shitter::get_name(){

    return name;

}



