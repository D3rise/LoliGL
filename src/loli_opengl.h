#include "loli.h"
#include <GL/glut.h>
#include <string.h>

// Glut
void loli_GL__glutInit(loli_state *);
void loli_GL__glutInitDisplayMode(loli_state *);
void loli_GL__glutInitWindowSize(loli_state *);
void loli_GL__glutInitWindowPosition(loli_state *);
void loli_GL__glutCreateWindow(loli_state *);
void loli_GL__glutMainLoop(loli_state *);
void loli_GL__glutDisplayFunc(loli_state *);

// OpenGL
void loli_GL__end(loli_state *);
void loli_GL__flush(loli_state *);

void loli_GL_var_GLUT_RGB(loli_state *);
void loli_GL_var_GLUT_RGBA(loli_state *);
void loli_GL_var_GLUT_INDEX(loli_state *);
void loli_GL_var_GLUT_SINGLE(loli_state *);
void loli_GL_var_GLUT_DOUBLE(loli_state *);
void loli_GL_var_GLUT_ACCUM(loli_state *);
void loli_GL_var_GLUT_ALPHA(loli_state *);
void loli_GL_var_GLUT_DEPTH(loli_state *);
void loli_GL_var_GLUT_STENCIL(loli_state *);
void loli_GL_var_GLUT_MULTISAMPLE(loli_state *);
void loli_GL_var_GLUT_STEREO(loli_state *);
void loli_GL_var_GLUT_LUMINANCE(loli_state *);

loli_call_entry_func loli_GL_call_table[] = {
        NULL,
        loli_GL__glutInit,
        loli_GL__glutInitDisplayMode,
        loli_GL__glutInitWindowSize,
        loli_GL__glutInitWindowPosition,
        loli_GL__glutCreateWindow,
        loli_GL__glutMainLoop,
        loli_GL__glutDisplayFunc,

        // TODO: delete it
        loli_GL__example,

        loli_GL__end,
        loli_GL__flush,

        loli_GL_var_GLUT_RGB,
        loli_GL_var_GLUT_RGBA,
        loli_GL_var_GLUT_INDEX,
        loli_GL_var_GLUT_SINGLE,
        loli_GL_var_GLUT_DOUBLE,
        loli_GL_var_GLUT_ACCUM,
        loli_GL_var_GLUT_ALPHA,
        loli_GL_var_GLUT_DEPTH,
        loli_GL_var_GLUT_STENCIL,
        loli_GL_var_GLUT_MULTISAMPLE,
        loli_GL_var_GLUT_STEREO,
        loli_GL_var_GLUT_LUMINANCE
};

const char * loli_GL_info_table[] = {
        "\0\0"
        ,"F\0glutInit\0(String)"
        ,"F\0glutInitDisplayMode\0(Integer)"
        ,"F\0glutInitWindowSize\0(Integer, Integer)"
        ,"F\0glutInitWindowPosition\0(Integer, Integer)"
        ,"F\0glutCreateWindow\0(String): Integer"
        ,"F\0glutMainLoop"
        ,"F\0glutDisplayFunc"

        // TODO: delete it
        ,"F\0example"

        ,"F\0end"
        ,"F\0flush"

        ,"R\0GLUT_RGB\0Integer"
        ,"R\0GLUT_RGBA\0Integer"
        ,"R\0GLUT_INDEX\0Integer"
        ,"R\0GLUT_SINGLE\0Integer"
        ,"R\0GLUT_DOUBLE\0Integer"
        ,"R\0GLUT_ACCUM\0Integer"
        ,"R\0GLUT_ALPHA\0Integer"
        ,"R\0GLUT_DEPTH\0Integer"
        ,"R\0GLUT_STENCIL\0Integer"
        ,"R\0GLUT_MULTISAMPLE\0Integer"
        ,"R\0GLUT_STEREO\0Integer"
        ,"R\0GLUT_LUMINANCE\0Integer"
        ,"Z"
};
