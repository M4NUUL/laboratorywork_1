#include <iostream>
#include <cmath>

using namespace std;

int Circle(){
    double pi = M_PI;
    cout << "ВВедите радиус окружности: ";
    int radius;
    cin >> radius;
    if (radius < 0)
    {
        cout << "некоректный радиус";
        return 0;
    }
    cout << "Введите угол сектора (в градусах): ";
    int alpha;
    cin >> alpha;
    if (alpha < 0 || alpha > 360)
    {
        cout << "Угол больше 360 градусов или меньше 0";
        return 0;
    }
    double length_circle = 2 * pi * radius;
    double square_circle = pi * radius * radius;
    double square_sector = square_circle * alpha / 360;
    cout << "Длина окружности: " << length_circle << endl;
    cout << "Площадь окружности: " << square_circle << endl;
    cout << "Площадь сектора: " << square_sector << endl;
    return 0;
}

int main(){
    Circle();
    return 0;
} 

