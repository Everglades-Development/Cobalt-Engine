#pragma once

#ifdef CT_PLATFORM_WINDOWS

extern Cobalt::Application* Cobalt::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Cobalt::CreateApplication(); 
	app->Run();
	delete app;
}

#endif
