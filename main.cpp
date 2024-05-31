//Emiliano Altamirano Baez A00838577
//Rafael Cardenas Meneses A00838348
#include <iostream>
#include "Package.h"
#include "Envelope.h"

int main() {
    try {
        std::string shipperName, shipperAddress, shipperCity, shipperState, shipperZip;
        std::string recipientName, recipientAddress, recipientCity, recipientState, recipientZip;
        double standardCost, weight, costPerKg, length, width, additionalCharge;

        
        std::cout << "Enter shipper name: ";
        std::getline(std::cin, shipperName);
        std::cout << "Enter shipper address: ";
        std::getline(std::cin, shipperAddress);
        std::cout << "Enter shipper city: ";
        std::getline(std::cin, shipperCity);
        std::cout << "Enter shipper state: ";
        std::getline(std::cin, shipperState);
        std::cout << "Enter shipper zip: ";
        std::getline(std::cin, shipperZip);

        std::cout << "Enter recipient name: ";
        std::getline(std::cin, recipientName);
        std::cout << "Enter recipient address: ";
        std::getline(std::cin, recipientAddress);
        std::cout << "Enter recipient city: ";
        std::getline(std::cin, recipientCity);
        std::cout << "Enter recipient state: ";
        std::getline(std::cin, recipientState);
        std::cout << "Enter recipient zip: ";
        std::getline(std::cin, recipientZip);

        std::cout << "Enter standard cost: ";
        std::cin >> standardCost;
        std::cout << "Enter weight: ";
        std::cin >> weight;
        std::cout << "Enter cost per kilogram: ";
        std::cin >> costPerKg;

        Package pkg(shipperName, shipperAddress, shipperCity, shipperState, shipperZip,
                    recipientName, recipientAddress, recipientCity, recipientState, recipientZip,
                    standardCost, weight, costPerKg);

        // Get input for Envelope
        std::cin.ignore(); // clear newline character from input buffer

        std::cout << "Enter envelope length: ";
        std::cin >> length;
        std::cout << "Enter envelope width: ";
        std::cin >> width;
        std::cout << "Enter additional charge: ";
        std::cin >> additionalCharge;

        Envelope env(shipperName, shipperAddress, shipperCity, shipperState, shipperZip,
                     recipientName, recipientAddress, recipientCity, recipientState, recipientZip,
                     standardCost, length, width, additionalCharge);

        std::cout << "Package shipping cost: $" << pkg.calculateCost() << std::endl;
        std::cout << "Envelope shipping cost: $" << env.calculateCost() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
