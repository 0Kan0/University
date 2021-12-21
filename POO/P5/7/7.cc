#include <iostream>

template <class C> 
    
class MiClase{
    private:
        C x_, y_;

    public:
        MiClase (C a, C b){ x_=a; y_=b;};
        C division(){return x_/y_;};
};

int main()
{
    MiClase <int> iobj(6,2);
    MiClase <double> dobj(3.5, 9.9);

    std::cout << "division entera = " << iobj.division() <<std::endl;
    std::cout << "division real = " << dobj.division() <<std::endl;

    system("pause");
}