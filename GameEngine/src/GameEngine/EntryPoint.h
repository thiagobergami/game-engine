#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int main(int argc, char** argv)
{	
	printf("GameEngine is up and running");
	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif