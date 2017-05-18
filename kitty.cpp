#include "kitty.h"


Kitty::Kitty() {
    NAME = "";
    BREED = "";
    AGE = 0;
    GENDER = 0;
}

Kitty::~Kitty() {
    NAME.clear();
    BREED.clear();
    AGE = 0;
    GENDER = 0;
}

Kitty::Kitty(std::string name, std::string breed, int age, char gender) {
    NAME = name;
    BREED = breed;
    AGE = age;
    GENDER = gender;
}

bool
ReadKittyFromFile(std::ifstream &Kit, Kitty &ob) {
    getline(Kit, ob.NAME);
    getline(Kit, ob.BREED);
    Kit >> ob.AGE;
    Kit.get();
    ob.GENDER = Kit.get();
    Kit.get();
    if (Kit.peek() == '*') {
        std::cout << "End of file" << std::endl;
        return false;
    }
    else {
        return true;
    }
}

void
PrintKitty(Kitty &ob) {
    std::cout << "Name: " << ob.NAME << " Breed: " << ob.BREED << " Age: " << ob.AGE << " Gender: " << ob.GENDER << std::endl;
}

void PrintKitty(std::ofstream &Kit, Kitty &ob) {
    Kit << ob.NAME << std::endl << ob.BREED << std::endl << ob.AGE << std::endl << ob.GENDER << std::endl;
}

