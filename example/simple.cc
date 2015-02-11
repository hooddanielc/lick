#include <iostream>
#include "lick.h"

class AddNumbers {
private:
  int _a;
  int _b;

public:
  AddNumbers () : _a(0), _b(0) {};
  ~AddNumbers () {};
  
  void setA (int a) {
    _a = a;
  }

  void setB (int b) {
    _b = b;
  }

  int getA () const {
    return _a;
  }

  int getB () const {
    return _b;
  }

  int getSum () const {
    return _a + _b;
  }
};

int main(int, char *[]) {
  AddNumbers addNums;
  addNums.setA(3);
  addNums.setB(6);
  std::cout << addNums.getSum() << std::endl;
  return 0;
}
