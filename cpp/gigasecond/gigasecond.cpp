#include "gigasecond.h"

boost::posix_time::ptime gigasecond::advance(boost::posix_time::ptime ptime) {
	return ptime + boost::posix_time::time_duration(0, 0, 1e9);
}
