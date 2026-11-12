#include <iostream>
int main(){
    int sw=1;
    do{

        std::cout<<"new loop->\ndo..while (0 exit)"<<std::endl;
        std::cin>>sw;

    }while(sw);
    sw=1;
    while(sw){
        std::cout<<"new loop->\nwhile (0 exit)"<<std::endl;
        std::cin>>sw;
    }
    return 0;
}