#include <iostream>

int main()
{
    int cuantity = 0;
    double sum = 0;
    std::cout << "Give me how many scores you want to get"<<std::endl;
    std::cin >> cuantity;
    double array[cuantity];
    std::cout<<"Give me the scores"<<std::endl;
    
    for(int i = 0; i < cuantity; i++)
    {
        std::cout<<"score"<<i+1 <<": ";
        std::cin>>array[i];
    }

    for(int i = 0; i <= cuantity; i++)
    {
        sum += array[i];
    }

    double result = sum / cuantity;
    
    std::cout<<"the averagenes of scores is: "<< result <<std::endl;
    return 0;
}
