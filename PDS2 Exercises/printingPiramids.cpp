#include <iostream>

int main(){
    int i, j, t = 1, num;
    std::cin >> num;
    for(i=0; i<num; i++){
        for(j=0; j<t; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
        t++;
    }
    
    t = num - 1;
    for(i=0; i<num; i++){
        for(j=0; j<t; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
        t--;
    }
    
    return 0;
}
