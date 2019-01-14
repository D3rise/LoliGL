#include "loli_opengl_consts.c"

void loli_GL__glutInit(loli_state * state) 
{
    char * argv[1];
    int    argc = 1;

    argv[0] = strdup(loli_arg_string_raw(state, 0));

    glutInit(&argc, argv);
}

void loli_GL__glutInitDisplayMode(loli_state * state) 
{
    unsigned int mode = (unsigned int) loli_arg_integer(state, 0);

    glutInitDisplayMode(mode);
}

void loli_GL__glutInitWindowSize(loli_state * state) 
{
    double width = loli_arg_integer(state, 0);
    double height = loli_arg_integer(state, 1);

    glutInitWindowSize((int) width,(int) height);
}

void loli_GL__glutInitWindowPosition(loli_state * state) 
{
    double x = loli_arg_integer(state, 0);
    double y = loli_arg_integer(state, 1);

    glutInitWindowPosition((int) x,(int) y);
}

void loli_GL__glutCreateWindow(loli_state * state) 
{
    char * title = loli_arg_string_raw(state, 0);

    loli_push_integer(state, glutCreateWindow(title));
    loli_return_top(state);
}

void loli_GL__glutMainLoop(loli_state * state) 
{
    glutMainLoop();
}

loli_state * _loli_state;

static void __fn_glutDisplayFunc() 
{
    if (_loli_state == 0) return;

    loli_call_prepare(_loli_state, loli_find_function(_loli_state, "glutDisplayFunc"));
    loli_call(_loli_state, 1);
}

void loli_GL__glutDisplayFunc(loli_state * state) 
{
    _loli_state = state;

    glutDisplayFunc(__fn_glutDisplayFunc);
}

void loli_GL__end(loli_state * state) 
{
    glEnd();
}


void loli_GL__flush(loli_state * state) 
{
    glFlush();
}
