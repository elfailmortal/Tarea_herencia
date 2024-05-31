#include "Envelope.h"

Envelope::Envelope(const std::string &shipperName, const std::string &shipperAddress, const std::string &shipperCity,
                   const std::string &shipperState, const std::string &shipperZip,
                   const std::string &recipientName, const std::string &recipientAddress, const std::string &recipientCity,
                   const std::string &recipientState, const std::string &recipientZip,
                   double standardCost, double length, double width, double additionalCharge)
    : Shipping(shipperName, shipperAddress, shipperCity, shipperState, shipperZip, recipientName, recipientAddress, recipientCity, recipientState, recipientZip, standardCost),
      length(length), width(width), additionalCharge(additionalCharge) {}

double Envelope::calculateCost() const {
    double cost = standardCost;
    if ((length*width)>750) {
        cost += additionalCharge;
    }
    return cost;
}
