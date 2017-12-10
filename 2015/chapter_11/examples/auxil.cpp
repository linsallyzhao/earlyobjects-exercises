#include "auxil.h"
#include "budget.h"

void Aux::addBudget(double b)
{
    auxBudget += b;
    Budget::corpBudget += auxBudget;
}



