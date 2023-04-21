#include "Log.h"

#include <spdlog/sinks/stdout_color_sinks.h>

namespace Zinc::Logger {

#ifdef ZN_DEBUG
	std::shared_ptr<spdlog::logger> logger;
#endif

	void Initialize() {

	#ifdef ZN_DEBUG
		logger = spdlog::stdout_color_mt("Logger");
		logger->set_level(spdlog::level::trace);
		logger->set_pattern("%^[%T] %n: %v%$");
	#endif

	}

#ifdef ZN_DEBUG
	std::shared_ptr<spdlog::logger> GetLogger() { return logger; }
#endif

}