#include <cstdio>
#include <vector>

 using std::printf;
 using std::vector;

 char bannana(char a, char b) {
        return a + b;
    }
int main() {
    char a = 127;
    char b = 1;
    bannana(127,1);
    printf("%c\n", bannana(127,1));
    vector<int> v = {8, 4, 5, 9};
    printf("%d\n", v.at(0)) ;
  return 0;
}