		
	#include "conga_assign_Trs_Tri_con.h"
	
		int conga_assign_Trs_Tri_switch[167] = {
	 
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	0,  
	55,  
	55,  
	55,  
	1,  
	55,  
	55,  
	55,  
	55,  
	2,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	3,  
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
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	5,  
	55,  
	6,  
	55,  
	7,  
	8,  
	55,  
	55,  
	55,  
	55,  
	9,  
	55,  
	10,  
	11,  
	12,  
	55,  
	55,  
	13,  
	14,  
	55,  
	15,  
	55,  
	55,  
	16,  
	55,  
	17,  
	55,  
	55,  
	18,  
	19,  
	20,  
	21,  
	55,  
	55,  
	22,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	23,  
	24,  
	55,  
	55,  
	55,  
	55,  
	55,  
	25,  
	55,  
	55,  
	26,  
	55,  
	55,  
	27,  
	55,  
	55,  
	55,  
	28,  
	55,  
	29,  
	55,  
	55,  
	30,  
	55,  
	55,  
	31,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	55,  
	32,  
	55,  
	33,  
	34,  
	55,  
	35,  
	36,  
	55,  
	55,  
	55,  
	37,  
	55,  
	38,  
	55,  
	39,  
	55,  
	40,  
	41,  
	55,  
	42,  
	43,  
	55,  
	55,  
	44,  
	45,  
	55,  
	46,  
	55,  
	47,  
	55,  
	48,  
	55,  
	55,  
	55,  
	55,  
	49,  
	55,  
	55,  
	55,  
	55,  
	50,  
	55,  
	51,  
	52,  
	55,  
	55,  
	55,  
	53,  
	55,  
	54, 
	};
	
	
		int conga_assign_Trs_Tri_base_index[4] = { 19,20,21,25, };
	
	
	void conga_assign_Trs_Tri_fn(int _idx, double * a, double *r){
	
		conga_assign_Trs_Tri_func[ conga_assign_Trs_Tri_switch [_idx] ](a, r);
	}


	

	