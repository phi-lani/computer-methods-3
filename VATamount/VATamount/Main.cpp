#include <iostream>

#include "VATamount.h"

int main() {

	VATamount dummyOBJ, purch1(125.5), purch2(100.0), purch3(32.33);

	dummyOBJ.setVAT(15.0); //set the VAT% for all objects of the VATamount class

	printf("A purchase of R125.50 contains R%.2f in VAT charges\n", purch1.includedVAT());

	printf("A purchase of R100.00 contains R%.2f in VAT charges\n", purch2.includedVAT());

	printf("A purchase of R32.33 contains R%.2f in VAT charges\n", purch3.getVAT());

	return 0;

}