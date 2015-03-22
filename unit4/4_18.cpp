#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <cmath>
using namespace std;

double a,b,delta,ans=0;
inline double f(double x) { return x*x+5*x+1; }

int main()
{
    cin>>a>>b>>delta;
    if (a>=b || delta<=0)
      throw runtime_error("a must < b and delta must >0");
    for (double current=a;current<b;current+=delta)
      ans+=min(delta,b-current) * f(current);
    cout<<fixed<<setprecision(6)<<ans<<endl;
    return 0;
}
