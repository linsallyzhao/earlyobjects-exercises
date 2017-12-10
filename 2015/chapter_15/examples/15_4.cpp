#include <iostream>

class Shape
{
    protected:
        int posX, posY;
    public:
        virtual void draw() const = 0;
        void setPosition(int pX, int pY)
        {
            posX = pX;
            posY = pY;
        }
};

class Rectangle : public Shape
{
    public:
        virtual void draw() const
        {
            std::cout << "Drawing rectangle at " << posX << " "
                      << posY << std::endl;
        }
};

class Hexagon : public Shape
{
    public:
        virtual void draw() const
        {
            std::cout << "Drawing hexagon at " << posX << " "
                      << posY << std::endl;
        }
};

int main()
{
    const int NUM_SHAPES = 3;
    Shape * shapeArray[] = { new Hexagon(), new Rectangle(), new Hexagon()};
    int posX = 5, posY = 15;
    for (int k = 0; k < NUM_SHAPES; k++)
    {
        shapeArray[k]->setPosition(posX, posY);
        posX += 10;
        posY += 10;
    }
    for (int j = 0; j < NUM_SHAPES; j++)
        shapeArray[j]->draw();

    return 0;
}
