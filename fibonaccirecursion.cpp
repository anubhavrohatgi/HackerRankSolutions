#include <iostream>



int fibonacciSeries(int n) {
    if(n == 1 || n ==0){
        return n;
    } else {
        return (fibonacciSeries(n-1) + fibonacciSeries(n-2));
    }
}



int main() {

    int n;

    std::cin>>n;

    std::cout<<"\n";

    int i =0;
    while(i < n) {
        std::cout<<fibonacciSeries(i)<<"  ";
        i++;
    }

    std::cout<<std::endl;

    return 0;
}
