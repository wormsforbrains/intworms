#ifndef INTWORMS_LIBRARY_H
#define INTWORMS_LIBRARY_H

#include <vector>
namespace intworms {
  class BigInt {
    public:
      explicit BigInt(char *number);
      BigInt operator<<(const BigInt &other) const;
      BigInt operator>>(const BigInt &other) const;

      BigInt operator+(const BigInt &other) const;
      BigInt operator-(const BigInt &other) const;
      BigInt operator*(const BigInt &other) const;
      BigInt operator/(const BigInt &other) const;
    private:
      std::vector<int> digits;
  };
}

#endif //INTWORMS_LIBRARY_H
