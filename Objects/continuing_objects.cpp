#include "header_for_continuing_objects.hpp"

int main()
{
    vector <char> v = {'O', 'b', 'j', 'e', 'c', 't', 's'};
    A obj;
    obj.load(v);
    obj.st_print();
    printf("\n");
    obj.vec_print(v);

    return 0;
}

void A::load(vector<char> input) {
    for (int i=0; i < input.size(); i=i+1) {
        //load all elemntsof input into st
    st.push(input.at(i));
     }
     return ;
}

void A::st_print() {
   
    for(;!st.empty();) {
        //print all elemntsof st
        char top = st.top();
        st.pop();
        printf("%c", top);
    }
    return ;
}
void A::vec_print(vector<char> input) {

    stack<char> buffer;
    for (int i=0; i < input.size(); i=i+1) {
        if (i>=20) {
            break;
        }
        //print all elemntsof input
        st.push(input.at(i));
        //now we have loaded the stack
        char top = st.top();
        st.pop();
        printf("%c", top);
    }
    return ;
}

A::A() {
    st = {};
}
