#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string>

#define N 4

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
};

int main()
{
    std::cout << "Hello World!\n";
}

