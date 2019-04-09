#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n < 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cout << "usage : fibonacci.exe <number>" << std::endl;
        return -1;
    }
    else
    {
        int n = std::atoi(argv[1]);
        std::cout << fibonacci(n) << std::endl;
    }
}