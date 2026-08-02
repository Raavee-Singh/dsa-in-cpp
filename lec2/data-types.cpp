#include<iostream>
int main(){
    int a=2;
    float b=2.3;
    double c=2.4;
    std::string name="raavee";
    bool d=true;
    char e ='w';
    std::cout<<"Printing the datatypes and their sizes: "<<std::endl;
    std::cout<<"1. int: "<<a<<" Size: "<<sizeof(a)<<std::endl;
    std::cout<<"2. float: "<<b<<" Size: "<<sizeof(b)<<std::endl;
    std::cout<<"3. double: "<<c<<" Size: "<<sizeof(c)<<std::endl;
    std::cout<<"4. string: "<<name<<" Size: "<<sizeof(name)<<std::endl;
    std::cout<<"5. boolean: "<<d<<" Size: "<<sizeof(d)<<std::endl;
    std::cout<<"6. char: "<<e<<" Size: "<<sizeof(e)<<std::endl;
    return 0;
}