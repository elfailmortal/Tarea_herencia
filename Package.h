#ifndef PACKAGE_H
#define PACKAGE_H

#include "Shipping.h"

class Package : public Shipping {
public:
    Package(const std::string &shipperName, const std::string &shipperAddress, const std::string &shipperCity,
            const std::string &shipperState, const std::string &shipperZip,
            const std::string &recipientName, const std::string &recipientAddress, const std::string &recipientCity,
            const std::string &recipientState, const std::string &recipientZip,
            double standardCost, double weight, double costPerKg);

    double calculateCost() const override;

private:
    double weight;
    double costPerKg;
};

#endif // PACKAGE_H
