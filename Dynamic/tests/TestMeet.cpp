//
//  TestMeet.cpp
//  vsr
//
//  Created by Pablo Colapinto on 3/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "vsr.h"
#include "GLVInterfaceImpl.h"

using namespace vsr;
using namespace glv;


Window * win;
GLVApp * app;

//Two Circles
void circles(GLVApp& app){
    
    Cir x = CXY(1);
    Dll dll = (Inf(1) <= x); 
    Mot_Trv mtt = x * x.involute(); 
    cout << mtt / (dll * dll) * -1.0 << endl;
    
    cout << Ro::siz(x, false ) << endl; 
    x.draw();
    
    //CIRCLE in XY Plane translated to 1,0,0
    static Cir c1 = CXY(1).trs(1,0,0);
    //CIRCLE in XY Plane translated to -1,0,0
    static Cir c2 = CXY(1).trs(-1,0,0);
    
    //Interface -- Click and Hit "G", "R", or "S" to grab, rotate, or scale. Hit "Q" to deselect
    app.interface.touch(c1);
    app.interface.touch(c2);
    
    c1.draw(0,1,0);
    c2.draw(0,1,0);
    
    Dls s1 = Ro::sur(c1);
 
    //Meet is Dual of Wedge Product Between Duals.
    Par p = (c2.dual() ^ s1).dual();
    
    cout << Fl::dlp_ortho_cir(c1, PI) << endl;    
                
    p.draw(1,0,1);
}

void circle_line(GLVApp& app){
    static Cir c1 = CXY(1);
    static Dll dll = DLN(1,0,0);//.trs(,0,0);
    
    app.interface.touch(c1); app.interface.touch(dll);
    
    Dls p = ( dll ^ c1.dual() ).dual();
    
    c1.draw(0,1,0); dll.draw(1,0,0);
    
    p.draw();
    
    cout << Ro::siz(p,true) << endl; 
}

void circle_sphere(GLVApp & app){
    
    //CIRCLE in XY Plane translated to 1,0,0
    static Cir c = CXY(1).trs(1,0,0);
    //DUAL SPHERE at -1,0,0 (with default radius of 1)
    static Dls s = Ro::dls3(-1,0,0); 

    //Meet is Dual of Wedge Product Between Duals.
    State m = ( c.dual() ^ s ).dual();
    
    //Interface -- Click and Hit "G", "R", or "S" to grab, rotate, or scale.  Hit "Q" to deselect
    app.interface.touch(c);
    app.interface.touch(s);
    
    c.draw(0,1,0);
    s.draw(0,0,1,.5);
    m.draw(1,0,1);
}

void lines(GLVApp& app){
    //Dual Line in Y Direction Through Point 1,0,0
    static Dll d1 = DLN(0, 1, 0).trs(-1,0,0);
    //Dual Line in Y Direction Through Point -1,0,0
    static Dll d2 = DLN(0, 1, 0).trs(1,0,0);
    
    app.interface.touch(d1);
    app.interface.touch(d2);
    
    d1.draw(0,1,0);
    d2.draw(0,1,0);
    
    
//    static Pnt pnt = PX(.3); app.interface.touch(pnt); pnt.draw(1,0,0);    
//    cout << pnt << (pnt^Inf(1)) << endl; 
    
    //PLUCKER REPRESENTATION
//    Drv drv = Fl::dir(d1,true);
//    Drv mom(d1);
    //Vec t(d1[2],-d1[1],d1[0]); // DIRECTION = Biv(Dll d).dual()
    //Vec z(d1[3],d1[4],d1[5]);  // MOMENT    = Drv(Dll d)
//    Vec b( ( Vec(drv)^Vec(mom) ).dual() ); 
//    b.draw(1,1,1);
    
    //Dual Plane Through Origin
    Dlp dlp = Vec(0,0,0).null() <= d1;     
    dlp.draw();
    
    //Flat Point intersection of plane and line
    State s = ( d2 ^ dlp ).dual();
//    cout << s << endl; 
//    cout << ( Inf(1) <= s ) << endl;
    Pnt p = s.null(); p.draw(1,0,0);

    //    Fl::loc(d1, Ori(1), true);
    
    
//    cout << d1 << drv3 << endl; 
//    cout << d1 << vec1 << endl; 
    
//    cout << ( d1 ^ d2 ) << endl; 
//    cout << ( d1 * d2 ) << endl; 
//    cout << ( d1 <= d2 ) << endl; 

}

