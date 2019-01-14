# LoliGL

OpenGL & GLUT port for [loli programming language](https://github.com/txlyre/loli)

### Building

Copy ``libloli.so`` (``libloli.dll`` on windows) to ``bin`` directory and execute commands: 

```blyash
mkdir ./build               # make build directory
cmake -S ./ -B ./build      # generate make file to build directory
cd build && make            # compile LoliGL
```

Then in the build folder you can find ``GL.so`` (``GL.dll`` on windows) file.

### Using

Copy ``GL.so`` (``GL.dll`` on windows) to ``pkg`` directory on you`r loli sources.
Then import ``GL`` module from library.

#### Example: Creating window

```
import GL

fn glutDisplayFunc 
{
    sayln("glutDisplayFunc called")
}

GL.glutInit("Test OpenGL application in loli")
GL.glutInitDisplayMode(GL.GLUT_RGB | GL.GLUT_SINGLE)
GL.glutInitWindowSize(200, 200)
GL.glutInitWindowPosition(100, 100)
GL.glutCreateWindow("Test")
GL.glutDisplayFunc()
GL.glutMainLoop()
```
