#include<iostream>
using namespace std;

bool Pythagorian(int a,int b,int c);

int main()
{   //Declaring the variable
    int x,y,z;

    //cout<<"\n\nCheck Pythagorian Triplet\n"<<endl;

    cin>>x>>y>>z;

    if(Pythagorian(x,y,z)){
        cout<<"Pythagorian Triplet"<<endl;
    }
    else{
        cout<<"Not Pythagorian Triplet"<<endl;
    }

return 0;

}

bool Pythagorian(int x,int y,int z)
{   
    //Side testing Variables
    int a,b,c;

    a = max(x,max(y,z));

    if(a==x){
        b = y;
        c = z;
    }
    else if (a==y)
    {
        b = x;
        c = z;
    }
    else
    {  // a = z;
        b = x;
        c = y;
    }
    if((a*a) == (b*b) + (c*c))
    {
        return true;
    }
    return false;

}
