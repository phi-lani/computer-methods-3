#pragma once
#include <iostream>

class VATamount {
private:
	double GROSS;
	static double VAT;

public:
	void setGROSS(double GROSS);
	double getGROSS();
	static void setVAT(double VAT);
	static double getVAT();
	double includedVAT();

	VATamount();
	VATamount(double GROSS);

};
