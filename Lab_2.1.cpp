#include <iostream> 
#include <cmath> 
using namespace std;

// Структура, що представляє точку в 2D просторі з координатами x та y
struct Point {
    double x, y;
};

// Функція для обчислення відстані між двома точками за формулою Евклідової відстані
double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Функція для обчислення периметру та площі чотирикутника за його чотирма вершинами
void calculatePerimeterAndArea(Point p1, Point p2, Point p3, Point p4, double& perimeter, double& area) {
    // Обчислення довжини кожного боку чотирикутника за допомогою функції distance
    double side1 = distance(p1, p2);
    double side2 = distance(p2, p3);
    double side3 = distance(p3, p4);
    double side4 = distance(p4, p1);

    // Обчислення периметру шляхом сумування довжин всіх сторін
    perimeter = side1 + side2 + side3 + side4;

    // Обчислення напівпериметра (s) для використання формули Герона для обчислення площі
    double s = (side1 + side2 + side3 + side4) / 2;

    // Обчислення площі за допомогою формули Герона
    area = sqrt((s - side1) * (s - side2) * (s - side3) * (s - side4));
}

int main() {
    // Оголошення змінних для зберігання координат чотирьох точок, що визначають чотирикутник
    Point p1, p2, p3, p4;

    // Просимо користувача ввести координати кожної точки
    cout << "Введіть координати точки 1: ";
    cin >> p1.x >> p1.y;

    cout << "Введіть координати точки 2: ";
    cin >> p2.x >> p2.y;

    cout << "Введіть координати точки 3: ";
    cin >> p3.x >> p3.y;

    cout << "Введіть координати точки 4: ";
    cin >> p4.x >> p4.y;

    // Оголошення змінних для зберігання обчисленого периметру та площі
    double perimeter, area;

    // Викликаємо функцію для обчислення периметру та площі, передаючи чотири точки за посиланням
    calculatePerimeterAndArea(p1, p2, p3, p4, perimeter, area);

    // Виводимо обчислені значення периметру та площі
    cout << "Периметр: " << perimeter << endl;
    cout << "Площа: " << area << endl;

    return 0; 
}
