#pragma once

#ifdef RMX_PLATFORM_WINDOWS

extern Ramorix::Application* Ramorix::CreateApplication();

int main(int argc, char** argv)
{
	printf("Welcome to Ramorix Engine !");
	auto app = Ramorix::CreateApplication();
	app->Run();
	delete app;
}

#endif
