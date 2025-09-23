//Are all of these includes necessary? IDK
#include <algorithm>
#include <cstdio> //includes cstdio library
#include <array> //includes array library
#include <iostream>
#include <iterator>
#include <string> //includes string library
#include <vector> //includes vector library

 int main () {

std::array <int, 5> a1 {1, 2, 3, 4, 5} ; //created an array of integers 
 printf("%i\n", a1[0]) ; //prints the first element in the array of 1

 std::array <int, 3> a2 {21, 17, 196, } ; //created an array of integers
    printf("%i\n", a2[0]) ; //prints the first element in the array of 21

 std::array <int, 4> a3 {6, 7, 9, 12,} ; //created an array of integers
 printf("%i\n", a3[0]) ; //prints the first element in the array of 6
 
 //Ignore this just wanted to see how to print all elements in array
 for (int i = 0; i < 4; ++i)
    printf("%i\n", a3[i]);

     std::vector<int> v = {8, 4, 5, 9};//created a vector of integers
     //Ignore this just wanted to see how to print all elements in vector
      for (int n : v)
        std::cout << n << ' ';
    std::cout << '\n';
    
    printf("%i\n", v [0, 1, 2]) ; //prints the third element in the vector of 5
    printf("%i\n", v [2]) ; //prints the third element in the vector of 5
   //why have two diiferent ways to print elements in vector?

    std::vector<int> v1 = {6, 7, 9, 10}; //created a vector of integers
    printf("%i\n", v1 [0]) ; //prints the first element in the vector of 6

    std::vector<int> v2 = {21, 36, 14 ,67}; //created a vector of integers 
    printf("%i\n", v2 [2]) ; //prints the third element in the vector of 14

return 0 ;
 } 