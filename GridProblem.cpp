/*
 * GridProblem.cpp
 *
 *  Created on: Aug 23, 2013
 *      Author: Abhishek
 */

#include "GridProblem.h"

GridProblem::GridProblem(int x, int y) {
	gridSizeX = x ;
	gridSizeY = y ;
	numberOfSolution = 0 ;
}

void GridProblem::config(int x, int y) {
	if(x==gridSizeX && y==gridSizeY) {
		numberOfSolution++ ;
		return ;
	}
	else if(x==gridSizeX)
		config(x,y+1) ;
	else if(y==gridSizeY)
		config(x+1,y) ;
	else {
		config(x+1,y) ;
		config(x,y+1) ;
	}
}

int GridProblem::count() {
	return numberOfSolution ;
}

