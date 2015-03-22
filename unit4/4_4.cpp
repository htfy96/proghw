#include <iostream>
#include <stdexcept>
using namespace std;

int n;
int main()
{
    cin>>n;
    
    if (n<0)
      throw runtime_error(" n must be non-negative");

    for (int i=1;i<=n;++i)
    {
        for (int j=1;j<=n-i;++j)
          cout<<" ";
        for (int j=1;j<=2*i-1;++j)
          cout<<"*";
        if (i!=n)
          cout<<endl;
    }

    return 0;
}
