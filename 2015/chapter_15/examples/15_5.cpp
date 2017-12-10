#include <iostream>

class Dog
{
    protected:
        double weight;
    public:
        Dog(double w) {weight = w;}
        virtual void bark() const
        {
            std::cout << "I am a dog weighing "
                      << weight << " pounds. " << std::endl;
        }
};

class SheepDog : public Dog
{
    int numberSheep;
    public:
    SheepDog(double w, int nSheep) : Dog(w)
    {
        numberSheep = nSheep;
    }

    virtual void bark() const
    {
        std::cout << "I am a sheepdog weighing " << weight
                  << " pounds \n and guarding " << numberSheep
                  << " sheep." << std::endl;
    }
};

int main()
{
    const int NUM_DOGS = 3;
    Dog *kennel[] = { new Dog(40.5),
                      new SheepDog(45.3, 50),
                      new Dog(24.7)};
    for (int k = 0; k < NUM_DOGS; k++)
    {
        std::cout << k + 1 << ": ";
        kennel[k]->bark();
    }

    return 0;
}



