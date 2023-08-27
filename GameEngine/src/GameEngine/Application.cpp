#include "Application.h"
#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace GameEngine {
	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run()
	{	
		WindowResizeEvent e(1280, 720);

		if (e.IsInCategory(EventCategoryApplication)) {
			GAMEENGINE_CORE_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput)) {
			GAMEENGINE_CORE_TRACE(e);
		}
		GAMEENGINE_CORE_TRACE(e);

		while (true);
	}
}

