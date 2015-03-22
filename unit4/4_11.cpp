#define REP(a,x) for(int a=0;a<=x;++a)
#include <iostream>
#include <cmath>
using namespace std;

const double EPS=1e-10;
int a,b,c,d,e;

inline bool isInt(double d) { return fabs(d - static_cast<int> (d) )<EPS; }
inline int toNum(int p1, int p2, int p3, int p4) { return p1*1000+p2*100+p3*10+p4; }
inline double dDiv(int p1, int p2) { return static_cast<double>(p1) / p2; }
int main()
{
    REP(a,3)
        REP(b,9)
        if (b!=a)
          REP(c,9)
              if (c!=a && c!=b)
                REP(d,9)
                    if (d!=a && d!=b && d!=c)
                      if (isInt( dDiv(toNum(d,c,b,a), toNum(a,b,c,d) ) ) )
                      {
                          e = toNum(d,c,b,a) / toNum(a,b,c,d);
                          cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
                      }
    return 0;
}

