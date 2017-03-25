#include <iostream>

void lightsec_to_gigameters() {
  int num;
  cout << "How many light seconds";
  cin >> num;
  cout << "There are " << num * .299792458 << " gigameters in " << num
       << " lightseconds.\n";
}
