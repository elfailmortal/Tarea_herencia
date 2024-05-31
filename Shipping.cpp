#include "Shipping.h"

Shipping::Shipping(const std::string &shipperName, const std::string &shipperAddress, const std::string &shipperCity,
                   const std::string &shipperState, const std::string &shipperZip,
                   const std::string &recipientName, const std::string &recipientAddress, const std::string &recipientCity,
                   const std::string &recipientState, const std::string &recipientZip,
                   double standardCost)
    : shipperName(shipperName), shipperAddress(shipperAddress), shipperCity(shipperCity), shipperState(shipperState), shipperZip(shipperZip),
      recipientName(recipientName), recipientAddress(recipientAddress), recipientCity(recipientCity), recipientState(recipientState), recipientZip(recipientZip),
      standardCost(standardCost) {}

double Shipping::calculateCost() const {
    return standardCost;
}
