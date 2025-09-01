#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <new>



template<typename T>
class Vector{
public:

    Vector(){
        void* raw = operator new(m_Capacity * sizeof(T));
    }

    // T Vector(const T& element){
    //     if (m_Size<m_Capacity){
    //         T* obj = new (raw) T;
    //     }
    // }


    // void push_back(T element){
    //     T* obj = new (raw) T;
    // }


private:
    T node;
    uint32_t m_Capacity=10;
    uint32_t m_Size=0;
    void* raw;
};


#endif // VECTOR_H