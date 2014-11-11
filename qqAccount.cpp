#include <iostream>
#include <string>
#include <map>

using namespace std;


int main()
{
  map<string, string> qq;
  int n;

  cin >> n;
  string ty, acc, pwd;
  while (n--) {
    cin >> ty >> acc >> pwd;
    auto it = qq.find(acc);
    if (ty == "L") {
      if (it == qq.end()) {
        cout << "ERROR: Account Not Exist" << endl;
      } else {
        if (pwd == it->second) {
          cout << "Log in Successful" << endl;
        } else {
          cout << "ERROR: Wrong Password" << endl;
        }
      }
    } else {
      if(it != qq.end()) {
        cout << "ERROR: Account Number Already Exists" << endl;
      } else {
        qq[acc] = pwd;
        cout << "Register Successful" << endl;
      }
    }
  }
  return 0;
}
