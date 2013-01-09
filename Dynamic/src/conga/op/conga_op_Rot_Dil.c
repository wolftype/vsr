
#include "conga_op_Rot_Dil.h"


double * conga_op_35_1(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_noni
	r[4] = a[4] * b[0] ;
	
	
	//_e12noni
	r[5] = a[5] * b[0] ;
	
	
	//_e13noni
	r[6] = a[6] * b[0] ;
	
	
	//_e23noni
	r[7] = a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_2(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_3(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_4(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[1] * b[0] ;
	
	
	//_e13noni
	r[2] = a[2] * b[0] ;
	
	
	//_e23noni
	r[3] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_5(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e12no
	r[2] = a[1] * b[0] ;
	
	
	//_e13no
	r[3] = a[2] * b[0] ;
	
	
	//_e23no
	r[4] = a[3] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[2] * b[1] ;
	
	
	//_e23ni
	r[7] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_35_6(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_35_7(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[4] * b[0] ;
	
	
	//_e2noni
	r[12] = a[4] * b[1] ;
	
	
	//_e3noni
	r[13] = a[4] * b[2] ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_8(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_noni
	r[9] = a[0] * b[9] ;
	
	
	//_e12noni
	r[10] = a[1] * b[9]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[11] = a[2] * b[9]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[12] = a[3] * b[9]  + a[4] * b[2] ;
	
	
	//_e123no
	r[13] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[14] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_35_9(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	//_e123noni
	r[10] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[9] ;
	
	
	return r;
}

double * conga_op_35_10(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3] ;
	
	
	//_e123ni
	r[4] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_op_35_11(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_e12noni
	r[9] = a[4] * b[0] ;
	
	
	//_e13noni
	r[10] = a[4] * b[1] ;
	
	
	//_e23noni
	r[11] = a[4] * b[2] ;
	
	
	//_e123no
	r[12] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[13] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_35_12(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123ni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_13(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_35_14(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_35_15(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_16(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_35_17(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_op_35_18(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_19(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_35_20(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[1] * b[3] ;
	
	
	//_e13noni
	r[5] = a[2] * b[3] ;
	
	
	//_e23noni
	r[6] = a[3] * b[3] ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_21(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[4] * b[2] ;
	
	
	//_e123ni
	r[9] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_22(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[1] * b[3] ;
	
	
	//_e13ni
	r[5] = a[2] * b[3] ;
	
	
	//_e23ni
	r[6] = a[3] * b[3] ;
	
	
	//_e1noni
	r[7] = a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[4] * b[2] ;
	
	
	//_e123
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_23(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[4] * b[0] ;
	
	
	//_e2noni
	r[4] = a[4] * b[1] ;
	
	
	//_e3noni
	r[5] = a[4] * b[2] ;
	
	
	//_e123
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_24(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[4] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[1] ;
	
	
	//_e23noni
	r[5] = a[4] * b[2] ;
	
	
	return r;
}

double * conga_op_35_25(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	//_e123noni
	r[1] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_35_26(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[3] * b[3] ;
	
	
	//_e1noni
	r[7] = a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[4] * b[2] ;
	
	
	//_e123
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_27(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[4] * b[2] ;
	
	
	//_e123no
	r[9] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_28(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[4] * b[3] ;
	
	
	return r;
}

double * conga_op_35_29(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_noni
	r[4] = a[4] * b[0] ;
	
	
	//_e12noni
	r[5] = a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[6] = a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[7] = a[4] * b[3]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[1] ;
	
	
	//_e2ni
	r[5] = a[0] * b[2] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3] ;
	
	
	//_noni
	r[7] = a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[5] * b[0] ;
	
	
	//_e13noni
	r[9] = a[6] * b[0] ;
	
	
	//_e23noni
	r[10] = a[7] * b[0] ;
	
	
	//_e123ni
	r[11] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_35_31(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_noni
	r[4] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[5] = a[1] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[6] = a[2] * b[1]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[7] = a[3] * b[1]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[9] = a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[10] = a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123ni
	r[11] = a[0] * b[7]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_35_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[1] ;
	
	
	//_e2no
	r[5] = a[0] * b[2] ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_noni
	r[7] = a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[5] * b[0] ;
	
	
	//_e13noni
	r[9] = a[6] * b[0] ;
	
	
	//_e23noni
	r[10] = a[7] * b[0] ;
	
	
	//_e123no
	r[11] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_35_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[8]  + a[1] * b[7]  + a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[9] = a[0] * b[9]  + a[2] * b[7]  + a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[10] = a[0] * b[10]  + a[3] * b[7]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123ni
	r[11] = a[0] * b[11]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_35_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[5] = a[0] * b[5]  + a[1] * b[4]  + a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[6] = a[0] * b[6]  + a[2] * b[4]  + a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[7] = a[0] * b[7]  + a[3] * b[4]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[9] = a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[10] = a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123no
	r[11] = a[0] * b[7]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_35_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[1] ;
	
	
	//_e2ni
	r[5] = a[0] * b[2] ;
	
	
	//_e3ni
	r[6] = a[0] * b[3] ;
	
	
	//_noni
	r[7] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[1] * b[4]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[9] = a[2] * b[4]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[10] = a[3] * b[4]  + a[7] * b[0] ;
	
	
	//_e123ni
	r[11] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_35_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[10]  + a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[2] * b[10]  + a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[3] * b[10]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_35_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[1] ;
	
	
	//_e2no
	r[5] = a[0] * b[2] ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_noni
	r[7] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[1] * b[4]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[9] = a[2] * b[4]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[10] = a[3] * b[4]  + a[7] * b[0] ;
	
	
	//_e123no
	r[11] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_35_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[10]  + a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[2] * b[10]  + a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[3] * b[10]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[14]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[0] * b[15]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_35_41(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_42(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_43(double * a, double * b, double *r) { 
	
	//_noni
	r[0] = a[0] * b[0] ;
	
	
	//_e12noni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13noni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_44(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e12no
	r[2] = a[0] * b[2]  + a[1] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[3]  + a[2] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e12ni
	r[5] = a[0] * b[5]  + a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[0] * b[6]  + a[2] * b[1] ;
	
	
	//_e23ni
	r[7] = a[0] * b[7]  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_35_45(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[4] * b[0] ;
	
	
	//_e2noni
	r[12] = a[4] * b[1] ;
	
	
	//_e3noni
	r[13] = a[4] * b[2] ;
	
	
	//_e123
	r[14] = a[0] * b[11]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[4] * b[11]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[4] * b[2] ;
	
	
	//_e123
	r[14] = a[0] * b[14]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[0] * b[15]  + a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[11]  + a[4] * b[14]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_48(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_noni
	r[6] = a[0] * b[6] ;
	
	
	//_e12noni
	r[7] = a[0] * b[7]  + a[1] * b[6] ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[2] * b[6] ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[3] * b[6] ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[11] = a[0] * b[11]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[12] = a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[13] = a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[10]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[0] * b[11]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_35_50(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_51(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_52(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_35_53(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[7] = a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[4] * b[2] ;
	
	
	//_e123
	r[10] = a[0] * b[7]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[4] * b[7]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_55(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[4] * b[0] ;
	
	
	//_e2noni
	r[4] = a[4] * b[1] ;
	
	
	//_e3noni
	r[5] = a[4] * b[2] ;
	
	
	//_e123
	r[6] = a[0] * b[3]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[4] * b[3]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[7] = a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[4] * b[2] ;
	
	
	//_e123
	r[10] = a[0] * b[7]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[4] * b[7]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_57(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[3] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6]  + a[4] * b[2] ;
	
	
	//_e123
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_58(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[0] * b[5]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[6]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  + a[4] * b[2] ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[7]  + a[2] * b[6]  * -1  + a[3] * b[5]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_59(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_35_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[0] * b[5]  + a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[0] * b[6]  + a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[0] * b[7]  + a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[0] * b[8]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  + a[4] * b[2] ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[10]  + a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[2] * b[10]  + a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[3] * b[10]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[0] * b[14]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_35_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[1] * b[3] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[2] * b[3] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[4] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[14]  + a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[4] * b[13]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_63(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[9] ;
	
	
	//_e123ni
	r[10] = a[0] * b[10]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[8]  + a[1] * b[7]  + a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[9] = a[0] * b[9]  + a[2] * b[7]  + a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[10] = a[0] * b[10]  + a[3] * b[7]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123no
	r[11] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_35_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[9]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_66(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[4] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_35_67(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_35_68(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123ni
	r[6] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_69(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[4] * b[2] ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[7] = a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[4] * b[2] ;
	
	
	//_e123
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_71(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[4] * b[3] ;
	
	
	return r;
}

double * conga_op_35_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e1noni
	r[9] = a[0] * b[9]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[10] = a[0] * b[10]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[11] = a[0] * b[11]  + a[4] * b[2] ;
	
	
	//_e123
	r[12] = a[0] * b[12]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[13]  + a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[9]  + a[4] * b[12]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_73(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	//_e123noni
	r[1] = a[0] * b[1]  + a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_35_74(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[4] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[6] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_op_35_75(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_e12noni
	r[9] = a[0] * b[9]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[10] = a[0] * b[10]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[11] = a[0] * b[11]  + a[4] * b[2] ;
	
	
	//_e123no
	r[12] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[13] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_35_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	//_e123
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_77(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[4] * b[2] ;
	
	
	//_e123ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_op_35_78(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	//_e123ni
	r[9] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_79(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[1] * b[3] ;
	
	
	//_e13ni
	r[5] = a[2] * b[3] ;
	
	
	//_e23ni
	r[6] = a[3] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[5]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[6]  + a[4] * b[2] ;
	
	
	//_e123
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_80(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5]  + a[4] * b[2] ;
	
	
	//_e123
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_81(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5]  + a[4] * b[2] ;
	
	
	return r;
}

double * conga_op_35_82(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	//_e123no
	r[9] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_83(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4]  + a[4] * b[3] ;
	
	
	return r;
}

double * conga_op_35_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[8]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[9]  + a[4] * b[2] ;
	
	
	//_e123
	r[10] = a[0] * b[10]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[10]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[8]  + a[1] * b[7]  + a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[9] = a[0] * b[9]  + a[2] * b[7]  + a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[10] = a[0] * b[10]  + a[3] * b[7]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123no
	r[11] = a[0] * b[11]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_35_86(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[1] * b[3] ;
	
	
	//_e13noni
	r[5] = a[2] * b[3] ;
	
	
	//_e23noni
	r[6] = a[3] * b[3] ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_87(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_35_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[0] * b[8]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  + a[4] * b[2] ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[8]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[11]  + a[1] * b[10]  + a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[12]  + a[2] * b[10]  + a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[13]  + a[3] * b[10]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[14]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_35_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[4] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[14]  + a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[4] * b[13]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_91(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_op_35_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[0] * b[8]  + a[1] * b[7]  + a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[9] = a[0] * b[9]  + a[2] * b[7]  + a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[10] = a[0] * b[10]  + a[3] * b[7]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123ni
	r[11] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_35_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[9]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[7] = a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[4] * b[2] ;
	
	
	//_e123
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_95(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[4] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[8]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[9]  + a[4] * b[2] ;
	
	
	//_e123
	r[10] = a[0] * b[10]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[4] * b[10]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[8]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[9]  + a[4] * b[2] ;
	
	
	//_e123
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_98(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	//_e123no
	r[9] = a[0] * b[9]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	//_e123
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12ni
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13ni
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[8] = a[0] * b[8]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[9] = a[0] * b[9]  + a[4] * b[2] ;
	
	
	//_e123
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[11] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_101(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8]  + a[4] * b[2] ;
	
	
	//_e123ni
	r[9] = a[0] * b[9]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_102(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	//_e123noni
	r[4] = a[0] * b[4]  + a[4] * b[3] ;
	
	
	return r;
}

double * conga_op_35_103(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e12no
	r[2] = a[1] * b[0] ;
	
	
	//_e13no
	r[3] = a[2] * b[0] ;
	
	
	//_e23no
	r[4] = a[3] * b[0] ;
	
	
	//_e12ni
	r[5] = a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[2] * b[1] ;
	
	
	//_e23ni
	r[7] = a[3] * b[1] ;
	
	
	//_e1noni
	r[8] = a[0] * b[2] ;
	
	
	//_e2noni
	r[9] = a[0] * b[3] ;
	
	
	//_e3noni
	r[10] = a[0] * b[4] ;
	
	
	//_e123noni
	r[11] = a[1] * b[4]  + a[2] * b[3]  * -1  + a[3] * b[2] ;
	
	
	return r;
}

double * conga_op_35_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[1] ;
	
	
	//_e2no
	r[5] = a[0] * b[2] ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6] ;
	
	
	//_noni
	r[10] = a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[7]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[8]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[9]  + a[7] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[15] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_35_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e1noni
	r[9] = a[4] * b[0] ;
	
	
	//_e2noni
	r[10] = a[4] * b[1] ;
	
	
	//_e3noni
	r[11] = a[4] * b[2] ;
	
	
	//_e123
	r[12] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[9]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[4] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[1] ;
	
	
	//_e23noni
	r[5] = a[4] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[3] ;
	
	
	//_e123ni
	r[7] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_op_35_107(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12noni
	r[6] = a[0] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[7] ;
	
	
	//_e23noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123no
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[10] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[4] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[4] * b[2] ;
	
	
	//_e123
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_109(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[4] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[1] ;
	
	
	//_e23noni
	r[5] = a[4] * b[2] ;
	
	
	//_e123ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_35_110(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123ni
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_111(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0] ;
	
	
	//_e12ni
	r[1] = a[1] * b[0] ;
	
	
	//_e13ni
	r[2] = a[2] * b[0] ;
	
	
	//_e23ni
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[1] ;
	
	
	//_e2noni
	r[5] = a[0] * b[2] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_35_112(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[0] * b[1] ;
	
	
	//_e3noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123noni
	r[3] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_113(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_op_35_114(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[1] ;
	
	
	//_e2noni
	r[5] = a[0] * b[2] ;
	
	
	//_e3noni
	r[6] = a[0] * b[3] ;
	
	
	//_e123noni
	r[7] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	return r;
}

double * conga_op_35_115(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_116(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[0] ;
	
	
	//_e123ni
	r[1] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_op_35_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[1] ;
	
	
	//_e2no
	r[5] = a[0] * b[2] ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[1] * b[7]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[12] = a[2] * b[7]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[13] = a[3] * b[7]  + a[7] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[15] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_35_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[4] * b[2] ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[11]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_119(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_e12noni
	r[9] = a[0] * b[9]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[10] = a[0] * b[10]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[11] = a[0] * b[11]  + a[4] * b[2] ;
	
	
	//_e123no
	r[12] = a[0] * b[12]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[13] = a[0] * b[13]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_35_120(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[4] * b[6] ;
	
	
	return r;
}

double * conga_op_35_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e1noni
	r[9] = a[0] * b[9]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[10] = a[0] * b[10]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[11] = a[0] * b[11]  + a[4] * b[2] ;
	
	
	//_e123
	r[12] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[9]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_122(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_123(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_op_35_124(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123noni
	r[9] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_35_125(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[1] ;
	
	
	//_e23noni
	r[2] = a[0] * b[2] ;
	
	
	//_e123no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_35_126(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[1] * b[10]  + a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[12] = a[2] * b[10]  + a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[13] = a[3] * b[10]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_35_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[4] * b[2] ;
	
	
	//_e123
	r[14] = a[0] * b[14]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[11]  + a[4] * b[14]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_129(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_noni
	r[9] = a[0] * b[9] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[2] * b[9]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[3] * b[9]  + a[4] * b[2] ;
	
	
	//_e123no
	r[13] = a[0] * b[13]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[14]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_35_130(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	//_e123noni
	r[10] = a[0] * b[10]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6]  + a[4] * b[9] ;
	
	
	return r;
}

double * conga_op_35_131(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_noni
	r[9] = a[0] * b[9] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[2] * b[9]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[3] * b[9]  + a[4] * b[2] ;
	
	
	//_e123no
	r[13] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[13]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_35_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[1] * b[3] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[2] * b[3] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[4] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[4] * b[13]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[12] = a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[13] = a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_35_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e1noni
	r[9] = a[4] * b[0] ;
	
	
	//_e2noni
	r[10] = a[4] * b[1] ;
	
	
	//_e3noni
	r[11] = a[4] * b[2] ;
	
	
	//_e123
	r[12] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[4] * b[9]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[4] * b[2] ;
	
	
	//_e123
	r[13] = a[0] * b[13]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[4] * b[13]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[10]  + a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  + a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[12]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[13]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[0] * b[14]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_35_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4] ;
	
	
	//_e12no
	r[5] = a[0] * b[5]  + a[1] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[6]  + a[2] * b[3] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[8] = a[0] * b[8]  + a[1] * b[4] ;
	
	
	//_e13ni
	r[9] = a[0] * b[9]  + a[2] * b[4] ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[4] ;
	
	
	//_e1noni
	r[11] = a[0] * b[11]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[12] = a[0] * b[12]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[13] = a[0] * b[13]  + a[4] * b[2] ;
	
	
	//_e123
	r[14] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[15] = a[0] * b[14]  + a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[11]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_138(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[0] * b[6] ;
	
	
	//_e2noni
	r[7] = a[0] * b[7] ;
	
	
	//_e3noni
	r[8] = a[0] * b[8] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_35_139(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_noni
	r[6] = a[0] * b[6] ;
	
	
	//_e12noni
	r[7] = a[0] * b[7]  + a[1] * b[6] ;
	
	
	//_e13noni
	r[8] = a[0] * b[8]  + a[2] * b[6] ;
	
	
	//_e23noni
	r[9] = a[0] * b[9]  + a[3] * b[6] ;
	
	
	//_e123no
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[11] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_140(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[4] ;
	
	
	//_e3no
	r[5] = a[0] * b[5] ;
	
	
	//_e1ni
	r[6] = a[0] * b[6] ;
	
	
	//_e2ni
	r[7] = a[0] * b[7] ;
	
	
	//_e3ni
	r[8] = a[0] * b[8] ;
	
	
	//_noni
	r[9] = a[0] * b[9] ;
	
	
	//_e12noni
	r[10] = a[0] * b[10]  + a[1] * b[9]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[11] = a[0] * b[11]  + a[2] * b[9]  + a[4] * b[1] ;
	
	
	//_e23noni
	r[12] = a[0] * b[12]  + a[3] * b[9]  + a[4] * b[2] ;
	
	
	//_e123no
	r[13] = a[0] * b[13]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	//_e123ni
	r[14] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_op_35_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e1noni
	r[9] = a[4] * b[0] ;
	
	
	//_e2noni
	r[10] = a[4] * b[1] ;
	
	
	//_e3noni
	r[11] = a[4] * b[2] ;
	
	
	//_e123
	r[12] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5]  + a[4] * b[2] ;
	
	
	//_e123
	r[6] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3]  + a[4] * b[6]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1ni
	r[4] = a[0] * b[4] ;
	
	
	//_e2ni
	r[5] = a[0] * b[5] ;
	
	
	//_e3ni
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[9] = a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[10] = a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123ni
	r[11] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_35_144(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[1] ;
	
	
	//_e23ni
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_145(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e123ni
	r[7] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[4] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[4] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[6]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_noni
	r[7] = a[4] * b[0] ;
	
	
	//_e12noni
	r[8] = a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[9] = a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[10] = a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123no
	r[11] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_35_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[4] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[4] * b[2] ;
	
	
	//_e123
	r[9] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[6]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_149(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0] ;
	
	
	//_e13
	r[1] = a[0] * b[1] ;
	
	
	//_e23
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[4] * b[0] ;
	
	
	//_e13noni
	r[4] = a[4] * b[1] ;
	
	
	//_e23noni
	r[5] = a[4] * b[2] ;
	
	
	//_e123no
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_op_35_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e1noni
	r[6] = a[4] * b[0] ;
	
	
	//_e2noni
	r[7] = a[4] * b[1] ;
	
	
	//_e3noni
	r[8] = a[4] * b[2] ;
	
	
	//_e123
	r[9] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[10] = a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_151(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_152(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[0] * b[7]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_35_153(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[0] * b[1] ;
	
	
	//_e12no
	r[2] = a[0] * b[2]  + a[1] * b[0] ;
	
	
	//_e13no
	r[3] = a[0] * b[3]  + a[2] * b[0] ;
	
	
	//_e23no
	r[4] = a[0] * b[4]  + a[3] * b[0] ;
	
	
	//_e12ni
	r[5] = a[0] * b[5]  + a[1] * b[1] ;
	
	
	//_e13ni
	r[6] = a[0] * b[6]  + a[2] * b[1] ;
	
	
	//_e23ni
	r[7] = a[0] * b[7]  + a[3] * b[1] ;
	
	
	//_e1noni
	r[8] = a[0] * b[8] ;
	
	
	//_e2noni
	r[9] = a[0] * b[9] ;
	
	
	//_e3noni
	r[10] = a[0] * b[10] ;
	
	
	//_e123noni
	r[11] = a[0] * b[11]  + a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[8] ;
	
	
	return r;
}

double * conga_op_35_154(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[7]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_155(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_e12no
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13no
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23no
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1noni
	r[4] = a[0] * b[4] ;
	
	
	//_e2noni
	r[5] = a[0] * b[5] ;
	
	
	//_e3noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_35_156(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e12noni
	r[3] = a[0] * b[3] ;
	
	
	//_e13noni
	r[4] = a[0] * b[4] ;
	
	
	//_e23noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[1] ;
	
	
	//_e2no
	r[5] = a[0] * b[2] ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[0] * b[4] ;
	
	
	//_e2ni
	r[8] = a[0] * b[5] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[8]  + a[1] * b[7]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[9]  + a[2] * b[7]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[10]  + a[3] * b[7]  + a[7] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e123ni
	r[15] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	return r;
}

double * conga_op_35_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[0] * b[6] ;
	
	
	//_e13ni
	r[7] = a[0] * b[7] ;
	
	
	//_e23ni
	r[8] = a[0] * b[8] ;
	
	
	//_e1noni
	r[9] = a[4] * b[0] ;
	
	
	//_e2noni
	r[10] = a[4] * b[1] ;
	
	
	//_e3noni
	r[11] = a[4] * b[2] ;
	
	
	//_e123
	r[12] = a[0] * b[9]  + a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[4] * b[9]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[10]  + a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  + a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[12]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123no
	r[14] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[0] * b[13]  + a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_35_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7]  + a[1] * b[3] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8]  + a[2] * b[3] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[4] * b[2] ;
	
	
	//_e123
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13no
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23no
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e12ni
	r[7] = a[0] * b[7] ;
	
	
	//_e13ni
	r[8] = a[0] * b[8] ;
	
	
	//_e23ni
	r[9] = a[0] * b[9] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[4] * b[0] ;
	
	
	//_e2noni
	r[11] = a[0] * b[11]  + a[4] * b[1] ;
	
	
	//_e3noni
	r[12] = a[0] * b[12]  + a[4] * b[2] ;
	
	
	//_e123
	r[13] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[10]  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[7] * b[0] ;
	
	
	return r;
}

double * conga_op_35_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  + a[2] * b[0] ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e1no
	r[4] = a[0] * b[4] ;
	
	
	//_e2no
	r[5] = a[0] * b[5] ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[0] * b[7] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9] ;
	
	
	//_noni
	r[10] = a[4] * b[0] ;
	
	
	//_e12noni
	r[11] = a[0] * b[10]  + a[4] * b[1]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[12] = a[0] * b[11]  + a[4] * b[2]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[13] = a[0] * b[12]  + a[4] * b[3]  + a[7] * b[0] ;
	
	
	//_e123no
	r[14] = a[0] * b[13]  + a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[4] ;
	
	
	//_e123ni
	r[15] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[7] ;
	
	
	return r;
}

double * conga_op_35_163(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[3] ;
	
	
	//_e12noni
	r[4] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	//_e13noni
	r[5] = a[0] * b[5]  + a[2] * b[3] ;
	
	
	//_e23noni
	r[6] = a[0] * b[6]  + a[3] * b[3] ;
	
	
	//_e123no
	r[7] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_35_164(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[0] * b[4] ;
	
	
	//_e3noni
	r[5] = a[0] * b[5] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_165(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[3] ;
	
	
	//_e13ni
	r[4] = a[0] * b[4] ;
	
	
	//_e23ni
	r[5] = a[0] * b[5] ;
	
	
	//_e123
	r[6] = a[0] * b[6] ;
	
	
	//_e123noni
	r[7] = a[4] * b[6] ;
	
	
	return r;
}

double * conga_op_35_166(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[0] * b[1] ;
	
	
	//_e3no
	r[2] = a[0] * b[2] ;
	
	
	//_e1ni
	r[3] = a[0] * b[3] ;
	
	
	//_e2ni
	r[4] = a[0] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[5] ;
	
	
	//_noni
	r[6] = a[0] * b[6] ;
	
	
	//_e12noni
	r[7] = a[1] * b[6] ;
	
	
	//_e13noni
	r[8] = a[2] * b[6] ;
	
	
	//_e23noni
	r[9] = a[3] * b[6] ;
	
	
	//_e123no
	r[10] = a[1] * b[2]  + a[2] * b[1]  * -1  + a[3] * b[0] ;
	
	
	//_e123ni
	r[11] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_35_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0] ;
	
	
	//_e1
	r[1] = a[0] * b[1] ;
	
	
	//_e2
	r[2] = a[0] * b[2] ;
	
	
	//_e3
	r[3] = a[0] * b[3] ;
	
	
	//_no
	r[4] = a[0] * b[4] ;
	
	
	//_ni
	r[5] = a[0] * b[5] ;
	
	
	//_e12
	r[6] = a[0] * b[6]  + a[1] * b[0] ;
	
	
	//_e13
	r[7] = a[0] * b[7]  + a[2] * b[0] ;
	
	
	//_e23
	r[8] = a[0] * b[8]  + a[3] * b[0] ;
	
	
	//_e1no
	r[9] = a[0] * b[9] ;
	
	
	//_e2no
	r[10] = a[0] * b[10] ;
	
	
	//_e3no
	r[11] = a[0] * b[11] ;
	
	
	//_e1ni
	r[12] = a[0] * b[12] ;
	
	
	//_e2ni
	r[13] = a[0] * b[13] ;
	
	
	//_e3ni
	r[14] = a[0] * b[14] ;
	
	
	//_noni
	r[15] = a[0] * b[15]  + a[4] * b[0] ;
	
	
	//_e12no
	r[16] = a[0] * b[16]  + a[1] * b[4] ;
	
	
	//_e13no
	r[17] = a[0] * b[17]  + a[2] * b[4] ;
	
	
	//_e23no
	r[18] = a[0] * b[18]  + a[3] * b[4] ;
	
	
	//_e12ni
	r[19] = a[0] * b[19]  + a[1] * b[5] ;
	
	
	//_e13ni
	r[20] = a[0] * b[20]  + a[2] * b[5] ;
	
	
	//_e23ni
	r[21] = a[0] * b[21]  + a[3] * b[5] ;
	
	
	//_e1noni
	r[22] = a[0] * b[22]  + a[4] * b[1] ;
	
	
	//_e2noni
	r[23] = a[0] * b[23]  + a[4] * b[2] ;
	
	
	//_e3noni
	r[24] = a[0] * b[24]  + a[4] * b[3] ;
	
	
	//_e123
	r[25] = a[0] * b[25]  + a[1] * b[3]  + a[2] * b[2]  * -1  + a[3] * b[1] ;
	
	
	//_e12noni
	r[26] = a[0] * b[26]  + a[1] * b[15]  + a[4] * b[6]  + a[5] * b[0] ;
	
	
	//_e13noni
	r[27] = a[0] * b[27]  + a[2] * b[15]  + a[4] * b[7]  + a[6] * b[0] ;
	
	
	//_e23noni
	r[28] = a[0] * b[28]  + a[3] * b[15]  + a[4] * b[8]  + a[7] * b[0] ;
	
	
	//_e123no
	r[29] = a[0] * b[29]  + a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[9] ;
	
	
	//_e123ni
	r[30] = a[0] * b[30]  + a[1] * b[14]  + a[2] * b[13]  * -1  + a[3] * b[12] ;
	
	
	//_e123noni
	r[31] = a[0] * b[31]  + a[1] * b[24]  + a[2] * b[23]  * -1  + a[3] * b[22]  + a[4] * b[25]  + a[5] * b[3]  + a[6] * b[2]  * -1  + a[7] * b[1] ;
	
	
	return r;
}

