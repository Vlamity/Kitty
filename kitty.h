#ifndef KITTY_H
#define KITTY_H

#include <iostream>
#include <string>
#include <fstream>

class Kitty {
public:
    std::string NAME;
    std::string BREED;
    int AGE;
    char GENDER;
    Kitty();
    ~Kitty();
    Kitty(std::string name, std::string breed, int age, char gender);
};

bool ReadKittyFromFile(std::ifstream &Kit, Kitty &ob);
void PrintKitty(Kitty &ob);
void PrintKitty(std::ofstream &Kit, Kitty &ob);

#endif // KITTY_H

