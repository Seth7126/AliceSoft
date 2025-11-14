// 函数: sub_48ff00
// 地址: 0x48ff00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0 || arg3 == 0)
    return 

sub_48fea0(arg1)
*(arg1 + 8) = arg2
(**arg2)()
*(arg1 + 0xc) = arg3
(**arg3)()
int32_t esi_3 = *(arg1 + 0xc) + 0x24

if (sub_4872d0(*(arg1 + 8), esi_3).b == 0)
    return 

void*** eax = sub_4938b0(*(arg1 + 0x10), esi_3)

if (eax == 0)
    int32_t* eax_3 = sub_487710(*(arg1 + 8), esi_3)
    eax = sub_514080((*(*eax_3 + 0x18))((*(*eax_3 + 0x14))()))

*(arg1 + 0x18) = eax
