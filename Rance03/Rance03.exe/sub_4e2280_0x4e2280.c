// 函数: sub_4e2280
// 地址: 0x4e2280
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = sub_4e2060(arg1 - 0x2c)
void* ecx_3 = *(arg1 + 0xc8) + *(arg1 + 0xc4) + eax
*(arg1 + 0x1d8) = eax

if (*(arg1 + 0xbc) s< ecx_3)
    *(arg1 + 0xbc) = ecx_3
    int32_t* ecx_4 = *(arg1 + 0x1d0)
    
    if (ecx_4 != 0)
        (**ecx_4)()

sub_4e22e0(arg1 - 0x2c)
sub_4e2470(arg1 - 0x2c)
sub_4e2600(arg1 - 0x2c)
return sub_4e2670(arg1 - 0x2c) __tailcall
