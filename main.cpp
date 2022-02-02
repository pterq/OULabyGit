#include <iostream>

int Policz(int a, int b){
<<<<<<< HEAD
    return a*b;
========
    return (a+b)*(a-b);
>>>>>>>> 03
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std:: cout << "W pierwszym branchu 2*3=" << Policz(2,3) << std::endl;
    return 0;
}
