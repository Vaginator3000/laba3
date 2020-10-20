#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string>

#define COUNT_CARS 4

#define fflush while (getchar()!='\n')

class car {
private:
    std::string brand;
    std::string model;
    int year;
    int power;
    int weight;
    std::string color;
    int cost;

public:
    void init() {
        brand = { 0 };
        model = { 0 };
        year = 0;
        power = 0;
        weight = 0;
        color = { 0 };
        cost = 0;
    }

    void init(std::string _brand, std::string _model, int _year, int _power, int _weight, std::string _color, int _cost) {
        brand = _brand;
        model = _model;
        year = _year;
        power = _power;
        weight = _weight;
        color = _color;
        cost = _cost;
    }

    void read() { //Ввод данных
        std::cout << "Enter a brand: ";   std::cin >> brand;
        std::cout << "Enter a model: ";   std::cin >> model;
        std::cout << "Enter a year: ";    std::cin >> year;
        std::cout << "Enter a power: ";   std::cin >> power;
        std::cout << "Enter a weight: ";  std::cin >> weight;
        std::cout << "Enter a color: ";   std::cin >> color;
        std::cout << "Enter a cost: ";    std::cin >> cost;
    }

    void display() {
        std::cout << brand << std::endl;
        std::cout << model << std::endl;
        std::cout << year << std::endl;
        std::cout << power << std::endl;
        std::cout << weight << std::endl;
        std::cout << color << std::endl;
        std::cout << cost << std::endl;
        std::cout <<  std::endl;
    }
};

int main()
{
  //  std::cout << "Hello World!\n";
    car veh[4];
    veh[0].init();
    veh[1].init("mazda", "3", 2006, 110, 1300, "red", 200000);
    veh[2].read();
    for (int i = 0; i < 4; i++) veh[i].display();
}

