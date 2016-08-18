#include <cstdint>
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "../include/ul_sign.h"
#include "../include/util.h"

using namespace std;

int main(int argc, char *argv[]) {
  string line;
  while (getline(cin, line)) {
    line = trim(line);
    if ("" == line) {
      continue;
    }
    uint64_t sign = 0;
    int ret = create_sign_fs64(line.c_str(), strlen(line.c_str()), &sign);
    if (ret != 0) {
      cout << "create sign error" << endl;
    }
    cout << sign << endl;
  }

  return 0;
}
