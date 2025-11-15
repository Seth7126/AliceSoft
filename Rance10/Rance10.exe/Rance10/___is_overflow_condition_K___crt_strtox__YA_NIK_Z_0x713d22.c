// 函数: ??$is_overflow_condition@K@__crt_strtox@@YA_NIK@Z
// 地址: 0x713d22
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if ((arg1.b & 4) == 0)
    if ((arg1.b & 1) == 0)
        result.b = 0
        return result
    
    result = arg1 & 2
    
    if ((result == 0 || arg2 u<= 0x80000000) && (result != 0 || arg2 u<= 0x7fffffff))
        result.b = 0
        return result

result.b = 1
return result
