#include<iostream>
using namespace std;
class rectangle{
    public:
    float length;
    float breadth;
    void input(){
        cout<<"Enter length and breadth of rectangle: ";
        cin>>length>>breadth;
    }
    float area(){
        return length*breadth;
    }
    void display(){
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
        cout<<"Area of rectangle: "<<area()<<endl;
    }
};
int main(){
    rectangle r;
    r.input();
    r.display();
    return 0;
}