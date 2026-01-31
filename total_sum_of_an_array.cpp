#include <iostream>

double gettotal(double prices[],int size);
int main(){
    double prices[] ={49.99,15.05,75,9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = gettotal(prices,size);
    std::cout << "$ " << total;
    return 0;
}
double gettotal(double prices[],int size){
    double total;
    for (int i=0; i<size;i++){
        total += prices[i];
    }
    return total;
}

