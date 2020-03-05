#include "simp/BranchPred.h"

BranchPred::BranchPred()
  : assignment_calls(0) { }

void BranchPred::setVars(Glucose::vec<int> &vars) {
  for(int i = 0; i < vars.size(); ++i) {
    variables.push(vars[i]);
  }
}

int BranchPred::getAssignment() {
  return 0;
}
