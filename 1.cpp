#include <iostream>

double diametro(int x);
double perimetro(int x);
double area(int x);

int main(void)
{
    std::cout<<"Ingrese el valor del radio"<<std::endl;
    int N;
    std::cin>>N;
    std::cout<<"Con un radio de "<<N<<" el diametro es "<<diametro(N)<<"\t"<<std::endl;
    return 0;
}

double diametro(int x)
{
 return 2*x;  
}
    