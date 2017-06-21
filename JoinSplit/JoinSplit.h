/* ************************************************************************
FILE    : JoinSplit.H
PURPOSE : Provide functions to put all files in a folder to a single file,
          and also can split the compressed file to a folder.
HISTORY :
        21 Dec 99 JPT   @1
        - Changed the joinFiles to use constants to indicate the the input
        args will not be changed by the function.
		17 Nov 05 -- wenhong @2
		- Change MAX_FILES_JOINED from 128 to 512.
		- Change JANDS_ID for version control.
		14 Dec 05 -- wenhong @3
		- Improve GZIP utility.
*/
#ifndef _JOIN_SPLIT_H_
#define _JOIN_SPLIT_H_

int joinDir (const char *sourceDir, const char *extName);
int splitFiles (char *sourceDir, char *sourceName, char *extName, char *destDir);

#endif /*_JOIN_SPLIT_H_*/




