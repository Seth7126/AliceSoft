// 函数: sub_587ca0
// 地址: 0x587ca0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_5f4ad0(*(arg1 + 0x200))

for (int32_t* i = *(arg1 + 8); i != *(arg1 + 0xc); i = &i[1])
    int32_t* ecx_1 = *i
    
    if (ecx_1 != 0)
        sub_53a360(ecx_1)
        *i = 0

*(arg1 + 0xc) = *(arg1 + 8)
return sub_524550(arg1 + 0x1c4) __tailcall
