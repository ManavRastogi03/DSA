#include<iostream>
#include<string>
using namespace std;
class Player{
private:
    int score;//Data Member
    int health;
    string name;
public:
    void setscore(int s){
        score=s;
    } 
    void sethealth(int h){
        health=h;
    }
    void gethealth(){
        cout<<health;
    }
    void getscore(){
        cout<<score;
    }
    void showHealth(){//Data Function
        cout<<"Health is: "<<health
        ;
    }
};
int main(){
    Player amit;
    // amit.health=200;
    // amit.name="Hii";
    // amit.score=100; 
    // cout<<amit.health<<endl;
    amit.setscore(200);
    amit.sethealth(100);
    amit.showHealth();
}