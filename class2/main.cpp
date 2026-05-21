#include <iostream>

void Greet()
{
    std::string name = "";
    std::cout<<"Give me your name"<<std::endl;
    sdt::cin>>name;

    std::cout<<"hello "<<name<<std::endl;
}

int main()
{
    int counter = 0;
    while(counter < 10 )
    {
        counter++;
        Greet();
    }
    return 0;
}
