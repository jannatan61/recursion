#include <iostream>

using namespace std;
void print(int n){

if (n<1 || n>100){
   // cout<<"the number has to be between 1 and 100"<<endl;
    return;
}
cout<<"i love Ricursion" <<endl;
print(n-1);

}

int main()
{
    int n;
    cin>> n;
    print(n);
    return 0;
}
