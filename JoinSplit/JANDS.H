/* ************************************************************************
FILE    : JANDS.H
PURPOSE :
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
#ifndef JANDS_H_INCLUDED
#define JANDS_H_INCLUDED

#include <string>

// Constants --------------------------------------------------------------
#define MAX_FILES_JOINED        128	//@2
#define MAX_FILENAME_LEN        40
#define JANDS_ID                "JOIN_V1.0"	//@2
#define MAX_FILE_ID             20          // ID must be less than 20 chars

#pragma pack(push, 1)

typedef struct
{
    char    fileName[MAX_FILES_JOINED][MAX_FILENAME_LEN];   // Name of stored file
    long    fileLen[MAX_FILES_JOINED];                      // Size of stored file
    short   numFilesJoined;                                 // Num of files actually stored
} stJAndSHeader;

#pragma pack(pop)

using String = std::string;
#define EZERO	0	/* No error */

// Global Functions -------------------------------------------------------
int joinFiles (const char *sourceDir, const char *sourceName,
        const char *extName);   // @1
int splitFiles (char *sourceDir, char *sourceName, char *extName,
    char *destDir, char *destName, unsigned char bOverideNames);

#endif




