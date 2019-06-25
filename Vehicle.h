#pragma once
#include <string>

class Vehicle {
private:
  int _Year;
  double _Miles;
  double _Value;
  std::string _Manufacturer;
  std::string _Model;
public:
  // Get and set the year of the Vehicle
  int getYear(){return _Year;};
  void setYear(int year) { _Year = year;};

  // Get and set the miles of the Vehicle
  double getMiles(){return _Miles;};
  void setMiles(double miles) {_Miles = miles;};

  // Get and set the value of the Vehicle
  double getValue(){return _Value;};
  void setValue(double value) {_Value = value;};

  // Get and set the manufacturer of the Vehicle
  std::string getManufacturer(){return _Manufacturer;};
  void setManufacturer(std::string manufacturer) {_Manufacturer = manufacturer; };

  // Get and set the model of the Vehicle
  std::string getModel() {return _Model;};
  void setModel(std::string model){ _Model = model;};

  // Default Constructor
  Vehicle();

  ~Vehicle();
  // Overload Constructor with 5 parameters
  Vehicle(int year, double miles, double value, std::string manufacturer, std::string model);
};
