#pragma once
#include<string>
#include<iostream>
#ifdef LOGGER_EXPORTS
#define LOGGER_API _declspec(dllexport)
#else
#define LOGGER_API _declspec(dllimport)
#endif
class LOGGER_API Logger
{
public:
	enum class Level {
		Info,
		Warning,
		Error
	};

public:
	Logger(Level levelValue = Level::Info);
	template<class T>
	void Log(T message, Level messageLevel) const;

private:
	Level m_minimLevel;

};
template<class T>
inline void Logger::Log(T message, Level messageLevel) const
{
	if (messageLevel == Level::Info)
		std::cout << "[Info] " << message;
	else if (messageLevel == Level::Warning)
		std::cout << "[Warning] " << message;
	else if (messageLevel == Level::Error)
		std::cout << "[Error] " << message;
	std::cout << "\n";
}


