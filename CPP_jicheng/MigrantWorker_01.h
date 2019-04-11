#pragma once
#include "Farmer_01.h"
#include"Worker_01.h"
class MigrantWorker_01 : public Farmer_01,public Worker_01{
public:
	MigrantWorker_01(string name,string code);
	~MigrantWorker_01();
};

