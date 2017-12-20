#include <string>
#include <boost/regex.hpp>

#include "bob.h"

using std::string;
using boost::regex;
using boost::regex_match;

string bob::hey(const char* statement) {
	regex question("^.*\\?\\s*$");
	regex yell("^([0-9]|[^\\w])*[A-Z]([0-9]|[A-Z]|[^\\w])*$");
	regex empty("^\\s*$");

	if (regex_match(statement, yell)) return string("Whoa, chill out!");
	if (regex_match(statement, question)) return string("Sure.");
	if (regex_match(statement, empty)) return string("Fine. Be that way!");
	return string("Whatever.");
}
