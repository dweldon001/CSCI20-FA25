#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

 int main () {

std::array <int, 5> a1 {1, 2, 3, 4, 5} ;
 printf("%i\n", a1[0,1,2,3,4]) ;

 printf("%i\n", a1[0,1]) ;

 std::array <int, 3> a3 {21, 17, 196, } ;
    printf("%i\n", a3[0,1]) ;

 std::array <int, 3> a2 {6, 7, 9, } ;

 for (int i = 0; i < 3; ++i) 
    printf("%i\n", a2[i]);

     std::vector<int> v = {8, 4, 5, 9};
      for (int n : v)
        std::cout << n << ' ';
    std::cout << '\n';
    
    printf("%i\n", v [0,1]) ;
    printf("%i\n", v [2]) ;

    std::vector<int> v1 = {6, 7, 9, 10};
    printf("%i\n", v1 [0]) ;

    std::vector<int> v2 = {21, 36, 14 ,67};
    printf("%i\n", v2 [2]) ;

return 0 ;
 } 