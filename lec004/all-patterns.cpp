#include<iostream>
void starGrid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
}
void rowGrid(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            std::cout<<i<<" ";
        }
        std::cout<<std::endl;
    }
}
void colGrid(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
}
void revColGrid(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>0;j--){
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
}
void countGrid(int n){
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cout<<count<<" ";
            count++;
        }
        std::cout<<std::endl;
    }
}
void rightTriStar(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
}
void rightTriRow(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            std::cout<<i<<" ";
        }
        std::cout<<std::endl;
    }
}
void rightTriCount(int n){
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            std::cout<<count<<" ";
            count++;
        }
        std::cout<<std::endl;
    }
}
void rightTriRowCount(int n){
    for(int i=1;i<=n;i++){
        int count=i;
        for(int j=1;j<=i;j++){
            std::cout<<count<<" "; //instead of count-> i+j-1
            count++;
        }
        std::cout<<std::endl;
    }
}
void rightTriRevRow(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            std::cout<<i-j+1<<" ";
        }
        std::cout<<std::endl;
    }
}
void charRowGrid(int n){
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char c='A'+i-1;
            std::cout<<ch<<" "; //if not ch, then 'A' + i - 1
        }
        ch++;
        std::cout<<std::endl;
    }
}
void charColGrid(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch='A'+j-1;
            std::cout<<ch<<" ";
        }
        std::cout<<std::endl;
    }
}
void charCount(int n){
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           std::cout<<ch<<" ";
           ch++;
        }
        std::cout<<std::endl;
    }
}
void charSplGrid(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch='A'+i+j-2;
            std::cout<<ch<<" ";
        }
        std::cout<<std::endl;
    }
}
void rightTriRowChar(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch='A'+i-1;
            std::cout<<ch<<" ";
        }
        std::cout<<std::endl;
    }

}
void rightTriCharCount(int n){
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            std::cout<<ch<<" ";
            ch++;
        }
        std::cout<<std::endl;
    }
}
void rightTriCharSpl(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch='A'+i+j-2;
            std::cout<<ch<<" ";
        }
        std::cout<<std::endl;
    }
}
void rightTriRevChar(int n){
    for(int i=1;i<=n;i++){
        char ch='A'+n-i;
        for(int j=1;j<=i;j++){
            std::cout<<ch<<" ";
            ch++;
        }
        std::cout<<std::endl;
    }
}
void difRightStarTri(int n){
    for(int i=1;i<=n;i++){
        //spaces first
        for(int j=1;j<=n-i;j++){
            std::cout<<" ";
        }
        for(int j=1;j<=i;j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}
int main(){
    int n;
    std::cout<<"Enter the value of n: ";
    std::cin>>n;
    starGrid(n);
    std::cout<<std::endl;
    rowGrid(n);
    std::cout<<std::endl;
    colGrid(n);
    std::cout<<std::endl;
    revColGrid(n);
    std::cout<<std::endl;
    countGrid(n);
    std::cout<<std::endl;
    rightTriStar(n);
    std::cout<<std::endl;
    rightTriRow(n);
    std::cout<<std::endl;
    rightTriCount(n);
    std::cout<<std::endl;
    rightTriRowCount(n);
    std::cout<<std::endl;
    rightTriRevRow(n);
    std::cout<<std::endl;
    charRowGrid(n);
    std::cout<<std::endl;
    charColGrid(n);
    std::cout<<std::endl;
    charCount(n);
    std::cout<<std::endl;
    charSplGrid(n);
    std::cout<<std::endl;
    rightTriRowChar(n);
    std::cout<<std::endl;
    rightTriCharCount(n);
    std::cout<<std::endl;
    rightTriCharSpl(n);
    std::cout<<std::endl;
    rightTriRevChar(n);
    std::cout<<std::endl;
    difRightStarTri(n);
    std::cout<<std::endl;
    return 0;
}