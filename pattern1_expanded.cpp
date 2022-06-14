/*
for n=1..5

5 10 15 20 25
4 9 14 19 24
3 8 13 18 23
2 7 12 17 22
1 6 11 16 21

logic 
---------------------
i=1 initially 
x=n-i+1
x=5-1+1
x=5
x=x+5
print x
x=x+5
10
15
20
25
inner loop executed completely
-------------------------------
i++
i=2
x=5-2+1
x=4
ptint x
4
x=x+5
9
14
19
24
inner loop executed completely
------------------------------
i++
i=3
x=5-3+1
x=3
ptint x
3
x=x+5
8
13
18
23
inner loop executed completely
------------------------------
i++
i=4
x=5-4+1
x=2
ptint x
2
x=x+5
7
12
17
22
inner loop executed completely
------------------------------
i++
i=5
x=5-5+1
x=1
ptint x
1
x=x+5
6
11
16
21
inner loop executed completely
------------------------------

*/


#include <iostream>
using namespace std;

int main() {
int r=5;
int s;
for(int i=1;i<=5;i++){
    s=r-i+1;
    for(int j=1;j<=5;j++){
        cout<<s<<" ";
        s=s+5;
        
    }
    cout<<endl;
}
    return 0;
}