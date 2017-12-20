#if !defined(ANAGRAM_H)
#define ANAGRAM_H

#include <string>
#include <vector>
#include <boost/unordered_map.hpp>
#include <boost/unordered_set.hpp>

using std::string;
using std::vector;

using boost::unordered_map;
using boost::unordered_set;

namespace anagram {

class anagram {
	private:
		// contains the lowercase input word
		string anagram_word;

		// a mapping of char->count
		unordered_map<char, int> char_count_map;

		// a set of all chars within the word
		unordered_set<char> char_set;
	public:
		// constructor
		anagram(string);
		// returns a vector of strings which are anagrams
		vector<string> matches(vector<string>);
};

}

#endif
