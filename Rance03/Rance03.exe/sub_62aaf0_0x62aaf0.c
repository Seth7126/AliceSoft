// 函数: sub_62aaf0
// 地址: 0x62aaf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == 0)
    return 0

if (arg2 - 1 u<= 0xfffffffe)
    int32_t eax_2 = *(arg1 + 0x274)
    char* result
    
    if (eax_2 == 0)
        result = _malloc(arg2)
    else
        result = eax_2(arg1, arg2)
    
    if (result != 0)
        _memset(result, 0, arg2)
        return result

sub_62a520(arg1, "Out of memory")
noreturn
