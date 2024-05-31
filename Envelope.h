#ifndef ENVELOPE_H
#define ENVELOPE_H

#include "Shipping.h"

class Envelope : public Shipping {
public:
    Envelope(const std::string &shipperName, const std::string &shipperAddress, const std::string &shipperCity,
             const std::string &shipperState, const std::string &shipperZip,
             const std::string &recipientName, const std::string &recipientAddress, const std::string &recipientCity,
             const std::string &recipientState, const std::string &recipientZip,
             double standardCost, double length, double width, double additionalCharge);

    double calculateCost() const override;

private:
    double length;
    double width;
    double additionalCharge;
};

#endif // ENVELOPE_H
