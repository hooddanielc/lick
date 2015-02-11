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

FIXTURE(initialization) {
  AddNumbers a;
  EXPECT_EQ(a.getA(), 1) << "it does not initialize with 0";
}

int main(int argc, char *argv[]) {
  return dj::lick::main(argc, argv);
}
