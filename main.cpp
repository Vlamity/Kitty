//#include <iostream>
//#include <fstream>
//#include <ctime>
//#include <string>
//#include <cstring>
//#include <cstdio>
#include "generate.h"
#include "kitty.h"
#include "merge.h"

using namespace std;


int main(int argc, char *argv[]) {

    //setlocale(LC_ALL, "Russian");
    string nam = "Kitty.txt";
/** Генерация миллиона котиков
*    int *i = new int();
*    for(*i = 0; *i < 1000000; ++*i) {
*        generate(i);
*    }
*    ofstream Kitty(nam, ios::app);
*    Kitty << '*';
*    Kitty.close();
*    delete i;
*    cout << "Kitties are genereted!" << endl;
**/
    ifstream Kit;
    ofstream buf1("buf1.txt");
    ofstream buf2("buf2.txt");
    Kit.open(nam);
//    Kitty *ob1 = new Kitty();
//    ReadKittyFromFile(Kit, *ob1);
//    Kitty *ob2 = new Kitty();
    SplitSourceFile(Kit, buf1, buf2);
//    ReadKittyFromFile(Kit, *ob2);
//    PrintKitty(buf1, *ob1);
//    PrintKitty(buf2, *ob2);
//    ReadKittyFromFile(Kit, *ob1);
//    ReadKittyFromFile(Kit, *ob2);
//    PrintKitty(buf1, *ob1);
//    PrintKitty(buf2, *ob2);


}
