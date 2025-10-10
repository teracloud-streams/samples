/*
 * LibFunctions.cpp
 */

#include "LibFunctions.h"

namespace test2 {
	float32 calculateTax(float32 const & price, rstring const & state) {
		if (state == "NY") {
			return (price * 7.5/100.0);
		} else if (state == "NC") {
			return (price * 5.25/100.0);
		} else if (state == "NJ") {
			return (price * 6.0/100.0);
		} else if (state == "CA") {
			return (price * 7.25/100.0);
		} else if (state == "FL") {
			return (price * 5.75/100.0);
		} else {
			// Return a flat tax of $1.00
			return (1.00);
		} // End of if (state == "NY")
	} // End of function calculateTax(float32 const & price, rstring const & state)
} // End of namespace test2
