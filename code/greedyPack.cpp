#include <stdio.h>
#include <vector>

using namespace std;

typedef struct tagObject {
	int weight;
	int price;
	int status; //0: 未选中 1: 已选中 2: 已经不可选
} OBJECT;

typedef struct tagKnapsackProblem {
	std::vector<OBJECT> objs;
	int totalC;
} KNAPSACK_PROBLEM;

void GreedyAlgo(KNAPSACK_PROBLEM *problem, SELECT_POLICY spFunc) {
	int idx;
	int ntc = 0;
	
	while((idx = spFunc(problem->objs, problem->totalC - ntc)) != 1)
	{
		if ((ntc + problem->objs[idx].weight) <= problem->totalC) {
			ntc += problem->objs[idx].weight;
		} else {
			problem->obks[idx].status = 2;
		}
	}
	
	PrintResult(problem->objs);
}

int Choosefunc1(std::vector<OBJECT>& objs, int c) {
	int index = -1;
	int mp = 0;
	for (int i = 0; i < static_cast<int>(objs.size()); i++) {
		if ((objs[i].status == 0) && (objs[i].price > mp)) {
			mp = objs[i].price;
			index = i;
		}
	}
	
	return index;
}

int main() {
	
	return 0;
}