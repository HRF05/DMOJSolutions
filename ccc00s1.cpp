#include <iostream>
using namespace std;

int main(){
	int q, a, b, c, tp = 0;
	cin>>q>>a>>b>>c;
	for(int i = 0; i < q; ){
		a++; tp++; i++;
		if(i >= q){
			cout << "Martha plays " << tp << " times before going broke." << endl;
			return 0;
		}
		b++;tp++;i++;
		if(i >= q){
			cout << "Martha plays " << tp << " times before going broke." << endl;
			return 0;
		}
		c++;tp++;i++;
		if(i >= q){
			cout << "Martha plays " << tp << " times before going broke." << endl;
			return 0;
		}
		if(a == 35){
			i -= 30;
			a = 0;
		}
		if(b == 100){
			i -= 60;
			b = 0;
		}
		if(c == 10){
			i -= 9;
			c = 0;
		}
		
	}
	cout << "Martha plays " << tp << " times before going broke." << endl;
}
