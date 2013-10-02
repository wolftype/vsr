//
//  Twists.cpp
//  Versor
//
//  Created by Pablo Colapinto on 12/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"
#include "vsr_motor.h"

#include "vsr_field.h"

#include "vsr_tests.h"
#include <iostream>

using namespace vsr;

void test(GLVApp &app){
    Dll aa = DLN(0,1,0).sp(Gen::trs(5,0,0));
    Dll bb = DLN(0,0,1).sp(Gen::trs(-5,0,0));  

    Mot m = bb/aa;
    //cout << Gen::log(m) << endl; 
 
     
        Dll rq;						//tmp dll
        Drv cperp, cpara;
        Dll q = m;						//extract grade 2 part
        
        double  ac = acos( m[0] );		//angle of rotor	
        double  den = Math::sinc(ac);
        double  den2 = ac * ac * den;
        
        
        Biv b =  ( Ori(1) <= ( q * Inf(1) ) ) / den * -1.0;			//negative necessary . dll? . . 
        Dll tq = b * q;
        
//        cout << b << endl;
//        cout << tq << endl;
        
        if (den2 == 0 ) {
            //cperp = b * -1.0;
            cpara = q;// * -1.0;
        } else {
            cperp = ( b * Drt(m[7]) ) / ( ( den2 )  * -1.0 );	//perpendicular (along line of axis)
            cpara = ( b * tq ) / ( ( den2 )  * -1.0 );			//parallel      (in plane of rotation)
        }
        
        cout << ((b * Drt(m[7])/ ( ( den2 )  * -1.0 ) )) << endl; 
        
        Drv c = cperp + cpara;
        rq += (b);
        rq += c;

         
}

void twists(GLVApp& app){
    
    static double period, pitch;
    SET
        app.gui(period,"period",-10,10)(pitch,"pitch",-10,10);
    END 
    
    //A Space Frame
    static Frame frame;
    app.interface.touch(frame);
    
    //The Dual Line y axis of the space frame
    Dll dll = frame.dly();
    DRAW3(dll,1,0,0);
    //Draw Y Vector
    Draw::Y(frame);
    
    //A Twist around and along that axis
    DualLine twist = Twist::Along( dll, period * PI, pitch * PI);
    
    //Another Space Frame at 1,0,0
    static Frame sframe( PT(1,-2,0) );
    app.interface.touch(sframe);
    
    for (int i = 0; i < 100; ++i){
        double t= 1.0 * i / 100;
        
        Motor m = Gen::mot( twist * t );
        
        //A Space Frame built directly from the Motor generated by the twist, and
        //a start frame
        Frame nf( m * sframe.mot());
        DRAW(nf);
    }
    
    app.text("Grab ('G') or Rotate ('R') Frame or Vector. 'Q' To Let Go. ",50,70);
}


void twistfield(GLVApp& app){

    static Field<Dll> f(2,2,2,3);
    static Frame frame[8];
    
    SET
        ITJ(i,8)
            frame[i].set(f.grid(i), Rot(1,0,0,0) );
            frame[i].scale(.2);
        END
    END
    
    ITJ(i,8)
        DRAWANDTOUCH(frame[i]);
        f[i] = frame[i].dll();
    END
    
    IT3i(10,10,10)
        Dll td = f.vol(u,v,w);
        Frame tf( td );
        tf.scale(.2);
        DRAW(tf);
    END3
    
    app.text("Grab ('G') or Rotate ('R') Corner Frames. 'Q' To Let Go. ",50,70);
}

void GLVApp :: onDraw() {

//    test(*this);
    
    static bool bBasic;
    SET
        gui(bBasic,"Basic Twist");
        bBasic = 0;
    END 
    
    if (bBasic) twists(*this);
    else twistfield(*this);
    
    text("A Field of Twists and A 'Basic' Twist (hit 'basic' button)",50,50);
}

int main(int argc, const char * argv[]) {
     
//    File::setdir( argv[0] );       
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.2,.2,.2);
    		
	Window * win = new Window(600,700,"Twists",&glv);
    GLVApp * app = new GLVApp(win);    
    
    glv << app;
        
    Application::run();

    return 0;
}
