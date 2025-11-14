// 函数: sub_5de800
// 地址: 0x5de800
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = *(arg1 + 0x10)

if (ecx s< *(arg1 + 0x18) + arg3)
    char eax_4 = sub_64aeb0(arg1 + 8, arg3 + 0x40000 + ecx)
    
    if (eax_4 == 0)
        return eax_4

int32_t ecx_2

if (*(arg1 + 0x10) != 0)
    ecx_2 = *(arg1 + 0xc)
else
    ecx_2 = 0

sub_69d850(*(arg1 + 0x18) + ecx_2, arg2, arg3)
*(arg1 + 0x18) += arg3
int32_t* eax_7
eax_7.b = 1
return eax_7
