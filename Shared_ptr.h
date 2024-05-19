#ifndef HW_C_35_SHARED_PTR_H
#define HW_C_35_SHARED_PTR_H

template<typename T>
class Shared_ptr
{
    static unsigned int _count;
    T* _ptr;
public:
    Shared_ptr(T* ptr)
    {
        ++_count;
        _ptr = ptr;
    }
    Shared_ptr<T>(const Shared_ptr<T>& obj)
    {
        _ptr = obj._ptr;
        ++_count;
    }
    ~Shared_ptr()
    {
        --_count;
        if (_count == 0)
        {
            delete _ptr;
        }
    }


    T* get() { return _ptr; };

};

template<typename T>
unsigned int Shared_ptr<T>::_count = 0;
#endif
