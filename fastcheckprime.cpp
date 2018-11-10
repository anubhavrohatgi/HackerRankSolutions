#include <iostream>
#include <math.h>



int main() {

    int n;

    std::cin>>n;

    int isDivCount = 1;

    int len = floor(sqrt(n));
    std::cout<<"\nRoot = "<<len<<std::endl;


    for(int i = 2; i <= len; i++) {
        if(n%i == 0){
            std::cout<<"Divisible"<<std::endl;
            isDivCount++;
        }
//        std::cout<<"Iterator : "<<i<<std::endl;
    }

    if(isDivCount < 2)
        std::cout<<"Number "<<n<<" is Prime.\n";
    else
        std::cout<<"Number "<<n<<" is Not Prime.\n";


    return 0;
}
