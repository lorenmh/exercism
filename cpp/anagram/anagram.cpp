#include <string>
#include <vector>

#include <boost/algorithm/string.hpp>
#include <boost/unordered_map.hpp>
#include <boost/unordered_set.hpp>

#include "anagram.h"

using std::string;
using std::vector;

using boost::algorithm::to_lower_copy;
using boost::unordered_map;
using boost::unordered_set;

anagram::anagram::anagram(string word) {
	// lowercase the word
	string word_lc = to_lower_copy(word);

	// store the word
	anagram_word = word_lc;

	// initialize char set
	char_set = unordered_set<char>(word_lc.begin(), word_lc.end());

	// initialize char->count map
	for (char &c : word_lc) char_count_map[c] += 1;
}

vector<string> anagram::anagram::matches(vector<string> words) {
	vector<string> matching;

	for (string word : words) {
		// lowercase the word
		string word_lc = to_lower_copy(word);

		// shouldnt match itself, continue
		if (word_lc == anagram_word) continue;

		// create a set of characters
		unordered_set<char> word_char_set(word_lc.begin(), word_lc.end());

		// create a mapping of char->count
		unordered_map<char, int> word_char_count_map;
		for (char &c : word_lc) word_char_count_map[c] += 1;

		// if mapping and char set is equal, then this is an anagram
		if (word_char_set == char_set && word_char_count_map == char_count_map)
			matching.push_back(word);
	}

	return matching;
}
