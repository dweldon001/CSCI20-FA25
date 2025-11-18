#include "header.hpp"

//Functions implemented in the other file
void push_stack(vector<int>& st, int value);
int pop_stack(vector<int>& st);
void add_top_two(vector<int>& st);
void print_stack(const vector<int>& st);

//New operators (work on the top two stack elements)
void sub_top_two(vector<int>& st) {
    if (st.size() < 2) {
        printf("Error: need at least two operands to subtract\n");
        return;
    }
    int a = pop_stack(st); //top
    int b = pop_stack(st); //next
    push_stack(st, b - a); //important: b - a keeps RPN order
}

void mul_top_two(vector<int>& st) {
    if (st.size() < 2) {
        printf("Error: need at least two operands to multiply\n");
        return;
    }
    int a = pop_stack(st);
    int b = pop_stack(st);
    push_stack(st, b * a);
}

void div_top_two(vector<int>& st) {
    if (st.size() < 2) {
        printf("Error: need at least two operands to divide\n");
        return;
    }
    int a = pop_stack(st); //divisor (top)
    int b = pop_stack(st); //dividend (next)
    if (a == 0) {
        printf("Error: division by zero\n");
        //push something sensible back
        push_stack(st, 0);
        return;
    }
    push_stack(st, b / a); //integer division
}
// (10+20)+(50-15)+3*4+100/5+7/0 
int main() {
    vector<int> st;

    // push two numbers and add them
    push_stack(st, 10);
    push_stack(st, 20);
    print_stack(st);

    add_top_two(st);
    printf("After adding top two:\n");
    print_stack(st);

    //subtraction
    push_stack(st, 50);
    push_stack(st, 15);
    print_stack(st);
    sub_top_two(st);
    printf("After subtracting (50 15 -> 50 - 15):\n");
    print_stack(st);

    //multiplication
    push_stack(st, 3);
    push_stack(st, 4);
    print_stack(st);
    mul_top_two(st);
    printf("After multiplying (3 4 -> 3 * 4):\n");
    print_stack(st);

    //division
    push_stack(st, 100);
    push_stack(st, 5);
    print_stack(st);
    div_top_two(st);
    printf("After dividing (100 5 -> 100 / 5):\n");
    print_stack(st);

    //division-by-zero (shows error handling)
    push_stack(st, 7);
    push_stack(st, 0);
    print_stack(st);
    div_top_two(st); // prints error and pushes 0
    printf("After attempting division by zero:\n");
    print_stack(st);

  
    //add sequence to combine results
    add_top_two(st);
    add_top_two(st);
    add_top_two(st);
    add_top_two(st);
    printf("After a final add:\n");
    print_stack(st);

    return 0;
}