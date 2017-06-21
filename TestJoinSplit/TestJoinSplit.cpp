// TestJoinSplit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "JoinSplit.h"

void TestJoinFiles_1() {
    int nResult = 0;
    nResult = joinDir ( "D:\\Test\\CAD", ".rcd" );

    nResult = splitFiles ( "D:\\Test\\", "CAD", ".rcd", "D:\\Test\\CAD1\\" );
    //joinFiles ( "D:\\Test\\CAD", "CAD", ".cmp" );
}

int _tmain(int argc, _TCHAR* argv[])
{
    TestJoinFiles_1();
	return 0;
}

