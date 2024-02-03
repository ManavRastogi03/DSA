#include<iostream>
using namespace std;
class  Student{
public:
    string name;
    int rollno;
    int marks;
    Student(string name,int rollno,int marks){
        this->name=name;
        this->marks=marks;
        this->rollno=rollno;
    }
};
int main(){
    Student* s=new Student("Manav",34,46);
    cout<<s->name;

}