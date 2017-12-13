// cstring is passed to compute, so I will use string.h's strlen
#include <string.h>
#include <stdexcept>

#include "hamming.h"

int hamming::compute(char const *cstr_a, char const *cstr_b) {
	size_t len_a = strlen(cstr_a);
	size_t len_b = strlen(cstr_b);

	if (len_a != len_b)
		throw std::domain_error("String lengths must be the same");

	int accumulator = 0;

	for (int i = 0; i < len_a; i++) {
		if (cstr_a[i] != cstr_b[i]) accumulator++;
	}

	return accumulator;
}
