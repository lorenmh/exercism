#include "gigasecond.h"

using boost::posix_time::ptime;
using boost::posix_time::time_duration;

ptime gigasecond::advance(ptime time) {
	return time + time_duration(0, 0, 1e9);
}
