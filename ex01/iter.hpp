#ifndef __ITER__
#define __ITER__

// ----------------- Swap two Param -------------- //
template <typename T, typename F>
void    iter(T *array, int n, F f)
{
    for (int i = 0; i < n; i++)
        f(array[i]);
}

#endif