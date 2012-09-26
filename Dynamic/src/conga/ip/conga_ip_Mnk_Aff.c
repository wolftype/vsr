
#include "conga_ip_Mnk_Aff.h"


double * conga_ip_114_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_3(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_4(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_114_5(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_6(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[0] ;
	
	
	//_e13
	r[1] = a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_114_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0]  + a[3] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	//_e123
	r[6] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_114_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_114_12(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_114_13(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_14(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_114_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_18(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_19(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0]  + a[3] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	//_e123
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_114_20(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_114_21(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_114_22(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_27(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_30(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_114_31(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_114_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_e123
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_114_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[1] * b[8]  + a[3] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_e12no
	r[4] = a[0] * b[8] ;
	
	
	//_e13no
	r[5] = a[0] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[10] ;
	
	
	//_e123
	r[7] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_114_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[5]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[5]  + a[3] * b[7]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[6]  + a[2] * b[7] ;
	
	
	//_no
	r[3] = a[0] * b[4] ;
	
	
	//_e12no
	r[4] = a[0] * b[5] ;
	
	
	//_e13no
	r[5] = a[0] * b[6] ;
	
	
	//_e23no
	r[6] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_114_36(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_37(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_114_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[11]  + a[3] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	//_e12no
	r[4] = a[0] * b[11] ;
	
	
	//_e13no
	r[5] = a[0] * b[12] ;
	
	
	//_e23no
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_114_39(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_114_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[11]  + a[3] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	//_e12no
	r[4] = a[0] * b[11] ;
	
	
	//_e13no
	r[5] = a[0] * b[12] ;
	
	
	//_e23no
	r[6] = a[0] * b[13] ;
	
	
	//_e123
	r[7] = a[0] * b[15] ;
	
	
	return r;
}

double * conga_ip_114_41(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_42(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_43(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[1]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1]  + a[3] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[1] ;
	
	
	//_e13no
	r[5] = a[0] * b[2] ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_114_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_45(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[3] ;
	
	
	//_e13
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[11]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[3] * b[15] ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[2] * b[15]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[15] ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[7]  + a[3] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_e12no
	r[4] = a[0] * b[7] ;
	
	
	//_e13no
	r[5] = a[0] * b[8] ;
	
	
	//_e23no
	r[6] = a[0] * b[9] ;
	
	
	//_e123
	r[7] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_114_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9] ;
	
	
	//_e123
	r[3] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_114_50(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_114_51(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1  + a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1  + a[1] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4]  + a[3] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e123
	r[7] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_114_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_56(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_e1no
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_59(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1  + a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[11]  + a[3] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	//_e12no
	r[4] = a[0] * b[11] ;
	
	
	//_e13no
	r[5] = a[0] * b[12] ;
	
	
	//_e23no
	r[6] = a[0] * b[13] ;
	
	
	//_e123
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_114_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[3] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[2] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[6]  + a[3] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e123
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_114_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[8]  + a[3] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_e12no
	r[4] = a[0] * b[8] ;
	
	
	//_e13no
	r[5] = a[0] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_114_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[2] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[3] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_114_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[3]  + a[3] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e123
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_114_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e123
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_114_70(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_71(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[9]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1  + a[3] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1  + a[1] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_73(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[1] ;
	
	
	//_e13
	r[1] = a[2] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[1] ;
	
	
	//_e123no
	r[3] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[3] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e123
	r[6] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_114_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[9]  + a[3] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e12no
	r[3] = a[0] * b[9] ;
	
	
	//_e13no
	r[4] = a[0] * b[10] ;
	
	
	//_e23no
	r[5] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_114_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[3] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e123
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_114_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[6]  + a[3] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_114_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_80(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e1no
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[3] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_114_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_114_83(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[4] ;
	
	
	//_e13
	r[1] = a[2] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[2] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[8]  + a[3] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_e12no
	r[4] = a[0] * b[8] ;
	
	
	//_e13no
	r[5] = a[0] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_114_86(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_114_87(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[3] * b[3] ;
	
	
	//_e13
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e1no
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[11]  + a[3] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	//_e12no
	r[4] = a[0] * b[11] ;
	
	
	//_e13no
	r[5] = a[0] * b[12] ;
	
	
	//_e23no
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_114_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[3] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[2] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e123
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_114_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[1] * b[8]  + a[3] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_e12no
	r[4] = a[0] * b[8] ;
	
	
	//_e13no
	r[5] = a[0] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_114_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[1] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_94(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_95(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1  + a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1  + a[1] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e1no
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[3] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_114_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e1no
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[6]  + a[3] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e123
	r[6] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_114_102(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1  + a[3] * b[4] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1  + a[1] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[4] ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[1] * b[7]  + a[3] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12no
	r[3] = a[0] * b[7] ;
	
	
	//_e13no
	r[4] = a[0] * b[8] ;
	
	
	//_e23no
	r[5] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_114_105(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  * -1  + a[3] * b[9] ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9] ;
	
	
	//_e123no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_106(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_114_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[2] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[6]  + a[3] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	return r;
}

double * conga_ip_114_108(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_109(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_114_110(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[3]  + a[3] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_114_111(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_112(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  + a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e1no
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_113(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0]  + a[3] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_114_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[3] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_114_116(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_114_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_114_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[11]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[2] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[9]  + a[3] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e12no
	r[3] = a[0] * b[9] ;
	
	
	//_e13no
	r[4] = a[0] * b[10] ;
	
	
	//_e23no
	r[5] = a[0] * b[11] ;
	
	
	//_e123
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_114_120(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1  + a[3] * b[7] ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1  + a[1] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[9]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_122(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_114_123(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0]  + a[3] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_114_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e1no
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_114_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[11]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[10]  + a[3] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_e12no
	r[4] = a[0] * b[10] ;
	
	
	//_e13no
	r[5] = a[0] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[12] ;
	
	
	//_e123
	r[7] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_114_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[3] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[1] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[10]  + a[3] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_e12no
	r[4] = a[0] * b[10] ;
	
	
	//_e13no
	r[5] = a[0] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[12] ;
	
	
	//_e123
	r[7] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_114_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7] ;
	
	
	//_e2
	r[1] = a[0] * b[8] ;
	
	
	//_e3
	r[2] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_114_134(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[10]  + a[3] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12no
	r[3] = a[0] * b[10] ;
	
	
	//_e13no
	r[4] = a[0] * b[11] ;
	
	
	//_e23no
	r[5] = a[0] * b[12] ;
	
	
	//_e123
	r[6] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_114_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[11]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[3] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[2] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[3] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[1] * b[9] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[7]  + a[3] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_e12no
	r[4] = a[0] * b[7] ;
	
	
	//_e13no
	r[5] = a[0] * b[8] ;
	
	
	//_e23no
	r[6] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_114_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[10]  + a[3] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_e12no
	r[4] = a[0] * b[10] ;
	
	
	//_e13no
	r[5] = a[0] * b[11] ;
	
	
	//_e23no
	r[6] = a[0] * b[12] ;
	
	
	return r;
}

double * conga_ip_114_141(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[2] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_114_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[1] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_145(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[1] * b[4]  + a[3] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_114_146(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_147(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_148(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_150(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_114_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[3] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_114_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e12
	r[1] = a[3] * b[7] ;
	
	
	//_e13
	r[2] = a[2] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1  + a[3] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1  + a[1] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e123
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_114_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[3] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_114_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[1] * b[8]  + a[3] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_e12no
	r[4] = a[0] * b[8] ;
	
	
	//_e13no
	r[5] = a[0] * b[9] ;
	
	
	//_e23no
	r[6] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_114_158(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  * -1  + a[3] * b[10] ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[8]  * -1  + a[1] * b[10] ;
	
	
	//_e123no
	r[3] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[10]  + a[3] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12no
	r[3] = a[0] * b[10] ;
	
	
	//_e13no
	r[4] = a[0] * b[11] ;
	
	
	//_e23no
	r[5] = a[0] * b[12] ;
	
	
	//_e123
	r[6] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_114_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[3] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[10]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[3] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[10]  + a[3] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12no
	r[3] = a[0] * b[10] ;
	
	
	//_e13no
	r[4] = a[0] * b[11] ;
	
	
	//_e23no
	r[5] = a[0] * b[12] ;
	
	
	return r;
}

double * conga_ip_114_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[4]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[3] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_e12no
	r[4] = a[0] * b[4] ;
	
	
	//_e13no
	r[5] = a[0] * b[5] ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_114_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[6] ;
	
	
	//_e13
	r[2] = a[2] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_165(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_114_166(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_114_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  * -1  + a[1] * b[22]  + a[2] * b[23]  + a[3] * b[24] ;
	
	
	//_e1
	r[1] = a[0] * b[12]  + a[2] * b[26]  * -1  + a[3] * b[27]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[13]  + a[1] * b[26]  + a[3] * b[28]  * -1 ;
	
	
	//_e3
	r[3] = a[0] * b[14]  + a[1] * b[27]  + a[2] * b[28] ;
	
	
	//_no
	r[4] = a[0] * b[15] ;
	
	
	//_e12
	r[5] = a[0] * b[19]  * -1  + a[3] * b[31] ;
	
	
	//_e13
	r[6] = a[0] * b[20]  * -1  + a[2] * b[31]  * -1 ;
	
	
	//_e23
	r[7] = a[0] * b[21]  * -1  + a[1] * b[31] ;
	
	
	//_e1no
	r[8] = a[0] * b[22]  * -1 ;
	
	
	//_e2no
	r[9] = a[0] * b[23]  * -1 ;
	
	
	//_e3no
	r[10] = a[0] * b[24]  * -1 ;
	
	
	//_e12no
	r[11] = a[0] * b[26] ;
	
	
	//_e13no
	r[12] = a[0] * b[27] ;
	
	
	//_e23no
	r[13] = a[0] * b[28] ;
	
	
	//_e123
	r[14] = a[0] * b[30] ;
	
	
	//_e123no
	r[15] = a[0] * b[31]  * -1 ;
	
	
	return r;
}

