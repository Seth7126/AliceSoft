// 函数: sub_610020
// 地址: 0x610020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = data_7fcbec
int32_t frequency_1 = data_7fcbe8
__builtin_memset(arg1, 0, 0x18)
*(arg1 + 0x18) = &win32only::CHighResolutionTimer::`vftable'
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0
int32_t frequency
int32_t var_8

if ((frequency_1 | edx) == 0)
    QueryPerformanceFrequency(&frequency)
    frequency_1 = frequency
    edx = var_8
    data_7fcbe8 = frequency_1
    data_7fcbec = edx

*(arg1 + 0x28) = &win32only::CHighResolutionTimer::`vftable'
*(arg1 + 0x30) = 0
*(arg1 + 0x34) = 0

if ((frequency_1 | edx) == 0)
    QueryPerformanceFrequency(&frequency)
    data_7fcbe8 = frequency
    data_7fcbec = var_8

return arg1
