#include <iostream>
#include <string>
using namespace std;
class Cat{
public:
    string name;
    Cat(string _name){
        name = _name;
    }
    void print(){
        cout<<"My name is "<<name<<".\n";
    }
};
int main()
{
    Cat cat1("¤p¥Õ"),cat2("¤p¶Â");
    cat1.print();
    cat2.print();
}
