// first step from stepik: 13 answers integers

//1
/*#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    cout << k / n;
    return 0;
}*/
//2
/*
#include <iostream>
using namespace std ;
int main() {
    int n = 14 ;
    int k = 3 ;
    cin >> k >> n ;
    cout << n % k ;
    return 0;
}
*/
//3 
/*
#include <iostream>
using namespace std;
int main() {
    int n, c;
    cin >> n >> c;
    n = (n%100);
    c = (n%10);
    cout << c;
    return 0;
}
*/

//4 
/*
#include <iostream>
using namespace std; 
int main() {
    int n = 42; 
    cin >> n; 
    cout << n/10,5 ;
    return 0;
}
*/
//5
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << (n%100/10);
    return 0;
}
*/
//6
/*#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << (n / 100) + ( n % 100/10 ) + ( n % 10);
    return 0;
}
*/
//7
/*#include <iostream>
using namespace std;
int main() {
    int n = 7; 
    cin >> n;
    cout << n - n%2 + 2;
    return 0;
}
*/
//8
/*#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a/2+a%2)+(b/2+b%2)+(c/2+c%2);
    return 0; 
}
*/
//9
/*
* #include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c ;
    cout << ((a*100   + b ) * c ) / 100 << " " << ( a * 100+ (b) * c ) % 100 ;
    return 0;
}
*/
//10
/*#include <iostream>
using namespace std; 
int main() {
    int all;
    cin >> all;
    int h, m, s, m1, s1;
    h = (all/3600)%24;
    m = ((all/60)%60)/10;
    m1 = ((all/60)%60)%10;
    s = (all%60)/10;
    s1 = (all%60)%10;
    cout << h << ":" << m << m1 << ":" << s << s1;
    return 0;
}
*/
//11 
/*#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    a = 3600*a;
    b = 60*b;
    c = c;
    d = 3600*d;
    e = 60 * e;
    f = f;
    int sum1, sum2;
    sum1 = a + b + c;
    sum2 = d + e + f;
    int bit;
    bit = sum2 - sum1;
    cout << bit;
    return 0;
} 
*/
//12 
/*#include <iostream>
using namespace std;
int main() {
	int l = 109;
	int v, t;
	cin >> v >> t;
	int answer, answer2;
	int e;
    answer = (v*t)%l;
    answer2 = answer + l;
    e = answer2 % 109;
    cout << e;
	return 0;
}
*/
//13
/*#include <iostream>
using namespace std;
int main() 
 
{
  int a, a1, a2, a3, a4, a5;
    cin>> a;
    a1 = a/1000;
    a2 = (a/100)%10;
    a3 = (a/10)%10;
    a4 = (a%100)%10;
    a5 = ((a1 - a4)*(a1-a4))+ ((a2-a3)*(a2-a3))+1;
    cout << a5;
return 0;
}
*/

