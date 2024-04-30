#include <iostream>

template <typename t>
t calc(char op , t a ,t b){
 switch(op){
    case '+':
            return a+b;
        
   
    case '-':

            return a-b;
     
    case '*':

            return a-b;
        
    case '/':
            return a-b;
        
 
}}
int main(){
    std::cout<<calc<float>('+',3.4,5.657)<<std::endl;
    std::cout<<calc<int>('-',4,5)<<std::endl;

}
