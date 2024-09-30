#include "Laptop.h"
#include <iostream>

Laptop::Laptop(const char* laptopName, const char* laptopColor, double laptopPrice,
               const CPU& c, const SSD& s, const VideoCard& v, const RAM& r)
    : cpu(c), ssd(s), videoCard(v), ram(r), price(laptopPrice) 
{
    name = new char[strlen(laptopName) + 1];
    strcpy(name, laptopName);

    color = new char[strlen(laptopColor) + 1];
    strcpy(color, laptopColor);
}

Laptop::~Laptop() 
{
    delete[] name;
    delete[] color;
}

void Laptop::display() const 
{
    cout << "Laptop: " << name << ", Color: " << color << ", Price: $" << price << endl;
    cpu.display();
    ssd.display();
    videoCard.display();
    ram.display();
}

