/*
 * LibFunctions.h
 */

#ifndef LIBFUNCTIONS_H_
#define LIBFUNCTIONS_H_

// Define SPL types and functions.
#include "SPL/Runtime/Function/SPLFunctions.h"

namespace test2 {

	// SPL authors recommend using the SPL namespace here.
	// This will allow us to use the rich functions offered by the SPL API.
	using namespace SPL;

	// Define all the C++ function prototypes here.
	SPL::float32 calculateTax(SPL::float32 const & price, SPL::rstring const & state);
} // End of namespace test2

#endif /* LIBFUNCTIONS_H_ */
