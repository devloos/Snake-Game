#include "Fruit.h"

Fruit::Fruit(const uint16_t &StartX, const uint16_t &StartY)
    : PosX_(StartX), PosY_(StartY) {}
Fruit::~Fruit() {}

// Getters
u_int16_t Fruit::GetPosX() const { return PosX_; }
u_int16_t Fruit::GetPosY() const { return PosY_; }
// Setters
void Fruit::SetPosX(const uint16_t &PosX) { this->PosX_ = PosX; }
void Fruit::SetPosY(const uint16_t &PosY) { this->PosY_ = PosY; }
void Fruit::RandomizePos() {
  PosX_ = rand() % Constant::WIDTH;
  PosY_ = rand() % Constant::HEIGHT;
}