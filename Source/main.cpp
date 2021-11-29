//#include "../Header/main.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main()
{
    // Variable Declaration Area
    GLFWwindow* window;

    // GLFW Library initialization and window hint configuration
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Window creation
     window = glfwCreateWindow(800, 600, "Test Window", NULL, NULL);

    // Window error exception catching
    if (window == NULL)
    {
        std::cout << "Failed to create a GLFW Window" << std::endl;
        glfwTerminate();
        return -1;
    }    
    glfwMakeContextCurrent(window);

    // GLAD library main usage and error exception catching
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    glViewport(0,0,800,600);

    // Render Loop
    while (!glfwWindowShouldClose(window))
    {
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }


    // End program and close library GLFW
    glfwTerminate();
    return 0;
}
