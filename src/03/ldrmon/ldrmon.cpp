#include <windows.h>
#include <stdio.h>
#include <stdint.h>

//

#define USE_VL_MACRO
#include "../../../vxlang/sdk/include/vxlib.h"

#ifndef _WIN64
#pragma comment(lib, "../../../vxlang/sdk/lib/vxlib32.lib")
#else
#pragma comment(lib, "../../../vxlang/sdk/lib/vxlib64.lib")
#endif

//

#pragma optimize("", off) 
int main() {
    printf("press any key to continue .. \n");

    getchar();

    return 1;
}

