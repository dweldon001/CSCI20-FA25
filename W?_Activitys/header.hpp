#include <cstdio>
#include <vector>

using std::vector;
using std::printf;

//adds the push_stack, pop_stack, add_top_two, and print_stack functions for stack operations
void push_stack(vector<int>& st, int value) {
    st.push_back(value);
}

int pop_stack(vector<int>& st) {
    if (st.empty()) {
        printf("Error: stack underflow on pop\n");
        return 0;
    }
    int v = st.back();
    st.pop_back();
    return v;
}

void add_top_two(vector<int>& st) {
    if (st.size() < 2) {
        printf("Error: need at least two operands to add\n");
        return;
    }
    int a = pop_stack(st); // top
    int b = pop_stack(st); // next
    int sum = b + a;
    push_stack(st, sum);
}

void print_stack(const vector<int>& st) {
    printf("Stack (bottom -> top): ");
    for (size_t i = 0; i < st.size(); ++i) {
        printf("%d ", st[i]);
    }
    printf("\n");
}
