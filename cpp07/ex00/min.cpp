#include "header.hpp"

template<typename MIN>
MIN const & min(MIN const & a, MIN const & b)
{
	return (a <= b ? a : b);
}