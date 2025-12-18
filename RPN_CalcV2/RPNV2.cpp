#include "header_RPNV2.hpp"

int main() {
    Calc calc;
    vector<Calc::ice_cream> load_eq = {};

    //test 1+1
    struct Calc::ice_cream x{1,'e'};
    struct Calc::ice_cream y{1,'e'};
    struct Calc::ice_cream z{0,'+'};

    load_eq.push_back(x);
    load_eq.push_back(y);
    load_eq.push_back(z);

    calc.german_village_clown_school(load_eq);
    int result = calc.evaluate();
    printf("Result: %d\n", result);
    
    return 0;
}
// pushing the stack of structed user input into clown_bakery
 void Calc::german_village_clown_school(vector<ice_cream> x) {
    vector<Calc::clowns> mapping = map_ice_clown(x);
    for (int i = x.size() - 1; i >= 0; i--) {
        clown_bakery.push(mapping.at(i));
    }
    return ;
    }

vector<Calc::clowns> Calc::map_ice_clown(vector<ice_cream> x) {
   vector<Calc::clowns> r = {};
   for(int i=0; i<x.size(); i=i+1) {
    //the set in the case of x.size = 3 is {0,1,2}
    //for each ice cream make a new clown
    clowns c(x.at(i).flavor, x.at(i).cone);
    r.push_back(c);
       printf("%d, %c\n", c.num, c.op);
   }
 return r; 
}

int Calc::addition(int a, int b) {
    return a + b;
}

int Calc::subtraction(int a, int b) {
    return a - b;
}

int Calc::multiplication(int a, int b) {
    return a * b;
}

int Calc::division(int a, int b) {
    if (b <= 0) {
        printf("Error: Division by zero\n");
        return 0; 
    }
    return a / b;
}

int Calc::evaluate() {
    stack<clowns> temp_stack;
    while (!clown_bakery.empty()) {
        clowns item = clown_bakery.top();
        clown_bakery.pop();
        if (item.op == 'e') {
            temp_stack.push(item);
        } else {
            if (temp_stack.size() < 2) {
                printf("Error: Not enough operands\n");
                return 0;
            }
            int b = temp_stack.top().num;
            temp_stack.pop();
            int a = temp_stack.top().num;
            temp_stack.pop();
            int result;
            switch (item.op) {
                case '+':
                    result = addition(a, b);
                    break;
                case '-':
                    result = subtraction(a, b);
                    break;
                case '*':
                    result = multiplication(a, b);
                    break;
                case '/':
                    result = division(a, b);
                    break;
                default:
                    printf("Error: Unknown operator %c\n", item.op);
                    return 0;
            }
            clowns res(result, 'e');
            temp_stack.push(res);
        }
    }
    if (temp_stack.size() != 1) {
        printf("Error: Invalid expression\n");
        return 0;
    }
    return temp_stack.top().num;
}
