#ifndef SHAPES_H
#define SHAPES_H

#include <glm/glm.hpp>

const glm::vec4 cube[36] = {
    
    // back
    vec4(-1,-1,-1, 1),
    vec4(-1, 1,-1, 1),
    vec4( 1, 1,-1, 1),
    vec4( 1, 1,-1, 1),
    vec4( 1,-1,-1, 1),
    vec4(-1,-1,-1, 1),
    
    // bottom
    vec4(-1,-1,-1, 1),
    vec4( 1,-1,-1, 1),
    vec4( 1,-1, 1, 1),
    vec4( 1,-1, 1, 1),
    vec4(-1,-1, 1, 1),
    vec4(-1,-1,-1, 1),
    
    // left
    vec4(-1,-1,-1, 1),
    vec4(-1,-1, 1, 1),
    vec4(-1, 1, 1, 1),
    vec4(-1, 1, 1, 1),
    vec4(-1, 1,-1, 1),
    vec4(-1,-1,-1, 1),
    
    // right
    vec4( 1, 1, 1, 1),
    vec4( 1,-1, 1, 1),
    vec4( 1,-1,-1, 1),
    vec4( 1,-1,-1, 1),
    vec4( 1, 1,-1, 1),
    vec4( 1, 1, 1, 1),
    
    // top
    vec4( 1, 1, 1, 1),
    vec4( 1, 1,-1, 1),
    vec4(-1, 1,-1, 1),
    vec4(-1, 1,-1, 1),
    vec4(-1, 1, 1, 1),
    vec4( 1, 1, 1, 1),
    
    // front
    vec4( 1, 1, 1, 1),
    vec4(-1, 1, 1, 1),
    vec4(-1,-1, 1, 1),
    vec4(-1,-1, 1, 1),
    vec4( 1,-1, 1, 1),
    vec4( 1, 1, 1, 1)
};

#endif
