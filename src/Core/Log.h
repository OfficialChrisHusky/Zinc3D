#pragma once

#ifdef ZN_DEBUG
	#define Log(...) Zinc::Logger::GetLogger()->trace(__VA_ARGS__);
	#define LogWarn(...) Zinc::Logger::GetLogger()->warn(__VA_ARGS__);
	#define LogError(...) Zinc::Logger::GetLogger()->error(__VA_ARGS__);
	#define LogSuccess(...) Zinc::Logger::GetLogger()->info(__VA_ARGS__);

	#include <spdlog/spdlog.h>
#else
	#define Log(...)
	#define LogWarn(...)
	#define LogError(...)
	#define LogSuccess(...)
#endif

namespace Zinc::Logger {

	void Initialize();

#ifdef ZN_DEBUG
	std::shared_ptr<spdlog::logger> GetLogger();
#endif

}