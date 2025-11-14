// 函数: sub_62ac60
// 地址: 0x62ac60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == 0)
    return 0

if (arg2 - 1 u<= 0xfffffffe)
    int32_t eax_1 = *(arg1 + 0x274)
    int32_t result
    
    if (eax_1 == 0)
        result = _malloc(arg2)
    else
        result = eax_1(arg1, arg2)
    
    if (result != 0)
        return result

sub_62a520(arg1, "Out of memory")
noreturn
