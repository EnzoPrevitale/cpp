#include <iostream>
#include <string>
#include <vector>
using namespace std;

int* ptr = new int;

int main() {
   *ptr = 10;
   cout << *ptr;
   delete ptr;

   cout << *ptr;

    return 0;
}