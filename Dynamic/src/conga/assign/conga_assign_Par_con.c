		
	#include "conga_assign_Par_con.h"
	
		int conga_assign_Par_switch[167] = {
	 
	76,  
	76,  
	76,  
	0,  
	76,  
	76,  
	76,  
	1,  
	76,  
	76,  
	2,  
	3,  
	76,  
	76,  
	4,  
	76,  
	76,  
	76,  
	76,  
	5,  
	6,  
	76,  
	76,  
	7,  
	76,  
	76,  
	8,  
	76,  
	9,  
	10,  
	11,  
	12,  
	13,  
	14,  
	15,  
	16,  
	17,  
	18,  
	19,  
	20,  
	76,  
	76,  
	21,  
	76,  
	76,  
	76,  
	76,  
	22,  
	23,  
	24,  
	25,  
	76,  
	26,  
	76,  
	76,  
	76,  
	76,  
	76,  
	76,  
	76,  
	27,  
	76,  
	28,  
	29,  
	76,  
	30,  
	76,  
	31,  
	32,  
	76,  
	76,  
	76,  
	76,  
	33,  
	34,  
	76,  
	35,  
	36,  
	76,  
	76,  
	37,  
	38,  
	76,  
	76,  
	39,  
	40,  
	76,  
	76,  
	41,  
	76,  
	42,  
	43,  
	76,  
	76,  
	44,  
	76,  
	76,  
	45,  
	76,  
	76,  
	46,  
	76,  
	76,  
	47,  
	76,  
	48,  
	49,  
	76,  
	50,  
	51,  
	76,  
	76,  
	76,  
	76,  
	52,  
	76,  
	53,  
	76,  
	54,  
	76,  
	76,  
	55,  
	76,  
	76,  
	76,  
	76,  
	56,  
	76,  
	57,  
	76,  
	58,  
	76,  
	59,  
	76,  
	76,  
	60,  
	76,  
	76,  
	61,  
	62,  
	76,  
	76,  
	63,  
	76,  
	64,  
	76,  
	65,  
	76,  
	66,  
	76,  
	67,  
	76,  
	76,  
	68,  
	76,  
	69,  
	70,  
	76,  
	71,  
	76,  
	76,  
	72,  
	73,  
	76,  
	76,  
	74,  
	75, 
	};
	
	
		int conga_assign_Par_base_index[10] = { 6,7,8,9,10,11,12,13,14,15, };
	
	
	void conga_assign_Par_fn(int _idx, double * a, double *r){
	
		conga_assign_Par_func[ conga_assign_Par_switch [_idx] ](a, r);
	}


	

	