/*
 *  vsr_gxlib.h
 *  graphics
 *
 *  Created by Pablo Colapinto on 10/6/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef VSR_GXLIB_INCLUDED
#define VSR_GXLIB_INCLUDED

   // #define IOS_PROJECT
    #ifdef IOS_PROJECT

        #include <OpenGLES/ES1/gl.h>
        #include <OpenGLES/ES1/glext.h>

        #include <OpenGLES/ES2/gl.h>
        #include <OpenGLES/ES2/glext.h>

//        #define glGenFramebuffers glGenFramebuffersOES
//        #define glBindFramebuffer glBindFramebufferOES
//        #define GL_FRAMEBUFFER GL_FRAMEBUFFER_OES
//        #define GL_RENDERBUFFER GL_RENDERBUFFER_OES
//        #define GL_COLOR_ATTACHMENT0 GL_COLOR_ATTACHMENT0_OES

        #define glOrtho glOrthof
        #define glGenVertexArraysAPPLE glGenVertexArraysOES 
        #define glBindVertexArrayAPPLE glBindVertexArrayOES
        #define glPointSizePointer glPointSizePointerOES
        #define glClearDepth glClearDepthf

        //#include "vsr_gl.h"

    #else

        #include <OpenGL/OpenGL.h>
        #include <GLUT/GLUT.h>

        //#include "vsr_gl.h"


    #endif

#endif

/* from cocos2d
 #import <Availability.h>
 00031 
 00032 #ifdef __IPHONE_OS_VERSION_MAX_ALLOWED
 00033 #import <OpenGLES/ES2/gl.h>
 00034 #import <OpenGLES/ES2/glext.h>
 00035 #import <OpenGLES/EAGL.h>
 00036 #import "iOS/EAGLView.h"
 00037 
 00038 #elif defined(__MAC_OS_X_VERSION_MAX_ALLOWED)
 00039 #import <OpenGL/gl.h>
 00040 #import <OpenGL/glu.h>
 00041 #import <Cocoa/Cocoa.h> // needed for NSOpenGLView
 00042 #import "Mac/MacGLView.h"
 00043 #endif
 00044 
 00045 
 00046 // iOS
 00047 #ifdef __IPHONE_OS_VERSION_MAX_ALLOWED
 00048 #define CC_GLVIEW                                       EAGLView
 00049 #define glClearDepth                            glClearDepthf
 00050 #define glGenerateMipmap                        glGenerateMipmapOES
 00051 #define glGenFramebuffers                       glGenFramebuffersOES
 00052 #define glBindFramebuffer                       glBindFramebufferOES
 00053 #define glFramebufferTexture2D          glFramebufferTexture2DOES
 00054 #define glDeleteFramebuffers            glDeleteFramebuffersOES
 00055 #define glCheckFramebufferStatus        glCheckFramebufferStatusOES
 00056 #define glDeleteVertexArrays            glDeleteVertexArraysOES
 00057 #define glGenVertexArrays                       glGenVertexArraysOES
 00058 #define glBindVertexArray                       glBindVertexArrayOES
 00059 
 00060 #define CC_GL_FRAMEBUFFER                       GL_FRAMEBUFFER_OES
 00061 #define CC_GL_FRAMEBUFFER_BINDING       GL_FRAMEBUFFER_BINDING_OES
 00062 #define CC_GL_COLOR_ATTACHMENT0         GL_COLOR_ATTACHMENT0_OES
 00063 #define CC_GL_FRAMEBUFFER_COMPLETE      GL_FRAMEBUFFER_COMPLETE_OES
 00064 
 00065 // Mac
 00066 #elif defined(__MAC_OS_X_VERSION_MAX_ALLOWED)
 00067 #define CC_GLVIEW                                       MacGLView
 00068 #define glDeleteVertexArrays            glDeleteVertexArraysAPPLE
 00069 #define glGenVertexArrays                       glGenVertexArraysAPPLE
 00070 #define glBindVertexArray                       glBindVertexArrayAPPLE
 00071 
 00072 #define CC_GL_FRAMEBUFFER                       GL_FRAMEBUFFER
 00073 #define CC_GL_FRAMEBUFFER_BINDING       GL_FRAMEBUFFER_BINDING
 00074 #define CC_GL_COLOR_ATTACHMENT0         GL_COLOR_ATTACHMENT0
 00075 #define CC_GL_FRAMEBUFFER_COMPLETE      GL_FRAMEBUFFER_COMPLETE
 00076 
 00077 #endif
 
*/