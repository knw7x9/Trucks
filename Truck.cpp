#include "Truck.h"
#include <iostream>
#include <string>

Truck::Truck(){
  setYear(2015);
  setMiles(55000);
  setValue(20000);
  setManufacturer("Chevrolet");
  setModel("Colorado");
  setAwd(true);
  setTowing_Capacity(5000);
}

Truck::~Truck(){}

Truck::Truck(int year, double miles, double value, std::string manufacturer, std::string model, bool awd, int towingCapacity){
  setYear(year);
  setMiles(miles);
  setValue(value);
  setManufacturer(manufacturer);
  setModel(model);
  setAwd(awd);
  setTowing_Capacity(towingCapacity);
}
