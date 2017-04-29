// function definitions for health related functions
// C Monsters
// 4/20/2017 darius, created health.cpp
// 4/26/2017  tyler, updated functions for multiple classes

#include "tamagotchi.h"

void egg::sickly() { return; }

void baby::sickly() {         // 20% chance
  if((rand() % 20) == 0) {
    sick = true;
  }
}

void teenager::sickly() {     // 10% chance
  if((rand() % 10) == 0) {
    sick = true;
  }
}

void adult::sickly() {        // 15% chance
  if((rand() % 15) == 0) {
    sick = true;
  }
}

void senior::sickly() {       // 20% chance
  if((rand() % 20) == 0) {
    sick = true;
  }
}


// has a 40% chance of getting healthy
void tamagotchi::medicine(){
  int n = rand() % 10;
  if(n <= 8){
    sick = false;
  }
}

void egg::poop() { return; }

void baby::poop() {
  if((rand() % 20) == 0){       // 20% chance of poop
    hygiene--;
  }
  // have a chance of reducing happiness proportional to hygiene
  if(n <= hygiene && hygiene != MAXHYG){
    if(happiness != 0) happiness -= 1;
  }
  if( hygiene == MAXHYG && n <= 5 && happiness != 4) happiness += 1;
}

void teenager::poop() {
  if((rand() % 20) == 0){       // 20% chance of poop
    hygiene--;
  }
  // have a chance of reducing happiness proportional to hygiene
  if(n <= hygiene && hygiene != MAXHYG){
    if(happiness != 0) happiness -= 1;
  }
  if( hygiene == MAXHYG && n <= 5 && happiness != 4) happiness += 1;
}

void adult::poop() {
  if((rand() % 10) == 0){       // 10% chance of poop
    hygiene--;
  }
  // have a chance of reducing happiness proportional to hygiene
  if(n <= hygiene && hygiene != MAXHYG){
    if(happiness != 0) happiness -= 1;
  }
  if( hygiene == MAXHYG && n <= 5 && happiness != 4) happiness += 1;
}

void senior::poop() {
  if((rand() % 20) == 0){       // 20% chance of poop
    hygiene--;
  }
  // have a chance of reducing happiness proportional to hygiene
  if(n <= hygiene && hygiene != MAXHYG){
    if(happiness != 0) happiness -= 1;
  }
  if( hygiene == MAXHYG && n <= 5 && happiness != 4) happiness += 1;
}

// increase hygiene value by cleaning up
void tamagotchi::clean(){
  if(hygiene != MAXHYG ) happiness += 2;
  if(happiness >= 4) happiness = 4;
  hygiene = MAXHYG;
}