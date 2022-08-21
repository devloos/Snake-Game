#include "Snake.h"

Snake::Snake(const uint16_t &StartX, const uint16_t &StartY, const Dir &StartDir)
    : dir_(StartDir), HeadPos_(StartX, StartY), nTail_(0) {}
Snake::Snake() {}

Snake::~Snake() {}

Dir Snake::GetDirection() const { return this->dir_; }
uint16_t Snake::GetTailCount() const { return this->nTail_; }
void Snake::SetHeadPos(const uint16_t &PosX, const uint16_t &PosY) {
  HeadPos_.first = PosX;
  HeadPos_.second = PosY;
}
void Snake::PushBackTailPos(const uint16_t &TailPosX, const uint16_t &TailPosY) {
  TailPos_.emplace_back(std::make_pair(TailPosX, TailPosY));
}

uint16_t Snake::GetHeadPosX() const { return HeadPos_.first; }
uint16_t Snake::GetHeadPosY() const { return HeadPos_.second; }
std::pair<uint16_t, uint16_t> Snake::GetTailPosAt(const int &Element) const {
  return TailPos_.at(Element);
}
void Snake::SetTailPosAt(const int &index, const uint16_t &PosX, const uint16_t &PosY) {
  TailPos_.at(index).first = PosX;
  TailPos_.at(index).second = PosY;
}

void Snake::IncTailCount() { ++nTail_; }

void Snake::SetDirection(const Dir &dir) { this->dir_ = dir; }