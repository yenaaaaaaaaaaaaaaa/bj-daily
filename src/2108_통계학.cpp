#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_set>
#include <deque>
#include <math.h>
using namespace std;
vector <int> arr_med;
vector <int> arr_mod(8001, 0);

int mean(int sum, int N){
	return round((double)sum / N);
}
int median(int N){
	bool is_even = (N % 2 == 0) ;
	int b = arr_med[N/2-1];
	int c = arr_med[N/2];
	if(is_even){
		return (b + c) / 2;
	}
	else{
		return c;
	}
}
int mode(int N){
	int max_cnt = 0;
	int max = 0;
	int c = 0;
	for(int i = 0; i < arr_mod.size(); i++){
		int x = arr_mod[i];
		if (x > max_cnt){
			max_cnt = x;
			max = i - 4000;
			c = 0;
		}
		else if((max_cnt == x) && (c == 0)){
			c++;
			max = i - 4000;
		}

		if((max_cnt) * 2 > N){
			break;
		}

	}
	return max;
}
int range(int N){
int min = arr_med.front();
int max = arr_med.back();
return max - min;
}
int main()
{

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N; cin >> N;
	int sum = 0;
	for(int i = 0; i < N; i++){
		int a;
		cin >> a;
		sum += a;
		arr_med.push_back(a);
		arr_mod[a + 4000] ++;
	}
	sort(arr_med.begin(), arr_med.end());
	cout << mean(sum,N) << "\n" << median(N) << "\n" << mode(N) << "\n" << range(N);
	return 0;
}

