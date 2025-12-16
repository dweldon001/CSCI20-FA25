#include <cstdio>
#include <stack>
#include <vector>

using std::vector;
using std::stack;
using std::printf;

/*
 stack calculator built using a monolithic object

 this means that the object will obfuscate the structure(stack) of evaluation
  -stack in private of class

 this object repersents something like a simple calculator taking numbers and evaluating them

 -problem : repersenting the operations and numbers, solved
 we need encoding for the numbers, lets use a struc and operations of our calculator
 our structure houses numbers for eval and charecters for operations
 the operations will be repersented by the following:
 + = addition
 - = subtraction
 * = multiplication
 / = division
 e = evaluation (failsafe for evaluatable number detection)

 -problem; what are the basic operations of our calculator,solved
 binary operators on which two numbers will e given (a,b)
    -additon a + b
    -subtraction a - b
    -multiplication a * b
    -division a / b
    -evaluation symbolizes number for evaluation, termanation operation

- problem: what stucture defines the equations integrity perserving order, solved
      stack,dicho> st.
      - stack of type dicho assist in evalutation operation encoding

 -problem: we need to be able to load this stack (st) in proper order.
      - Get data from user
      - How: Constructor(limits object to single use) or function
      - Where: 

 - problem: we need a way to evaluate a full stack
     
*/

class Calc {
private:
    struct clowns {
    int num;
    char op;
    };
    clowns(int a, char b) {
        num = a;
        op = b;
    };
    stack<clowns> clown_bakery;
    int addition (int,int);
    int subtraction (int,int);
    int multiplication (int,int);
    int division (int,int);

public:
  struct ice_cream {
    int flavor;
    char cone;
    ice_cream(int a, char b) {
        flavor = a;
        cone = b;
    }
 };
 //tool function
vector<clowns> map_ice_clown(vector<ice_cream>);
  //Calc(); //initialzes the values

  //loads the stack
void german_village_clown_school(vector<ice_cream>);
};
 