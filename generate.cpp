#include "generate.h"

using namespace std;

void generate(int *i) {
    char *gender = new char();
    srand(*i-time(NULL));
    int *n = new int();
    *n = rand() % 2;
    string NAME = "";
    if(*n == 0) {
        *gender = 'm';
        *n = rand() % 1385;
        ifstream NameM("NamesM.txt");
        while(*n > 0) {
            getline(NameM, NAME);
            NAME = "";
                --*n;
        }
        getline(NameM, NAME);
        NAME.resize(NAME.size() - 1);
        NameM.close();
    }
    else {
        *gender = 'f';
        *n = rand() % 1221;
        ifstream NameF("NamesF.txt");
        while(*n > 0) {
            getline(NameF, NAME);
            NAME = "";
                --*n;
        }
        getline(NameF, NAME);
        NAME.resize(NAME.size() - 1);
        delete n;
        NameF.close();
    }
    int *b = new int();
    *b = rand() % 101;
    ifstream Breeds("Breeds.txt");
    string BREED = "";
    while(*b > 0) {
        getline(Breeds, BREED);
        BREED = "";
            --*b;
    }
    delete b;
    getline(Breeds, BREED);
    BREED.resize(BREED.size() - 1);
    Breeds.close();
    int *age = new int();
    *age = rand() % 18;
    ofstream Kitty("Kitty.txt", ios::app);
    Kitty << NAME << std::endl << BREED << std::endl << *age << std::endl << *gender << '\n';
    Kitty.close();
    NAME.clear();
    BREED.clear();
    delete age;
    delete gender;
}
