#include <cstdio>
#include <vector>
 
using std::vector;
using std::printf;

void print_queue(const vector<int>& q) {
    for (size_t i = 0; i < q.size(); ++i) {
        printf("%d ", q[i]);
    }
}

void push_q(vector<int>& q, int e) {
    q.push_back(e);
}

int pop_q(vector<int>& q) {
    int r = q.at(0);
    q.erase(q.begin());
    return r;
}

int main() {
    vector<int> q;
    push_q(q, 10);
    push_q(q, 20);
    push_q(q, 30);
    print_queue(q);
    printf("\n");

    int popped_element = pop_q(q);
    printf("Popped element: %d\n", popped_element);
    print_queue(q);

    return 0;
}