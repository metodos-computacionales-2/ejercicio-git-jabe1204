#include <iostream>
#include <cmath>

int pitagoras(int x, int y, int z);

int main(void)
{
    std::cout<<"Ingrese el primer valor"<<std::endl;
    int v1;
    std::cin>>v1;
    std::cout<<"Ingrese el segundo valor"<<std::endl;
    int v2;
    std::cin>>v2;
    std::cout<<"Ingrese el tercer valor"<<std::endl;
    int v3;
    std::cin>>v3;
    if(pitagoras(v1,v2,v3)==1)
    {
        std::cout<<"Con los valores dados SI se puede representar un triangulo rectangulo"<<std::endl;
    }
    else
    {
        std::cout<<"Con los valores dados NO se puede representar un triangulo rectangulo"<<std::endl;
    }
    return 0;
}

int pitagoras(int x, int y, int z)
{
    if(x*x + y*y == z*z)
    {
        return 1;
    }
    else if(x*x + z*z == y*y)
    {
        return 1;
    }
    else if(y*y + z*z == x*x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}