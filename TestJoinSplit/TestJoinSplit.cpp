// TestJoinSplit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "JANDS.H"

void TestJoinFiles_1() {
    joinFiles ( "D:\\Test\\CAD", "*", ".cmp" );
}

int _tmain(int argc, _TCHAR* argv[])
{
    TestJoinFiles_1();
	return 0;
}

