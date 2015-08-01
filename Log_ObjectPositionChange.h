#pragma once
#include "historylog.h"

class Log_ObjectPositionChange :
	public HistoryLog
{
public:
	const float x;
	const float y;
	const float z;
public:
	Log_ObjectPositionChange(size_t theTarget,float theX,float theY,float theZ);
	std::string toString()
	{
		char temp[256];
		sprintf_s(temp,"\t\t\t<Log Type=\"ObjectPositionChange\" Target=\"%d\" X=\"%f\" Y=\"%f\" Z=\"%f\" />\n",target,x,y,z);
		std::string out(temp);
		return out;
	};

							void operator=(const Log_ObjectPositionChange& in) 
	{
		in;
	};
public:
	~Log_ObjectPositionChange(void);
};