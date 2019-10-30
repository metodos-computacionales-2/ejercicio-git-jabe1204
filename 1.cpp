#include <iostream>

double f(int x);

int main(void)
{
    std::cout<<"Ingrese el valor del radio"<<std::endl;
    int N;
    std::cin>>N;
    for(int i = 0; i<N;i++)
    {
      if(i%2 == 0)
      {
                std::cout<<f(i)<<"\t"<<i<<std::endl;
      }
    }
    return 0;
}

double f(int x)
{
 return x*x;  
}
    