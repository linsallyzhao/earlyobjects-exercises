#include <iostream>
#include <string>

const std::string people[] = {"Al", "Beth", "Bob", "Carol", "Charley",
                              "Charity", "Cain", "Debbie", "Douglas",
                              "Diane", "Dwayne", "Delores", "Dwight"};
const std::string mother[] = {"Beth", "Carol", "Charity", "Debbie",
                              "Diane", "", "Delores"};
const std::string father[] = {"Bob", "Charley", "Cain", "Douglas",
                              "Dwayne", "", "Dwight"};
const int mom[] = {1, 3, 5, 7, 9, -1, 11, -1, -1, -1, -1, -1, -1};
const int pop[] = {2, 4, 6, 8, 10, -1, 12, -1, -1, -1, -1, -1, -1};

void ancestors(int index);

int main()
{
    int pick;
    std::cout << "Please enter a index:\n";
    std::cin >> pick;
    std::cout << people[pick] << " ";
    ancestors(pick);

    return 0;
}

void ancestors(int index)
{
    if (mom[index] != -1)
        std::cout << people[mom[index]] << " ";
    if (pop[index] != -1)
        std::cout << people[pop[index]] << " ";
    if (mom[index] != -1)
        ancestors(mom[index]);
    if (pop[index] != -1)
        ancestors(pop[index]);
}



