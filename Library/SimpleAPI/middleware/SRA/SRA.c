
/**
 * @file SRA.c
 *
 * @brief ServiceReadyAgent Process
 *
 * Copyright (C) 2016. SKT, All Rights Reserved.
 * Written 2016,by SKT
 */

#include "../../../SimpleAPI/middleware/SRA/SRA.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../../SimpleAPI/middleware/SMA/SMA.h"


char* SRAConvertRawData(char *raw)
{
    return raw;
}

void SRAConvertCSVData(char *merge, char *data)
{
    if( strlen(merge) != 0 )
        strncat(merge,",",strlen(","));
    strncat(merge,data,strlen(data));
}

