		
	#include "conga_assign_Ori_Cir_con.h"
	
		int conga_assign_Ori_Cir_switch[167] = {
	 
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	0,  
	75,  
	1,  
	2,  
	75,  
	75,  
	75,  
	3,  
	75,  
	4,  
	75,  
	5,  
	75,  
	6,  
	75,  
	75,  
	7,  
	75,  
	75,  
	8,  
	75,  
	9,  
	75,  
	75,  
	10,  
	11,  
	12,  
	13,  
	14,  
	75,  
	15,  
	16,  
	17,  
	75,  
	75,  
	18,  
	75,  
	75,  
	75,  
	75,  
	19,  
	20,  
	75,  
	21,  
	75,  
	22,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	23,  
	75,  
	24,  
	25,  
	75,  
	26,  
	75,  
	27,  
	28,  
	75,  
	75,  
	75,  
	75,  
	29,  
	30,  
	75,  
	31,  
	32,  
	75,  
	75,  
	33,  
	34,  
	75,  
	75,  
	35,  
	36,  
	75,  
	75,  
	37,  
	75,  
	38,  
	39,  
	75,  
	75,  
	40,  
	75,  
	75,  
	41,  
	75,  
	75,  
	42,  
	75,  
	75,  
	43,  
	75,  
	44,  
	45,  
	75,  
	46,  
	47,  
	75,  
	75,  
	48,  
	75,  
	49,  
	50,  
	51,  
	75,  
	52,  
	75,  
	75,  
	53,  
	75,  
	75,  
	54,  
	75,  
	55,  
	75,  
	56,  
	75,  
	57,  
	75,  
	58,  
	75,  
	75,  
	59,  
	75,  
	75,  
	60,  
	61,  
	75,  
	75,  
	62,  
	75,  
	63,  
	75,  
	64,  
	75,  
	65,  
	75,  
	66,  
	75,  
	75,  
	67,  
	75,  
	68,  
	69,  
	75,  
	70,  
	75,  
	75,  
	71,  
	72,  
	75,  
	75,  
	73,  
	74, 
	};
	
	
		int conga_assign_Ori_Cir_base_index[10] = { 6,7,8,9,10,11,26,27,28,29, };
	
	
	void conga_assign_Ori_Cir_fn(int _idx, double * a, double *r){
	
		conga_assign_Ori_Cir_func[ conga_assign_Ori_Cir_switch [_idx] ](a, r);
	}


	

	