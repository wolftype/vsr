		
	#include "conga_assign_Mnk_Aff_con.h"
	
		int conga_assign_Mnk_Aff_switch[167] = {
	 
	55,  
	0,  
	55,  
	55,  
	1,  
	55,  
	2,  
	55,  
	3,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	4,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	5,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	6,  
	55,  
	55,  
	7,  
	8,  
	9,  
	10,  
	55,  
	55,  
	55,  
	55,  
	11,  
	55,  
	55,  
	55,  
	12,  
	13,  
	14,  
	55,  
	15,  
	55,  
	16,  
	55,  
	55,  
	17,  
	55,  
	18,  
	55,  
	55,  
	55,  
	55,  
	19,  
	55,  
	55,  
	55,  
	20,  
	55,  
	55,  
	21,  
	22,  
	55,  
	55,  
	55,  
	23,  
	55,  
	55,  
	55,  
	24,  
	55,  
	25,  
	55,  
	55,  
	26,  
	27,  
	55,  
	28,  
	29,  
	55,  
	30,  
	31,  
	55,  
	55,  
	32,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	33,  
	34,  
	55,  
	35,  
	55,  
	55,  
	55,  
	36,  
	55,  
	55,  
	37,  
	55,  
	55,  
	38,  
	55,  
	39,  
	55,  
	40,  
	55,  
	41,  
	55,  
	42,  
	55,  
	55,  
	43,  
	55,  
	44,  
	45,  
	55,  
	55,  
	55,  
	46,  
	55,  
	47,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	48,  
	49,  
	55,  
	50,  
	55,  
	55,  
	55,  
	55,  
	51,  
	52,  
	55,  
	55,  
	53,  
	55,  
	55,  
	54, 
	};
	
	
		int conga_assign_Mnk_Aff_base_index[4] = { 4,22,23,24, };
	
	
	void conga_assign_Mnk_Aff_fn(int _idx, double * a, double *r){
	
		conga_assign_Mnk_Aff_func[ conga_assign_Mnk_Aff_switch [_idx] ](a, r);
	}


	

	