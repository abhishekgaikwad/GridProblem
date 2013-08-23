/*
 * GridProblem.h
 *
 *  Created on: Aug 23, 2013
 *      Author: Abhishek
 */

#ifndef GRIDPROBLEM_H_
#define GRIDPROBLEM_H_

class GridProblem {
public:
	GridProblem(int x, int y);
	void config(int x, int y);
	int count() ;

private:
	int numberOfSolution ;
	int gridSizeX ;
	int gridSizeY ;

};

#endif /* GRIDPROBLEM_H_ */
