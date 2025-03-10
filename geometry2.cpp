#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << "Введите длину прямоугольника: ";
    int length_rectangle; 
    cin >> length_rectangle;
    cout << "Введиет ширину прямоугольника: ";
    int width_rectangle;
    cin >> width_rectangle;
    int perimetr = length_rectangle*2+width_rectangle*2;
    int square = length_rectangle*width_rectangle;
    float diag = sqrt(length_rectangle*length_rectangle+width_rectangle*width_rectangle);
    cout << "Диагональ; " << diag << endl;
    cout << "Площадь; " << square << endl;
    cout << "Периметр; " << perimetr << endl;
    
    return 0;
}