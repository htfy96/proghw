#include <iostream>
#include <stdexcept>
using namespace std;

int n,bound,s=0;

int main()
{
    cin>>n;
    bound = (n<<1) -1;

    if (n<0)
      throw runtime_error("n must be non-negative");

    for (int i=1;i<=bound;i+=2)
      s+=i;

    cout<<s;

    return 0;
}
