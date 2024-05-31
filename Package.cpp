#include "Package.h"
#include <stdexcept>

Package::Package(const std::string &shipperName, const std::string &shipperAddress, const std::string &shipperCity,
                 const std::string &shipperState, const std::string &shipperZip,
                 const std::string &recipientName, const std::string &recipientAddress, const std::string &recipientCity,
                 const std::string &recipientState, const std::string &recipientZip,
                 double standardCost, double weight, double costPerKg)
    : Shipping(shipperName, shipperAddress, shipperCity, shipperState, shipperZip, recipientName, recipientAddress, recipientCity, recipientState, recipientZip, standardCost),
      weight(weight), costPerKg(costPerKg) {
    if (weight <= 0 || costPerKg <= 0) {
        throw std::invalid_argument("Weight and cost per kilogram must be positive values.");
    }
}

double Package::calculateCost() const {
    return standardCost + (weight * costPerKg);
}
