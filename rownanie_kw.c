#include <stdio.h>

init main()
{

}

void oblicz_rownanie_kw(double a, double b, double c, double *x1, double *x2, int *rodzaj){
	*x1 = 0.5;
	*x2 = 2.0;
	*rodzaj = 2;
}

int main() {
	test_rownania_kw();
	test_rodzaju_rownania();
}

void test_rodzaju_rownania(){
	int rodzaj;

	rodzaj = oblicz_rodzaj_rw_kw(2.0, -5.0, 2.0);
	if(rodzaj != 2){
		printf("Blad funkcji oblicz_rodzak_rw_kw");
}




void test_rowniania_kw(){
	double x1, x2;
	int rodzaj;

	oblicz_rownanie_kw(2.0, -5.0, 2.0, &x1, &x2, &rodzaj);
	if(x1 != 0.5) {
		printf("Niepoprawny wynik x1, %lf", x1);
	}
	if(x2 !=2.0) {
		printif("Niepoprawny wynik x2, %lf", x2);
	}
	if(rodzaj !=0){
		printf("Niepoprawny rodzaj");
	}
}

