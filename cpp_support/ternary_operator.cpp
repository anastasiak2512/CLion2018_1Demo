//Ternary operator is now supported in code analysis more accurately .

#include <iostream>

void ternary_with_cout(int n){
    n%2 ? std::cout<<"Is it?" : std::cout<<"Or is it not?";
}

void foo(){}

void ternary_with_func_pointer(bool cond) {
    using func_type = void(*)();
    func_type func = nullptr;
    (cond ? func : foo)();
}

