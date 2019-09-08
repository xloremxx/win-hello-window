#include <stdio.h>
#include <GLFW/glfw3.h>

static GLFWwindow* window;

static void keyboard(GLFWwindow* window, int key, int scancode, int action, int mods) 
{

  if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
    glfwSetWindowShouldClose(window, GLFW_TRUE);
  }

}

int main(int argc, char *argv[])
{

  GLFWwindow* window;

  if (!glfwInit()) {
    return -1;
  }

  window = glfwCreateWindow(800, 600, "Window", NULL, NULL);

  glfwSetKeyCallback(window, keyboard);

  glfwMakeContextCurrent(window);

  while (!glfwWindowShouldClose(window))
  {
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(window);

    glfwPollEvents();
  }

  glfwTerminate();

  return 0;
}
