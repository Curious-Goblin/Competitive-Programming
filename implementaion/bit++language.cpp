#include<iostream>
#include<string> 
int main(){
    int t;
    std::string op;
    int x=0;
    std::cin>>t;
    while(t!=0)
    {
        std::cin>>op;
        if(op[0]=='+')
        {x++;}
        else if(op[0]=='-')
        {x--;}
        else if(op[0]=='X')
        {
            if(op[1]=='+')
            {x++;}
            else if(op[1]=='-')
            {x--;}
        }
        t--;
    }
    std::cout<<x;
//     return 0;
}