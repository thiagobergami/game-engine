#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int main(int argc, char** argv)
{	
	GameEngine::Log::Init();
	GAMEENGINE_CORE_WARN("Initialized log");
	int a = 5;
	GAMEENGINE_INFO("Hello! Var={0}", a);

	printf("GameEngine is up and running");
	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif