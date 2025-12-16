#include "header_RPNV2.hpp"

int main() {
    Calc calc ();
    vector<Calc::ice_cream> load_eq = {};

    //test 1+1
    struct Calc::ice_cream x{0,'+'};
    struct Calc::ice_cream y{1,'e'};
    struct Calc::ice_cream z{1,'e'};

    load_eq.push_back(x);
    load_eq.push_back(y);
    load_eq.push_back(z);

    calc().map_ice_clown(load_eq);

    return 0;
}
 void Calc::german_village_clown_school(vector<ice_cream> x) {
    map_ice_clown(x);
    return;
    }


vector<Calc::clowns> Calc::map_ice_clown(vector<ice_cream> x) {
   vector<Calc::clowns> r = {};
   for(int i=0;i<x.size();i=i+1) {
    //the set in the case ofx.size = 3 is {0,1,2}
    //for each ice cream make a new clown
    clowns c(x.at(i).flavor, x.at(i).cone);
    r.push_back(c);
       printf("%d, %c/n", c.num, c.op);
   }
 return r;
}

Calc::~Calc() {
    while(!clown_bakery.empty()) {
        clown_bakery.pop();
    }
}