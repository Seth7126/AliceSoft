// 函数: sub_62abd0
// 地址: 0x62abd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx
void* var_4_1 = ecx

if (arg4 s<= 0 || arg3 s< 0 || (arg2 == 0 && arg3 s> 0))
    sub_62a520(ecx, "internal error: array realloc")
    noreturn

if (arg4 s<= 0x7fffffff - arg3)
    int32_t* result = sub_62ab80(0x7fffffff - arg3, arg3 + arg4, ecx, arg5)
    
    if (result != 0)
        if (arg3 s> 0)
            sub_69d850(result, arg2, arg3 * arg5)
        
        _memset(arg3 * arg5 + result, 0, arg4 * arg5)
        return result

return 0
