#ifndef __whatever__
#define __whatever__

// ----------------- Swap two Param -------------- //
template <typename T>
void   swap( T &x, T &y )
{
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}

// ----------------- Get The Min -------------- //
template <typename T>
T   min( T x, T y )
{
    if (y <= x)
        return (y);
    return (x);
}

// ----------------- Get The Max  -------------- //
template <typename T>
T   max( T x, T y )
{
    if (y >= x)
        return (y);
    return (x);
}

#endif