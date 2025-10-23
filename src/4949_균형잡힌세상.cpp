#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	bool con = true;
	while(con){
		getline(cin, s);
		// cout << "++++++++++++++++++++++++++++++" << '\n' << s << " : length : " << s.length() << '\n' << "+++++++++++++++++++++++++" << '\n';
		vector<char> arr;
		bool istrue = true;
		for (int i = 0; i < s.length(); i++){
			char c = s[i];
			if(c == '[' || c == '('){
				arr.push_back(c);
			}

			else if(c == ']'){
				if(arr.empty()){
					istrue = false;
					break;
				}
				else{
					if(arr.back() == '['){
						arr.pop_back();
					}
					else {
						istrue = false;
						break;
					}
				}
			}

			else if(c == ')'){
				if(arr.empty()){
					istrue = false;
					break;
				}
				else{
					if(arr.back() == '('){
						arr.pop_back();
					}
					else {
						istrue = false;
						break;
					}
				}
			}

			else if(c == '.'){
				if(s.length() > 1){
					break;
				}
				else {
					con = false;
					goto end;
				}
			}
		}

		if(istrue == true && arr.empty()) cout << "yes" << '\n';
		else cout << "no" << '\n';
	}
	// cout << "end" << '\n';
	end : return 0;
}
