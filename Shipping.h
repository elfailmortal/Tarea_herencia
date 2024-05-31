#ifndef SHIPPING_H
#define SHIPPING_H

#include <string>

class Shipping {
public:
    Shipping(const std::string &shipperName, const std::string &shipperAddress, const std::string &shipperCity,
             const std::string &shipperState, const std::string &shipperZip,
             const std::string &recipientName, const std::string &recipientAddress, const std::string &recipientCity,
             const std::string &recipientState, const std::string &recipientZip,
             double standardCost);

    virtual double calculateCost() const;

    virtual ~Shipping() = default;

protected:
    std::string shipperName;
    std::string shipperAddress;
    std::string shipperCity;
    std::string shipperState;
    std::string shipperZip;
    std::string recipientName;
    std::string recipientAddress;
    std::string recipientCity;
    std::string recipientState;
    std::string recipientZip;
    double standardCost;
};

#endif // SHIPPING_H
