// 函数: sub_5fb6e0
// 地址: 0x5fb6e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[1] == arg1[2])
    int32_t* var_10_1 = arg1
    sub_5fb750(arg1)

struct win32only::CHighResolutionTimer::VTable** result = arg1[1]

if (result != 0)
    *result = &win32only::CHighResolutionTimer::`vftable'
    result[2] = 0
    result[3] = 0
    result = data_7fcbe8 | data_7fcbec
    
    if (result == 0)
        int32_t frequency
        QueryPerformanceFrequency(&frequency)
        data_7fcbe8 = frequency
        struct win32only::CHighResolutionTimer::VTable** result_1
        result = result_1
        data_7fcbec = result

arg1[1] += 0x10
return result
