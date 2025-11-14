// 函数: sub_6375f0
// 地址: 0x6375f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x10) = *(arg1 + 0xc)
char* ecx = *(arg1 + 0x3c)

if (ecx != 0)
    sub_6487c0(ecx)
    j__free(*(arg1 + 0x3c))
    *(arg1 + 0x3c) = 0

*(arg1 + 0x40) = 0
sub_637bb0(arg1 + 4)
void* result

if (arg2 != 0 && arg3 != 0)
    sub_403540(arg1 + 0xc, arg3)
    sub_69d850(*(arg1 + 0xc), arg2, *(arg1 + 0x10) - *(arg1 + 0xc))
    
    if (sub_637680(arg1).b != 0)
        *(arg1 + 0x4c) = 0
        result.b = 1
        *(arg1 + 0x50) = 0
        return result

result.b = 0
return result
