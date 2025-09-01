#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <new>



template<typename T>
class Vector{
public:

    Vector(){
        m_Capacity=10;
        m_Size=0;
        raw = operator new(m_Capacity * sizeof(T));
        m_Data = static_cast<T*>(raw);
    }

    void push_back(T element){
        if (m_Size<m_Capacity){
            m_Data[m_Size] = element;
            m_Size++;
        }
        else{
            std::cout<<"There is no space!\n";
        }
    }

    T pull_back(){
        if(m_Size == 0) {
            std::cout<<"There is no element in the vector!\n";
            return -100;
        }
        m_Size = m_Size - 1;
        return m_Data[m_Size];
    }

    T operator[] (size_t index){
        if (index>=m_Size) {
            std::cout<<"There is no such position in the vector!\n";
            return -100;
        }
        return m_Data[index];
    }

    ~Vector(){
        raw = nullptr;
        delete[] m_Data;
    }

    size_t size(){
        return m_Size;
    }


private:
    uint32_t m_Capacity;
    uint32_t m_Size;
    void* raw;
    T* m_Data;
};


#endif // VECTOR_H