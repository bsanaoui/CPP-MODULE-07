#ifndef __ITER__
#define __ITER__

// ----------------- Swap two Param -------------- //
template <typename T>
void    iter(T *array, int n, void (f)(const T&))
{
    for (int i = 0; i < n; i++)
        (f)(array[i]);
}

#endif