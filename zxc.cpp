#include <iostream>
#include <vector>
#include <string>


struct User
{
    std::string name;
    int age;
};

std::vector<User> users;

void create()
{
    User x;
    std::cin >> x.name;
    std::cin >> x.age;
    users.push_back(x);
}

void del()
{
    std::string namedel;
    std::cin >> namedel;
    for (int i = 0; i < users.size(); i++)
    {
        if (namedel == users[i].name)
        {
            users.erase(users.begin() + i);
        }
    }
}

void update()
{
    std::string nameupdate;
    std::cin >> nameupdate;
    for (int i = 0; i < users.size(); i++)
    {
        if (nameupdate == users[i].name)
        {
            std::cin >> users[i].age;
           
        }
    }
}

void print()
{
    for (int i = 0; i < users.size(); i++)
    {
        std::cout << "username: " <<  users[i].name << " age: " << users[i].age << "\n";
    }
}



int main()
{


    void (*makesmth)();
    int i = 0;
    std::cout << "i = 1 - create; i = 2 - print; i = 3 - update; i = 4 - delete; i = 5 - exit";
    std::cin >> i;
    
    while (i != 5)
    {
        if (i == 1)
        {
            makesmth = create;
            makesmth();
        }
        else if (i == 2)
        {
            makesmth = print;
            makesmth();
        }
        else if (i == 3)
        {
            makesmth = update;
            makesmth();
        }
        else if (i == 4)
        {
            makesmth = del;
            makesmth();
        }

        std::cin >> i;


    }
   
    

}

