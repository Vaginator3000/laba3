#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string>

#define COUNT_CARS 4

#define fflush while (getchar()!='\n')

using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    int power;
    int weight;
    string color;
    int cost;

public:
    void init() {
        brand = " ";
        model = " ";
        year = 0;
        power = 0;
        weight = 0;
        color = " ";
        cost = 0;
    }

    void init(string _brand, string _model, int _year, int _power, int _weight, string _color, int _cost) {
        brand = " ";
        model = " ";
        brand = _brand;
        model = _model;
        year = _year;
        power = _power;
        weight = _weight;
        color = " ";
        color = _color;
        cost = _cost;
    }

    void read() { //Ввод данных
        cout << "Enter a brand: ";   cin >> brand;
        cout << "Enter a model: ";   cin >> model;
        cout << "Enter a year: ";    cin >> year;
        cout << "Enter a power: ";   cin >> power;
        cout << "Enter a weight: ";  cin >> weight;
        cout << "Enter a color: ";   cin >> color;
        cout << "Enter a cost: ";    cin >> cost;
    }

    void display() {
        cout << brand << endl;
        cout << model << endl;
        cout << year << endl;
        cout << power << endl;
        cout << weight << endl;
        cout << color << endl;
        cout << cost << endl;
        cout <<  endl;
    }

    void changeColor() {
        cout << "Enter a new color: ";   cin >> color;
    }
};

int main()
{
    // Статически
    Car veh1;
    veh1.init("mazda", "3", 2006, 110, 1300, "red", 200000);
    veh1.display();
    veh1.changeColor();
    veh1.display();
    system("pause");
    system("cls");


    // Объявление через new
    Car* veh2 = new Car[COUNT_CARS];
    veh2[0].init();
    veh2[1].init("mazda", "3", 2006, 110, 1300, "red", 200000);
    veh2[2].init();
    veh2[3].init();
    veh2[3].read();
    for (int i = 0; i < 4; i++) veh2[i].display();
    system("pause");
    system("cls");
    delete[] veh2;

    //Динамически
    Car* veh;
    veh = (Car*)calloc(COUNT_CARS, sizeof(Car));
  //  veh = (Car*)malloc(COUNT_CARS * sizeof(Car));
    (veh)->init();
    (veh + 1)->init("mazda", "3", 2006, 110, 1300, "red", 200000);
    (veh + 2)->init();
    (veh + 2)->read();
    for (int i = 0; i < COUNT_CARS; i++) (veh + i)->display();

    veh = (Car*)realloc(veh, COUNT_CARS * 2);
    veh = (Car*)calloc(COUNT_CARS * 2, sizeof(Car));
    (veh + 5)->init("mazda", "4", 2006, 110, 1300, "red", 200000);
    (veh + 6)->init();
    (veh + 6)->read();
    for (int i = 0; i < COUNT_CARS * 2; i++)  (veh + i)->display();
    system("pause");
    system("cls");

    free(veh);
    return 0;
}

