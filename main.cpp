#include <iostream>

using namespace std;
void print(int n){
if (n<1 || n>100){
    //cout<<"the number has to be between 1 and 100"<<endl;
    return;
}
print(n-1);
cout<<n<<endl;

}
int main()
{
    int n;
    cin>> n;
    print(n);
    return 0;
}
