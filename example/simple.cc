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

FIXTURE(is_equal) {
  AddNumbers a;
  EXPECT_EQ(a.getA(), 0) << "it does not initialize with 0";
}

FIXTURE(not_equal) {
  AddNumbers a;
  EXPECT_NE(a.getA(), 1) << "0 != 1";
}

FIXTURE(falsy_values) {
  AddNumbers a;
  EXPECT_FALSE(a.getSum() < 0) << "0 + 0 is not negative";
}

FIXTURE(true_values) {
  AddNumbers a;
  EXPECT_TRUE(a.getSum() == 0) << "0 + 0 == 0";
}

FIXTURE(greater_than) {
  AddNumbers a;
  EXPECT_GT(a.getA(), -1) << "0 > -1";
}

FIXTURE(lesser_than) {
  AddNumbers a;
  EXPECT_LT(a.getA(), 1) << "0 < 1";
}

FIXTURE(greater_than_or_equal) {
  AddNumbers a;
  EXPECT_GE(a.getA(), 0) << "0 >= 0";
  EXPECT_GE(a.getA(), -1) << "0 >= -1";
}

FIXTURE(lesser_than_or_equal) {
  AddNumbers a;
  EXPECT_LE(a.getA(), 0) << "0 <= 0";
  EXPECT_LE(a.getA(), 1) << "0 <= -1";
}

int main(int argc, char *argv[]) {
  return dj::lick::main(argc, argv);
}
