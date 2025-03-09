#include <iostream>
#include <cmath>

using namespace std;

void Circle(){
    double pi = M_PI;
    cout << "ВВедите радиус окружности: ";
    int radius;
    cin >> radius;
    cout << "Введите угол сектора (в градусах): ";
    int alpha;
    cin >> alpha;
    double length_circle = 2 * pi * radius;
    double square_circle = pi * radius * radius;
    double square_sector = square_circle * alpha / 360;
    cout << "Длина окружности: " << length_circle << endl;
    cout << "Площадь окружности: " << square_circle << endl;
    cout << "Площадь сектора: " << square_sector << endl;
}

int main(){
    Circle();
    cout << "hello";
    
} 