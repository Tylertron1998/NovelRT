// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See LICENCE.md in the repository root for more information.
#include "../NovelRTTransform.h"
#include "NovelRTRGBAConfig.h"

#ifndef NOVELRT_INTEROP_GRAPHICS_BASICFILLRECT_H
#define NOVELRT_INTEROP_GRAPHICS_BASICFILLRECT_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BasicFillRectHandle* NovelRTBasicFillRect;

//base type
int32_t NovelRT_BasicFillRect_getTransform(NovelRTBasicFillRect rect, NovelRTTransform* outputTransform, const char** errorMessage);
int32_t NovelRT_BasicFillRect_setTransform(NovelRTBasicFillRect rect, NovelRTTransform inputTransform, const char** errorMessage);
int32_t NovelRT_BasicFillRect_getLayer(NovelRTBasicFillRect rect, int32_t* outputLayer, const char** errorMessage);
int32_t NovelRT_BasicFillRect_setLayer(NovelRTBasicFillRect rect, int32_t inputLayer, const char** errorMessage);
int32_t NovelRT_BasicFillRect_getActive(NovelRTBasicFillRect rect, int32_t* outputBool, const char** errorMessage);
int32_t NovelRT_BasicFillRect_setActive(NovelRTBasicFillRect rect, int32_t inputBool, const char** errorMessage);
int32_t NovelRT_BasicFillRect_executeObjectBehaviour(NovelRTBasicFillRect rect, const char** errorMessage);

//actual type
int32_t NovelRT_BasicFillRect_getColourConfig(NovelRTBasicFillRect rect, NovelRTRGBAConfig* outputColourConfig, const char** errorMessage);
int32_t NovelRT_BasicFillRect_setColourConfig(NovelRTBasicFillRect rect, NovelRTRGBAConfig inputColourConfig, const char** errorMessage);

#ifdef __cplusplus