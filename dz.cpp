#include <iostream>


void esh(int a);
void kere(int a);

int main(){

    esh(1);

    return 0;
}
void esh(int a){
    if(a != 10001){
        std::cout << "esh";
        kere(a + 1);
    }  
}
void kere(int a){
    if(a != 10001){
        std::cout << "kere(" << a << ")" << std::endl;
        esh(a + 1);
    }   
}
