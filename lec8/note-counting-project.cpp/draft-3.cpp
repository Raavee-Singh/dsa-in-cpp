#include<iostream>
void noteCount(int amount){
    int notes500, notes100, notes50, notes10, notes1=0;
    switch(1){
        case 1:
        notes500=amount/500;
        amount=amount%500;
        case 2: 
        notes100=amount/100;
        amount=amount%100;
        case 3:
        notes50=amount/50;
        amount=amount%50;
        case 4:
        notes10=amount/10;
        amount=amount%10;
        case 5:
        notes1=amount;
        break;
    }
    std::cout<<"You need: 500: "<<notes500<<", 100: "<<notes100<<", 50: "<<notes50<<", 10: "<<notes10<<", one: "<<notes1<<std::endl;
}
int main(){
    int amount;
    std::cout<<"Enter your amount: ";
    std::cin>>amount;
    noteCount(amount);
    return 0;
}