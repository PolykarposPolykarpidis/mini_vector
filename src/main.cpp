#include <iostream>
#include "Vector.h"


int main() {
    Vector<int> v{};
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    int e = v.pull_back();
    v.push_back(5);
    
    for(size_t i=0;i<v.size();i++)
        std::cout<<v[i]<<'\n';
    
    return 0;
}
