#include <cmath>
#include <iostream>

class Rational
{
    private:
        int nume, deno;
        void reduce(int up, int down);

    public:
        Rational(int a, int b)
        {
            reduce(a, b);
        }
        int getNume() const {return nume;}
        int getDeno() const {return deno;}
        friend std::ostream & operator<< ( std::ostream & out, Rational a);
        friend Rational operator+ (Rational a, Rational b);
        friend Rational operator- (Rational a, Rational b);
        friend Rational operator* (Rational a, Rational b);
        friend Rational operator/ (Rational a, Rational b);
};
void Rational::reduce(int up, int down)
{
    bool negative = false;
    if (up < 0 || down < 0)
    {
        negative = true;
        up = std::abs(up);
        down = std::abs(down);
    }
    int index = 2;
    if (up > down)
    {
        while (index <= down)
        {
            if ((up % index == 0) && (down % index == 0))
            {
                up /= index;
                down /= index;
                index = 1;
            }
            index++;
        }
    }
    else
    {
        while (index <= up)
        {
            if ((up % index == 0) && (down % index == 0))
            {
                up /= index;
                down /= index;
                index =  1;
            }
            index++;
        }
    }
    if (negative)
        nume = -1 * up;
    else
        nume = up;
    deno = down;
}

std::ostream & operator<< ( std::ostream & out, Rational a)
{
    out << a.getNume() << "/" << a.getDeno() << std::endl;
    return out;
}


Rational operator+ (Rational a, Rational b)
{
    int newDeno = a.getDeno() * b.getDeno();
    int newNume = a.getNume() * b.getDeno() + a.getDeno() * b.getNume();
    Rational result(newNume, newDeno);
    return result;
}
Rational operator- (Rational a, Rational b)
{
    int newDeno = a.getDeno() * b.getDeno();
    int newNume = a.getNume() * b.getDeno() - a.getDeno() * b.getNume();
    Rational result(newNume, newDeno);
    return result;
}
Rational operator* (Rational a, Rational b)
{
    int newDeno = a.getDeno() * b.getDeno();
    int newNume = a.getNume() * b.getNume();
    Rational result(newNume, newDeno);
    return result;
}
Rational operator/ (Rational a, Rational b)
{
    int newDeno = a.getDeno() * b.getNume();
    int newNume = a.getNume() * b.getDeno();
    Rational result(newNume, newDeno);
    return result;
}

int main()
{
    int a, b, c, d;
    std::cout << "Please enter four integers for testing overloading operators\n";
    std::cin >> a >> b >> c >> d;
    Rational test1(a, b), test2(c, d);
    Rational result(1, 1);
    result = test1 + test2;
    std::cout << result << std::endl;
    result = test1 - test2;
    std::cout << result << std::endl;
    result = test1 * test2;
    std::cout << result << std::endl;
    result = test1 / test2;
    std::cout << result << std::endl;

    return 0;
}

