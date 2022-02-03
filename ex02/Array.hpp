#ifndef __ARRAY__
#define __ARRAY__

template <typename T>
class Array
{
    private:
    T   *_array;
    int _size;

    public :
    // ------------- Constructor && Destructor ------------ //
    Array() : _array(new T[0]), _size(0) {}

    Array(unsigned int n)
    {
        this->_size = n;
        this->_array = new T[n];
    }

    Array( const Array & array)
    {
        *this = array;
    }

    ~Array()
    {
        delete [] this->_array;
    }
    // -------------- Member functions -------------------- //
    int     size( void ) const
    {
        return (this->_size);
    }

    // --------------- Operator '=' Assignement --------------- //
    Array&  operator = ( const Array & array )
    {
        this->_array = new T[array.size()];
        this->_size = array.size();
        for (int i = 0; i < this->_size; i++)
            this->_array[i] = array._array[i];
        return (*this);
    }

    // ---------------- Operator '[]' Array Index ------------------------ //
    T&      operator [] (unsigned int index) const
    {
        if (index >= this->size())
            throw ArrayIndexOutOfBound();
        return (this->_array[index]);
    }

    // --------------------- Exception class  --------------------------- //
    class ArrayIndexOutOfBound : public std::exception
    {
        const char * what () const throw ()
        {
            return "Exception : Array index out of bound";
        }
    };

};

#endif