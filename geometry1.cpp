#include <iostream>
#include <cmath>
using namespace std;
void Trap()
{
    int a, b, c, d, per;
    float sred, s, h, k;
    cout<<"Введите длину верхней стороны"<<endl;
    cin>>a;
    cout<<"Введите длину нижней стороны"<<endl;
    cin>>b;
    cout<<"Введите длину боковых сторон"<<endl;
    cin>>c;
    cin>>d;
    if (a<=0 || b<=0|| c<=0|| d<=0)
    {
        cout<<"Стороны не могут быть меньше нулья"<<endl;
        return ;
    }
    if (a+b+c>d && a+b+d>c && a+c+d>b && c+b+d>a)
    {
        
    }
    else
    {
        cout<<"Такой трапеции быть не может"<<endl;
        return ;
    }
    k=(b-a)/2;
    h=sqrt(c*c-k*k);
    s=(a+b)*h/2;
    per= a+b+c+d;
    sred=(a+b)/2;
    cout<<"Площадь = "<<s<<endl;
    cout<<"Периметр = "<<per<<endl;
    cout<<"Средняя линия = "<<sred<<endl;
}
int main(){
    Trap();
}