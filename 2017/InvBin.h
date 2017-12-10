#ifndef INVBIN_H
#define INVBIN_H

class InvBin {
    private:
        std::string description;
        int qty;

    public:
        InvBin(std::string d = "empty", int q = 0) {
            description = d;
            qty = q;
        }

        void setDescription(std::string d){
            description = d;
        }

        std::string getDescription() const{
            return description;
        }

        void setQty (int q) {
            qty = q;
        }

        int getQty () const {
            return qty;
        }

};

#endif

