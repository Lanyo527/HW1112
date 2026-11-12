/* Created: 2026-11-09 22:48:38 */
#include <iostream>
char wordChang(char in){
    std::cout<< "in: " << in << std::endl;
    if((int)in >= 65 && (int)in <= 90){
        return (char)((int)in + 32);
    }
    else if((int)in >= 97 && (int)in <= 122){
        return (char)((int)in - 32);
    }
    else{
        return in;
    }
}
/*start your code here*/
#include <iostream>
int main(int argc, char* argv[]){
    char input;
    while(true){
        std::cout<<"Enter a character: ";
        std::cin >> input;
        std::cout << "Changed character: " << wordChang(input) << std::endl;
    }
    return 0;
}
