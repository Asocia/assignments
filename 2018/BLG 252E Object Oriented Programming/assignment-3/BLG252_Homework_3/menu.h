#ifndef MENU_H
#define MENU_H
#include "ingredient.h"
#include <fstream>
#include <vector>
#include <tuple>
using namespace std;
class Menu{
    string header;
    map<string, vector<tuple<string, int>>> menu;
    public:
        Menu(ifstream&);
        void print();
};
#endif