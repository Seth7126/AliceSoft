// 函数: ??$is_overflow_condition@_K@__crt_strtox@@YA_NI_K@Z
// 地址: 0x706e86
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if ((arg1.b & 4) == 0)
    if ((arg1.b & 1) == 0)
        result.b = 0
        return result
    
    result = arg1 & 2
    
    if (result == 0 || arg3 u< 0x80000000)
    label_706eb0:
        
        if (result != 0 || arg3 u< 0x7fffffff)
            result.b = 0
            return result
        
        if (arg3 u<= 0x7fffffff && arg2 u<= 0xffffffff)
            result.b = 0
            return result
    else if (arg3 u<= 0x80000000 && arg2 u<= 0)
        goto label_706eb0

result.b = 1
return result
