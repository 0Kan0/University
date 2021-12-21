#include <iostream>

template <class tipo>

void imprimeVector(tipo v[], int t)
{
    for(int i=0; i<t; i++) std::cout<<v[i]<<" ";
    std::cout<<std::endl;
}

int main()
{
    int i[6]={4, 5, 6, 3, 4, 2};
    float f[4]={3.5, 6.33, 7.77, 1.00};
    char c[8]="Alberto";

    imprimeVector(i,5);
    imprimeVector(f,4);
    imprimeVector(c,7);

    system("pause");
}