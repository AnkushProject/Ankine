#pragma once

#ifdef ANKINE_PLATFORM_WINDOWS
extern Ankine::Application* Ankine::CreateApplication();
int main(int argc, char** argv)
{
	auto app = Ankine::CreateApplication();
	app->Run();
	delete app;
}
#endif