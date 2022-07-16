#include "chapter6.h"

int fact(int val){
	int result = 1;
	while (val > 0) {
		result *= val--;
	}
	return result;
}
