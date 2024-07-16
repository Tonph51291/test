#include <stdio.h>
/*int main () {// while su dung khi minh chua biet truoc la minh lap bao nhieu vong lap
	int i=1 ; 
	while (i <= 9) {
		printf("%d", i);
		if ( i == 5) continue ;// break : ngat o 5
		i++;			// continue lap vinh vien
		}
		
	}
	*/
	// tim chu so
/*int main () {
	int n ;
	scanf("%d", &n);
	int ans = 0; // dem so luong chu so
	while ( n != 0) {
		++ans ;
		n/=10;
	}
	printf("%d", ans);
	printf("%d", n);
}*/
// tong cac chu so
/*int main () {
	int n ;
	scanf("%d", &n);
	int sum = 0; // dem so luong chu so
	while ( n != 0) {
		sum += n%10 ;
		n/=10;
	}
	printf("%d\n", sum);
	printf("%d", n);
}*/
// tim so le
int main () {
	int n;

	while (n % 2 == 0) {
		scanf("%d", &n);
		printf("so chan\n");
		break;
	}
		printf("so le ");
}
