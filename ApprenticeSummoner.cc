#include "ApprenticeSummoner.h"

using namespace std;

ApprenticeSummoner::ApprenticeSummoner(bool owner)
  : ActivatedAbilities{"Apprentice Summoner", "Summon a 1/1 air elemental", owner, 1,1,1,1}{}

ApprenticeSummoner::~ApprenticeSummoner() {
  for(int i = 0; i < enchants.size(); i++){
    delete enchants[i];
  }
}
