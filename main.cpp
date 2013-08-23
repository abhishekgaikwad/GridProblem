#include <iostream>
#include "GridProblem.h"

using namespace std ;

int main(){
	GridProblem g = GridProblem(10,10);
	g.config(0,0);
	cout << g.count() ;

	return 0;
}
