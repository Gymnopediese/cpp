#include "header.hpp"

template<typename MAX>
MAX const & max(MAX const & a, MAX const & b)
{
	return (a >= b ? a : b);
}
