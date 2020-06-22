#include <cstdio>

using namespace std;

int main(){
	int N, x, ans = 0;
	scanf("%d\n", &N);
	for(int i=0; i<N; i++){
		scanf("%d",&x);
		ans ^= x;
	}
	printf("%d\n", ans);

	return 0;
}

