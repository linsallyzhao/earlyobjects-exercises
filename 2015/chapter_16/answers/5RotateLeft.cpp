#include <iostream>
#include <vector>

template <class T>
void display(std::vector<T> v)
{
    for (int index = 0; index < v.size(); index++)
        std::cout << v[index] << " ";
    std::cout << std::endl;
}

template <class T>
void rotateLeft(std::vector<T> &v)
{
    for (int index = 0; index < v.size(); index++)
    {
        display(v);
        T temp = v[0];
        v.erase(v.begin());
        v.push_back(temp);
    }
}

int main()
{
    std::vector<int> iVect;
    std::vector<char> cVect;
    for (int index = 0; index < 4; index++)
        iVect.push_back(index * 2 + 1);
    char sample = 'a';
    for (int index = 0; index < 5; index++)
        cVect.push_back(index + sample);

    rotateLeft(iVect);
    rotateLeft(cVect);

    return 0;
}



