#include "drawings/cartesian.cpp"
#include "drawings/sphere.cpp"
#include "drawings/terrain.cpp"
#include "drawings/skeleton.cpp"

#include "drawings/colorcube.cpp"
//#include "drawings/fractal.cpp"


void initFrame ( ) {
    static bool uninitialized = true;
    if (uninitialized) {

        initCartesian();
        initSphere();
        initTerrain();
        initSkeleton();
        initColorcube();
        //initSierpinski();

        pEye   = glm::vec4(terrain.width/2,200,terrain.height/2,1);
        pFocus = AXIS_ORIGIN;
    }
    else {
        //initSierpinski();
        initColorcube();
        initSkeleton();
        initTerrain();
        initSphere();
        initCartesian();
    }
    uninitialized = not uninitialized;
}


void drawTitle ( ) {
    sprintf(
        &title[0],
        "%dx%d (%d,%d) | %d FPS | %d%% | %d° FOV | %s %s | %d",
        (int) windowW,   (int) windowH,
        (int) pCursor.x, (int) pCursor.y,
        (int) round(FPS),
        (int) round(zoom*100.0),
        (int) round(deg(lens)),
        (cull) ? "culled" : "unculled",
        (wire) ?   "wire" : "solid",
        selection
    );
    glfwSetWindowTitle(defaultWindow,&title[0]);
}

// TODO These probably shouldn't live here.
bool skeleton = false;
bool colorcube = false;

void drawFrame ( ) {

    GLfloat s = 10;

                  drawCartesian();
                  drawTerrain  ();
    if (lighting) drawSphere   (glm::translate(glm::mat4(),glm::vec3(pSelection[0])));
    if (skeleton) drawSkeleton (glm::translate(glm::mat4(),glm::vec3(pSelection[1])));
    if (colorcube) drawColorcube(glm::scale(glm::mat4(), glm::vec3(s, s, s)));
    //if (sierpinski) drawSierpinski(scale(mat4(),vec3(s,s,s)));
}
