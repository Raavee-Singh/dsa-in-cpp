#include<iostream>
int main(){
    int amount;
    std::cout<<"Enter the amount: ";
    std::cin>>amount;
    int fiveHundred, oneHundred, fifty, ten, one=0;
    fiveHundred=amount/500;
    int leftAmount=amount-(fiveHundred*500);
    oneHundred=leftAmount/100;
    int more=leftAmount-(100*oneHundred);
    fifty=more/50;
    int left=more-(50*fifty);
    ten=left/10;
    int leftten=left-(10*ten);
    one=leftten;
    std::cout<<"You entered: "<<amount<<std::endl<<"You need: 500: "<<fiveHundred<<", 100: "<<oneHundred<<", 50: "<<fifty<<", 10: "<<ten<<", one: "<<one<<std::endl;
    return 0;
    
}