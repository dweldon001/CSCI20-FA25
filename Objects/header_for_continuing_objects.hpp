 #include <cstdio>
 #include <stack>
 #include <vector>

 using std::stack;
 using std::vector;

 class A
    {
        private:
           stack<char> st;
        public:
         //  constructer
         A();
         //  loads charecter vector to be unloaded in st
         void load(vector<char>); 
         // prints all contents of stack
         void st_print();
         // obfuscation
            void vec_print(vector<char>);
    };
