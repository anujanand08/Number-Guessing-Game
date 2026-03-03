#include <iostream>
#include <ctime>
#include<cstdlib>

int main(){
    int a = 0;
    int count = 0;
    srand( time(NULL) );
    
    int random_no = (rand() % 100) + 1 ;
    do 
    {
    std::cout << "Enter a Number between 1 to 100:- ";
    std::cin >> a;
    count ++;
    
    if (a < random_no)
    {
       std::cout << "Try something bigger!!! \n";
    }
    else if (a > random_no)
    {
        std::cout << "Try something lesser!!! \n";

    } else {
        std::cout << "Congratulations, You got it !!! \n";
        std::cout << "It took you " << count <<"tries! :) :) :)";
    }
} while (a != random_no);
 return 0;
}
