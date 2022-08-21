#ifndef FRUIT_H_
#define FRUIT_H_

#include <stdlib.h>

#include <cstdint>

#include "../constants/Constant.h"

class Fruit {
 public:
  Fruit(const uint16_t &StartX, const uint16_t &StartY);
  ~Fruit();

  // Getters
  u_int16_t GetPosX() const;
  u_int16_t GetPosY() const;
  // Setters
  void SetPosX(const uint16_t &PosX);
  void SetPosY(const uint16_t &PosY);
  // Methods
  void RandomizePos();

 private:
  uint16_t PosX_;
  uint16_t PosY_;
};

#endif  // FRUIT_H_