// Main.cpp
// CS 4499
// Written By: Katherine Wilsdon
// 13 February 2019
// Dr. Kerby
// Description - Creates five trucks in the Truck vector using the truck class
// that inherits from vehicle and prints out all 7 private member variables
//for each truck.

#include "Vehicle.h"
#include "Truck.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  int year;
  double miles;
  double value;
  string manufacturer;
  string model;
  bool awd;
  int towingCapacity;

  // Create a default vehicle
  Vehicle myCar;
  cout << "Default Vehicle Constructor: " << endl << myCar.getYear() << " "<< myCar.getManufacturer()<< " " << myCar.getModel() <<
  " with " << myCar.getMiles() << " miles worth $" << myCar.getValue() << endl;

  // Create an overloaded vehicle
  Vehicle familyCar (2016, 30000, 15000, "Ford", "Escape");
  cout << "Overload Vehicle Constructor: " << endl << familyCar.getYear() << " "<< familyCar.getManufacturer()<< " " << familyCar.getModel() <<
   " with " << familyCar.getMiles() << " miles worth $" << familyCar.getValue() << endl;

  // Create a vehicle through getters and setters
  cout << "What is your vehicle?" << endl;
  cout << "Manufacturer: " << endl;
  cin >> manufacturer;
  cout << "Model: " << endl;
  cin >> model;
  cout << "Year: " << endl;
  cin >> year;
  cout << "Miles: " << endl;
  cin >> miles;
  cout << "Value: " << endl;
  cin >> value;

  myCar.setYear(year);
  myCar.setMiles(miles);
  myCar.setValue(value);
  myCar.setManufacturer(manufacturer);
  myCar.setModel(model);

  cout << "Getters and Setters: " << endl << myCar.getYear() << " "<< myCar.getManufacturer()<< " " << myCar.getModel() <<
  " with " << myCar.getMiles() << " miles worth $" << myCar.getValue() << endl;

  // Create a default truck
  Truck myTruck;
  cout << "Default Truck Constructor: " << endl << myTruck.getYear() << " "<< myTruck.getManufacturer()<< " " <<
  myTruck.getModel() << " with " << myTruck.getMiles() << " miles worth $" << myTruck.getValue() << " with " <<
  myTruck.getAwd() << " and a towing capacity of "<< myTruck.getTowing_Capacity()<< " lbs"<< endl;

  // Create a overloaded truck
  Truck myFriendsTruck(2019, 60, 21500, "GMC", "Canyon", false, 7700);
  cout << "Overload Truck Constructor: " << endl << myFriendsTruck.getYear() << " "<< myFriendsTruck.getManufacturer()<< " " <<
  myFriendsTruck.getModel() << " with " << myFriendsTruck.getMiles() << " miles worth $" << myFriendsTruck.getValue() << " with " <<
  myFriendsTruck.getAwd() << " and a towing capacity of "<< myFriendsTruck.getTowing_Capacity()<< " lbs"<< endl;

  // Create a truck with getters and setters
  cout << "What is your truck?" << endl;
  cout << "Manufacturer: " << endl;
  cin >> manufacturer;
  cout << "Model: " << endl;
  cin >> model;
  cout << "Year: " << endl;
  cin >> year;
  cout << "Miles: " << endl;
  cin >> miles;
  cout << "Value: " << endl;
  cin >> value;
  cout << "Awd True = 1 or False = 0: " << endl;
  cin >> awd;
  cout << "Towing Capacity: " << endl;
  cin >> towingCapacity;

  myTruck.setYear(year);
  myTruck.setMiles(miles);
  myTruck.setValue(value);
  myTruck.setManufacturer(manufacturer);
  myTruck.setModel(model);
  myTruck.setAwd(awd);
  myTruck.setTowing_Capacity(towingCapacity);

  cout << "Getters and Setters: " << endl << myTruck.getYear() << " "<< myTruck.getManufacturer()<< " " <<
  myTruck.getModel() << " with " << myTruck.getMiles() << " miles worth $" << myTruck.getValue() << " with " <<
  myTruck.getAwd() << " and a towing capacity of "<< myTruck.getTowing_Capacity()<< " lbs"<< endl;

  // Create a vector of trucks
  vector<Truck> trucks;
  //https://www.toyota.com/tacoma/features/mpg/7594/7544/7582
  trucks.push_back(Truck(2019, 35, 31815, "Toyota", "Tacoma SR", true, 6400));
  //https://www.ford.com/trucks/ranger/
  trucks.push_back(Truck(2019, 18, 24300, "Ford", "Ranger XL", true, 7500));
  //https://www.ford.com/trucks/f150/?gnav=header-all-vehicles
  trucks.push_back(Truck(2019, 29, 28155, "Ford", "F-150", false, 8000));
  //https://www.chevrolet.com/trucks/colorado-mid-size-truck
  trucks.push_back(Truck(2019, 41, 21300, "Chevrolet", "Colorado", true, 7700));
  //https://www.chevrolet.com/previous-year/silverado-1500-pickup-truck
  trucks.push_back(Truck(2018, 78, 28300, "Chevrolet", "Siverado", true, 7600));

  cout << "Vector of Objects: " << endl;
  for (int i = 0; i < trucks.size(); i++) {
    cout << trucks[i].getYear() << " "<< trucks[i].getManufacturer()<< " " << trucks[i].getModel() << " with " <<
    trucks[i].getMiles() << " miles worth $" << trucks[i].getValue() << " with " << trucks[i].getAwd() <<
    " and a towing capacity of "<< trucks[i].getTowing_Capacity()<< " lbs"<< endl;
  }
  return 0;
}
