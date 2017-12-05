#ifndef SPHERE_H

#define SPHERE_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>




class Sphere

{

public:

	Sphere();

	~Sphere();

	void init(GLuint vertexPositionID);

	void cleanup();

	void draw();



private:

	int lats, longs;

	bool isInited;

	GLuint m_vao, m_vboVertex, m_vboIndex;

	int numsToDraw;

};



#endif // SPHERE_H