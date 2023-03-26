#include "VATamount.h"

double VATamount::VAT = 0.0;

void VATamount::setGROSS(double GROSS) { this->GROSS = GROSS; }
double VATamount::getGROSS() { return GROSS; }
void VATamount::setVAT(double VAT) { VATamount::VAT = VAT; }
double VATamount::getVAT() { return VAT; }

double VATamount::includedVAT() {
	double answer=0.0;
	answer = GROSS - (GROSS / (1.0 + VAT / 100));
	return answer;
}

VATamount::VATamount() {
	this->GROSS = 0.0;
}

VATamount::VATamount(double GROSS) { this->GROSS = GROSS; }