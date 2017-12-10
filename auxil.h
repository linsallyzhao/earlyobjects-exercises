#ifndef AUXIL_H
#define AUXIL_H

class Aux {
    private:
        double auxBudget;
    public:
        Aux() {auxBudget = 0;}
        void addBudget (double);
        double getDivBudget () const {return auxBudget; }
};

#endif
