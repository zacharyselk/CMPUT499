# pragma once

#include "core/SolverTypes.h"

class BranchPred {
 public:
  BranchPred();

  void setVars(Glucose::vec<int>&);
  int getAssignment();

 private:
  Glucose::vec<int> variables;
  int assignment_calls;
};
