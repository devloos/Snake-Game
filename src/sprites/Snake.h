#ifndef SNAKE_H_
#define SNAKE_H_
#include <cstdint>
#include <utility>
#include <vector>

#include "../states/Direction.h"

class Snake {
 public:
  Snake();
  Snake(const uint16_t &StartX, const uint16_t &StartY, const Dir &StartDir);
  ~Snake();

  // Getters & Setters
  Dir GetDirection() const;
  uint16_t GetTailCount() const;
  uint16_t GetHeadPosX() const;
  uint16_t GetHeadPosY() const;
  std::pair<uint16_t, uint16_t> GetTailPosAt(const int &Element) const;

  void SetHeadPos(const uint16_t &PosX, const uint16_t &PosY);
  void PushBackTailPos(const uint16_t &TailPosX, const uint16_t &TailPosY);
  void SetTailPosAt(const int &index, const uint16_t &PosX, const uint16_t &PosY);
  void IncTailCount();
  void SetDirection(const Dir &dir);

 private:
  std::vector<std::pair<uint16_t, uint16_t>> TailPos_;
  std::pair<uint16_t, uint16_t> HeadPos_;
  uint16_t nTail_;
  Dir dir_;
};

#endif  // SNAKE_H_