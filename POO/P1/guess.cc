#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int random, user;

    srand(time(NULL));

    random=(rand()%10+1);

    while (random!=user)
    {
        std::cout<<"Escriba un numero del 1 al 10:\n";
        std::cin>>user;

        if(random==user)
        {
            std::cout<<"Has acertado!!!\n";
            system("pause");

        }

        std::cout<<"Intentelo de nuevo\n";
    }   
    system("pause");
}