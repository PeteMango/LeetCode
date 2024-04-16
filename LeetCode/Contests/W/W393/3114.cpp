#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
  string findLatestTime(string s) {
    if (s[0] == '?') {
      if (s[1] != '0' && s[1] != '1' && s[1] != '?')
        s[0] = '0';
      else
        s[0] = '1';
    }

    if (s[1] == '?') {
      if (s[0] == '1')
        s[1] = '1';
      else
        s[1] = '9';
    }

    if (s[3] == '?')
      s[3] = '5';
    if (s[4] == '?')
      s[4] = '9';

    return s;
  }
};

int main() {
  Solution s;

  string tc1 = "1?:?4";
  string tc2 = "0?:5?";

  cout << s.findLatestTime(tc1) << "\n";
  cout << s.findLatestTime(tc2) << "\n";

  return 0;
}
