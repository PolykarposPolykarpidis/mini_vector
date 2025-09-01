#include <iostream>
#include <new>
#include <cstdlib>

int main() {
    size_t m_Capacitor = 10;

    void* raw = operator new (m_Capacitor * sizeof(int));
    int* int_array = static_cast<int*>(raw);

    for(size_t i=0; i<m_Capacitor; i++)
        int_array[i] = i;
    
    for(size_t i=0; i<m_Capacitor; i++)
        std::cout<<int_array[i]<<'\n';

    return 0;
}
