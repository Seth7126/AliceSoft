// 函数: sub_5b38a0
// 地址: 0x5b38a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = data_75d564
int32_t frequency_1 = data_75d560
*arg1 = &sys43vm::CCallFuncProfiler::`vftable'
__builtin_memset(&arg1[2], 0, 0x18)
arg1[8] = &win32only::CHighResolutionTimer::`vftable'
arg1[0xa] = 0
arg1[0xb] = 0
int32_t frequency
int32_t var_4

if ((frequency_1 | edx) == 0)
    QueryPerformanceFrequency(&frequency)
    frequency_1 = frequency
    edx = var_4
    data_75d560 = frequency_1
    data_75d564 = edx

arg1[0xc] = &win32only::CHighResolutionTimer::`vftable'
arg1[0xe] = 0
arg1[0xf] = 0

if ((frequency_1 | edx) == 0)
    QueryPerformanceFrequency(&frequency)
    data_75d560 = frequency
    data_75d564 = var_4

return arg1
