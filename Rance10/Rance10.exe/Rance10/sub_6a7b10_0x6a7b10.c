// 函数: sub_6a7b10
// 地址: 0x6a7b10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 0

if (arg2 != 0)
    int32_t eax_2 = *(arg1 + 0x274)
    uint32_t (* result)[0x4]
    
    if (eax_2 == 0)
        result = sub_705e22()
    else
        result = eax_2(arg1, arg2)
    
    if (result != 0)
        _memset(result, 0, arg2)
        return result

sub_6a7500(arg1, "Out of memory")
noreturn
