#include <iostream>
using namespace std;

int fibonacci_cached(int n, int* cache)
{
    if (n < 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (cache[n] > 0)
    {
        return cache[n];
    }

    cache[n] = fibonacci_cached(n - 1, cache) + fibonacci_cached(n - 2, cache);
    return cache[n];
}

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cout << "usage : fibonacci-cached.exe <number>" << std::endl;
        return -1;
    }
    
    int n = std::atoi(argv[1]);
    
    int* cache = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        cache[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << fibonacci_cached(i, cache) << " ";
    }

    std::cout << fibonacci_cached(n, cache) << std::endl;

    return 0;
}