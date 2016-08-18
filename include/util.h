#ifndef UTIL_H
#define UTIL_H

#include <string>
#include <vector>

using namespace std;

string trim(const string& str, const string& whitespace = " \t") {
  const auto strBegin = str.find_first_not_of(whitespace);
  if (strBegin == string::npos) return "";
  const auto strEnd = str.find_last_not_of(whitespace);
  const auto strRange = strEnd - strBegin + 1;
  return str.substr(strBegin, strRange);
}

void split(const string& s, char delim, vector<string>& elems) {
  stringstream ss(s);
  string item;
  while (getline(ss, item, delim)) {
    elems.push_back(item);
  }
}

#endif  // UTIL_H
