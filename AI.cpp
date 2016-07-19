#include "include/AI.h"
#include "include/Character.h"

AI::AI(){
  type = 0;
}

int AI::getType(){
  return type;
}

void AI::update(double dt, Character& c) {
  c.x = c.x;
}
