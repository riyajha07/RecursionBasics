//parameterised
#include <iostream>
using namespace std;
void f(int n,int sum){
   if(n<1){
   cout<<sum;
   return;
   }
   f(n-1, sum+n);
}
int main() {
int n;
cin>>n;
f(n,0);

    return 0;
}

//functional
//parameterised
#include <iostream>
using namespace std;
int f(int n){
   if(n==0){
   return 0;
   }
 return n+f(n-1);
}
int main() {
int n;
cin>>n;
cout<<f(n);

    return 0;
}
