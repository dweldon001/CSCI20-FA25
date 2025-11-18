//make a stack to store the operands, and when you encounter an operator, pop the top two operands from the stack, 
//perform the operation, and push the result back onto the stack. At the end of the expression, the stack will contain the final result.
#include "header.hpp"

int main() {
    vector<int> st;

    //push two numbers and add them
    push_stack(st, 10);
    push_stack(st, 20);
    print_stack(st);

    add_top_two(st);
    printf("After adding top two:\n");
    print_stack(st);

    //More operations
    push_stack(st, 5);
    push_stack(st, 7);
    print_stack(st);
    add_top_two(st);
    printf("After adding 5 and 7:\n");
    print_stack(st);

    //Final add (adds previous results)
    add_top_two(st);
    printf("After final add:\n");
    print_stack(st);

    return 0;
}
