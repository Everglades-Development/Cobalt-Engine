#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

namespace Cobalt {

	class Window
	{
	private:
		const char* m_Title;
		int m_Width, m_Height; 
		GLFWwindow* m_Window;
		bool m_Closed;

		bool init();



	public:
		Window(const char* title, int width, int height);
		~Window();
		bool closed() const;
		void update();
		void clear() const;

		inline int getWidth() const { return m_Width;  }
		inline int getHeight() const { return m_Height;  }
	};
}