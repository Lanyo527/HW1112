#include <iostream>

int hanio(int n,int a,int b,int c){
    if(n==1){
        std::cout<<a<<"->"<<c<<std::endl;
    }else{
        hanio(n-1,a,c,b);
        std::cout<<a<<"->"<<c<<std::endl;
        hanio(n-1,b,a,c);
    }
    return 0;
}
int main(){
    int stack[3][64];
    for(int i=0;i<64;i++){
        stack[0][i]=i+1;
    }
    hanio(64,0,1,2);
    return 0;

}