#include "Vehicle.h"
#include <iostream>
#include <string>


// Default constructor
Vehicle::Vehicle(){
  setYear(2015);
  setMiles(55000);
  setValue(20000);
  setManufacturer("Chevrolet");
  setModel("Colorado");
}

//Destructor
Vehicle::~Vehicle(){}

// Overload constructor with 5 parameters
Vehicle::Vehicle(int year, double miles, double value, std::string manufacturer, std::string model){
  setYear(year);
  setMiles(miles);
  setValue(value);
  setManufacturer(manufacturer);
  setModel(model);
}
