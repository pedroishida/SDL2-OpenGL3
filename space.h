#ifndef SPACE_H
#define SPACE_H

#include <cstdio>
#include <cmath>
#include <vector>

#include <GL/glew.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>
#include <GL/glu.h>
#include <GL/gl.h>

#include "shader.h"

class Space
{
    unsigned int i, j;
    unsigned int width;
    unsigned int height;
    int error_code;
    SDL_Window* display;
    SDL_Event event;
    SDL_GLContext context;
    GLuint vertexBuffers[1];
    GLuint vertexArrays[1];
    Shader shader;
    protected:
        int Init();
        void Quit();
    public:
        Space();
        Space(unsigned int, unsigned int);
        ~Space();
        unsigned short int HandleEvents();
        void LoadBuffer();
        void Render();
        int GetError();
};
#endif