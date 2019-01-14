#include "loli_opengl.h"

void loli_GL_var_GLUT_RGB(loli_state * state) 
{
    loli_push_integer(state, GLUT_RGB);
}

void loli_GL_var_GLUT_RGBA(loli_state * state) 
{
    loli_push_integer(state, GLUT_RGBA);
}

void loli_GL_var_GLUT_INDEX(loli_state * state) 
{
    loli_push_integer(state, GLUT_INDEX);
}

void loli_GL_var_GLUT_SINGLE(loli_state * state) 
{
    loli_push_integer(state, GLUT_SINGLE);
}

void loli_GL_var_GLUT_DOUBLE(loli_state * state) 
{
    loli_push_integer(state, GLUT_DOUBLE);
}

void loli_GL_var_GLUT_ACCUM(loli_state * state)
{
    loli_push_integer(state, GLUT_ACCUM);
}

void loli_GL_var_GLUT_ALPHA(loli_state * state) 
{
    loli_push_integer(state, GLUT_ALPHA);
}

void loli_GL_var_GLUT_DEPTH(loli_state * state) 
{
    loli_push_integer(state, GLUT_DEPTH);
}

void loli_GL_var_GLUT_STENCIL(loli_state * state) 
{
    loli_push_integer(state, GLUT_STENCIL);
}

void loli_GL_var_GLUT_MULTISAMPLE(loli_state * state) 
{
    loli_push_integer(state, GLUT_MULTISAMPLE);
}

void loli_GL_var_GLUT_STEREO(loli_state * state) 
{
    loli_push_integer(state, GLUT_STEREO);
}

void loli_GL_var_GLUT_LUMINANCE(loli_state * state) 
{
    loli_push_integer(state, GLUT_LUMINANCE);
}
