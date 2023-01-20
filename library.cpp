#include "library.h"

#include <iostream>

intworms::BigInt::BigInt(char *number) {

}

// Overload stream in
intworms::BigInt intworms::BigInt::operator>>(const intworms::BigInt &other) const {
  return intworms::BigInt(nullptr);
}
// Overload stream out
intworms::BigInt intworms::BigInt::operator<<(const intworms::BigInt &other) const {
  return intworms::BigInt(nullptr);
}

// Overload addition
intworms::BigInt intworms::BigInt::operator+(const intworms::BigInt &other) const {
  return intworms::BigInt(nullptr);
}
// Overload subtraction
intworms::BigInt intworms::BigInt::operator-(const intworms::BigInt &other) const {
  return intworms::BigInt(nullptr);
}
// Overload multiplication
intworms::BigInt intworms::BigInt::operator*(const intworms::BigInt &other) const {
  return intworms::BigInt(nullptr);
}
// Overload division
intworms::BigInt intworms::BigInt::operator/(const intworms::BigInt &other) const {
  return intworms::BigInt(nullptr);
}
