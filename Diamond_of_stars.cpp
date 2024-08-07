/*Problem statement
Print the following pattern for the given number of rows.

Note: N is always odd.


Pattern for N = 5



The dots represent spaces.




Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
#include<iostream>
using namespace std;

int main() {
    int n ;
    cin >> n;
    int n1 = (n + 1) / 2;
    int n2 = n1 -1;
    for(int i =1; i <= n1; i++ ){
        for(int j = 1; j <= n1 - i; j++){
…        cout << " ";
        for (int j = 1; j <= (2 * i) - 1; j++) {
          cout << "*";
        }
    
    cout << endl;
}
}
*/





#include<iostream>
using namespace std;

int main() {
    int n ;
    cin >> n;
    int n1 = (n + 1) / 2;
    int n2 = n1 -1;
    for(int i =1; i <= n1; i++ ){
        for(int j = 1; j <= n1 - i; j++){
            cout << " ";
        }
        for(int k = 1; k <= (2*i) - 1; k++){
            cout << "*";
        }
        cout << endl;

    }

    for(int i = n2; i >= 1; i-- ){
        cout << " ";
        for (int j = 1; j <= (2 * i) - 1; j++) {
          cout << "*";
        }
    
    cout << endl;
}
}