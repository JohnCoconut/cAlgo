#include <stdio.h>
#include <limits.h>
#include <math.h>
#include "func.h"
#include "time_constant.h"

/* unit is microsecond */


const char *t_string[] = {"second", "minute", "hour", "day", 
			  "month", "year", "century"};


const char *func_name[] = {"lgn", "squre", "n", "nlgn", "n2",
			   "n3", "two_pn", "nfact"};

float max_size(float (*f)(float size), float time) {
	float size = 1;
	while ((*f)(size) < time)
		size++;
	return size;
}

int main()
{

	float time[] = {second, minute, hour, day, month, year, century};

	float (*func[8])(float n) = {lgn, square, n, nlgn, n2, n3, two_pn, nfact};

	float size;
	for (int t = 0; t < 8; t++) {
		for (int f =0; f < 8; f++) {
			size = max_size(func[f], time[t]);
		}
	}
}

