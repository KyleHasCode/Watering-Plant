//Language: C++

#include <iostream>

int days;
bool is_wet;

//Function determines if plant will be watered or not. This will be based on the number of days and if the plant is wet or not.
std::string needs_water(int days, bool is_wet) {

  if (days > 7 && is_wet == false) {
   std::cout << "Water the plant.";
  }

  else if (days < 7 && is_wet == true) {
    std::cout << "Don't water the plant.";
  }

  else if (days == 7 && is_wet == false) {
    std::cout << "Give the plant some water.";
  }

  else {
     std::cout << "Don't water the plant!";


  }
}

//User will input the number of days and put true or false based on the plant's wetness.
int main() {

  std::cout << "Enter number of days since the plant had been last watered.\n";
  std::cin >> days;
  std::cout << "Is the plant wet, true or false?\n";
  std::cin >> is_wet;
  std::cout << "Status of the plant:\n";
  std::cout << needs_water(days, is_wet) << "\n";

}