void circle_clock(GLVApp& app){
    
    static float theta, theta2;
    SET
    app.gui.add(DIALER, "theta", theta, -PI, PI);
    app.gui.add(DIALER, "theta2", theta2, -PI, PI);
    END 
    
    static Cir c = CXY(1);
    app.interface.touch(c);
    c.draw(0,1,0);
    
    ////////////////////////////////
    
    Pnt p = Ro::pnt_cir(c, theta);
    p.draw(0,1,1);
    Pnt p2 = Ro::pnt_cir(c, theta2);
    p2.draw(0,1,1);
    
    glColor3f(1,1,1);
    Draw::SegPnts(c, p, p2);
    
    
    Dll s = Ro::ax(c);
    s.draw();
    
    Par par = c.dual();
    
    Dlp dlp = Ro::car(c);
    
    Biv us = Vec(Drv(par)) ^ Vec(dlp);
    us.draw();
    
    Biv(par).draw(0,0,1);
    Drv(par).draw(1,0,0);
    Tnv(par).draw(1,1,1);
    
    Fl::dlp_ortho_cir(c, theta).draw(0,1,0);
    //Fl::dlp_pnt_cir(p, c).draw(0,0,1);
    
    
}

void sphericalCoord(GLVApp& app){
    
    static Frame f;
    
    app.interface.touch(f);
    
    f.draw();
    
    f.bound().draw();
    
    Dls s = f.bound();
  
    
}


void two_points(GLVApp& app){
    //is a point between two points on a circle?
    
    
    static Cir cir = CXY(1);
    cir.draw();
    
    static float tha,thb,thc;
    SET app.gui(tha, "tha", -PI, PI)(thb, "thb", -PI, PI)(thc, "thc", -PI, PI); END 
    
    Pnt pa = Ro::pnt_cir(cir, tha);
    Pnt pb = Ro::pnt_cir(cir, thb);
    Pnt pc = Ro::pnt_cir(cir, thc);
    
    pa.draw(); pb.draw(); pc.draw();
    
    Vec dp = pa - pb; //dlp.draw();
    Vec va = pa <= Ro::ax(cir);
    Vec vc = pc <= Ro::ax(cir);

    double n = Op::sca( dp <= va );
    double n2 = Op::sca( dp <= vc );
    cout << n << " " << n2 << endl; 
    if (n2 > n ) cout << "YUP" << endl; 
    
}

void htest(GLVApp& app){
    static Dls dls = Ro::dls3(0,0,0);
    //DRAW4(dls,1,0,0,.1);
    
    int num = 20;
    for (int i = 0; i < num; ++i){
        double t = 1.0 * i/num ;
        Par p = Ro::par( dls, Vec::y.rot( Biv::xy * t * PI) );
        Pnt pnt =  Ro::split1(p);
        Cir tc = Ta::at(dls.undual(),pnt.null(), false);
        cout << ( Inf(1) <= tc )  << endl; 
        
        ( Inf(1) <= tc ).draw();
        
        //DRAW3( pnt.null(),0,1,0 );
        //DRAW4(pnt,1,0,0,.05);
    }
}



void GLVApp :: onDraw(){
//    static bool bCir, bCirSph, bLines;
//    
//    SET
//        gui.add(BUTTON, "Circles", bCir);
//        gui.add(BUTTON, "Circle Sphere", bCirSph);
//        gui.add(BUTTON, "Lines", bLines);
//    END
//
//        if (bCir) circles(*this);
//        if (bCirSph) circle_sphere(*this);
//        if (bLines) lines(*this);

//    htest(*this);

    Cir c = CXY(1); c.draw();
    Par p  = Tnv(1,1,0).trs(0,1,0);
    
    for(int i = 0; i < 100; ++i){
        double t = 1.0 * i/100;
        Cir nc = c.sp( Gen::tpar( p  * -t ) );
        nc.draw();
    }
    
//    cout << p << endl; 
    //Ta::at(ca,Ro::null(1,
//    circles(*this);
//    circle_line(*this);
 //   two_points(*this);
//    circle_clock(*this);
   // sphericalCoord(*this);
}


int main() {
    
    /* Bind CGA Framework */
	CongaTypes::BindAll();
    
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);		
	win = new Window(500,500,"VSR",&glv);    
    app = new GLVApp(win);    
    glv << app;
    
    Application::run();
    
    return 0;
}