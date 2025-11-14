// 函数: sub_40c0b0
// 地址: 0x40c0b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t eax = *(arg1 + 4)

if (eax == 0xa || eax == 2 || eax == 0x12 || eax == 0x2f || eax == 0x30 || eax == 0x33)
    int32_t eax_1 = *(arg3 + 4)
    
    if (eax_1 == 0xa || eax_1 == 2 || eax_1 == 0x12 || eax_1 == 0x2f || eax_1 == 0x30
            || eax_1 == 0x33)
        int32_t eax_3 = sub_421e40(arg3)
        sub_40d920(arg2, sub_421e40(arg1) ^ eax_3)
        return arg2

sub_40d770(arg2)
return arg2
