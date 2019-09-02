#include <iostream>
#include <cassert>
#include "cmake-build-debug/MyVector.h"

int main() {
    MyVector v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    std::cout<<v1.size()<<std::endl;
    v1.insert(2, 2);
    std::cout<<v1[2]<<std::endl;
    v1.erase(2);
    std::cout<<v1[2]<<std::endl;


}