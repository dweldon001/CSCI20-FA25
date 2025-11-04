#include <cstdio>

int main() {
    int a = 1;
    int b = 1;
    int c = 10;
    bool check = true;
    while(check)
    {
       if(a > c) {c = a+b;}
       else {check = false;}
       printf("c is equal to %d\n", c);
    }
    printf("s is equal to ");
    for(int i = 0; i<s.size();i++)
    {
        printf("%d", s[i]);
    }
    printf("\n");
    return 0;
}