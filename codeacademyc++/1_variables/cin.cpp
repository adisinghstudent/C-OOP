#include <iostream>

int tip(){
    int tip = 0;
    std::cout << "Enter tip amount: ";
    std::cin >> tip;
    std::cout << "You paid " << tip << " dollars.\n";

    return 0;
}


int temp(){
    double tempf;
    double tempc;
    std::cout << "Enter the temperature in Fahrenheit: \n";
    std::cin >> tempf;

    tempc = (tempf - 32)/1.8;
    std::cout << "The temp is " << tempc << " degrees Celsius.\n";  
    
    return 0;
}


int main() {
  
    tip();
    
    temp();

  }

