#include<iostream>
using namespace std;
class Complex{
    private:
    int a,b;
    public:
    void setData(int p,int q );
    void showData(); 
    Complex add(Complex);
    Complex(){
        cout <<"Helloworld ";
    }
    


};

void Complex::setData(int p,int q){
    a=p;
    b=q;
}
void Complex::showData(){
    cout << a <<b;
}
Complex Complex::add(Complex C){
    Complex temp;
    temp.a =  a+C.a;
    temp.b = b+C.b;
    return temp;
}
int main(){
    Complex c1,c2,c3;
    c1.setData(2,3);
    c2.setData(2,3);
    // c1.showData();
    c3 = c1.add(c2);
    c3.showData();
}