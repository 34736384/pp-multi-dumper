// dumper.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "process.h"
#include "netvars.h"

int main()
{
	process->PreInit();
	process->Init();
	process->Signatures();
	process->NetVars();
	process->Output();
    return 0;
}

