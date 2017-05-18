#include "merge.h"

void SplitSourceFile(std::ifstream &Kit, std::ofstream &buf1, std::ofstream &buf2) {
    int *i = new int();
    *i = 0;
    while(1) {
        Kitty *ob1 = new Kitty();
        Kitty *ob2 = new Kitty();
        std::cout << *i << ". merge working" << std::endl;
        ++*i;
        if(ReadKittyFromFile(Kit, *ob1) == false) {
            PrintKitty(buf1, *ob1);
            ob1->~Kitty();
            buf1 << '*';
            buf2 << '*';
            break;
        }
        PrintKitty(buf1, *ob1);
        if(ReadKittyFromFile(Kit, *ob2) == false) {
            PrintKitty(buf2, *ob2);
            ob1->~Kitty();
            ob2->~Kitty();
            buf1 << '*';
            buf2 << '*';
            break;
        }
        PrintKitty(buf2, *ob2);
        ob1->~Kitty();
        ob2->~Kitty();
    }
    delete i;
}
