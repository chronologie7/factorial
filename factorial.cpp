#include <iostream>

double factorial(double n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    double numero;

    std::cout << "Inserte el número para conseguir su factorial" << std::endl;
    std::cin >> numero;
    std::cout << factorial(numero) << std::endl;

    return 0;
}
