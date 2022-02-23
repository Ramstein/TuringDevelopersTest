#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
#include<set>
#include<list>

using namespace std;


class Base{
    public:
    virtual void show() = 0;
};

int &fun(){
    static int x = 10;
    return x;
}

int f(int &x, int c){
    c=c-1;
    if(c==0) return 1;
    x=x+1;
    return f(x,c )*x;
}

class F{
    int val;
    public:
    F(int v): val(v){}
    bool operator() (int v){
        if(v==val) return true;
        return false;
    }
};

class A{
    int a;
    public:
    A(int a): a(a){}
    int getA() const{
        return a;
    }
    void setA(int a){
        this->a =a;
    }
    operator int () const{
        return a;
    }
};


// template f(A, a);
// void f(A a){
//     cout<<1;
// }
// void f(int a){
//     cout<<2;
// }


int main()
{
    // Base b;
    // Base *bp;
    
    
    // fun() = 30;
    // std::cout << fun() << std::endl;
    
    
    // int a =5;
    // cout<<f(a, a);
    
    
    // cout<<is_array<int>::value;
    // cout<<is_array<char[10]>::value;
    // cout<<is_array<string>::value;
    
    
    // int t[] = {10, 5,9,6,2,4,7,8,3,1};
    // vector<int> v1(t, t+10);
    // if(find(v1.begin(), v1.end(), 6)==find(v1.begin(), v1.end(), F(6))){
    //     cout<<"Found";
    // }else{
    //     cout<<"not Found";
    // }
    
    
    // int t[] = {1,2,3,2,3,5,1,2,7,3,2,1,10,4,4,5};
    // vector<int> v (t, t+15);
    // int n = count(v.begin(), v.end(), 5);
    // cout<< n;
    
        
    // int t[] = {1,2,3,2,3,5,1,2,7,3,2,1,10,4,4,5};
    // set<A> s (t, t+15);
    // cout<<equal(s.begin(), s.end(), t)<<endl;
    
    
    // char greeting[] = {'w', 'e'};
    // cout <<greeting;
    
    // int a =1;
    // f<float>(a);
    
    
    // cout<<rank<int[10]>::value;
    // cout<<rank<char[10][10]>::value;
    // cout<<rank<string[10][10][10]>::value;
    
    
    // int array[] = {10,20,30};
    // cout<< -2*[array];
    
    
    // cout<<true<<" "<<boolalpha<<false;


    // int t[] = {1,1,2,2,3,3,4,4,5,5};
    
    // list<int> v(t, t+10);
    // set<int> s1(v.begin(), v.end());
    
    // if(s1.count(3)==2){
    //     s1.erase(3);
    // }
    // for(set<int>::iterator i=s1.begin(); i!=s1.end();i++){
    //     cout<<*i<<" ";
    // }
    
    // int a,b,c;
    // cin>>a>>b>>c;
    // cout<<a<<b<<c<<endl;
    
    

    return 0;
}

















