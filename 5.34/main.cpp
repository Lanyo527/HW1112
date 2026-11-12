#include <iostream>

int exp(int base,int e){
    if(e<=1){
        
        std::cout<<base<<std::endl;
        return 1;
    }
    else{
        
        std::cout<<base<<"x";
        return base * exp(base,e-1);   
    }
}

int main(){
    int b,e;
    std::cout<<"enter in \"base exp\": ";
    std::cin>>b>>e;
    exp(b,e);
}