// 函数: sub_528630
// 地址: 0x528630
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *(arg1 + 0x38)

for (int32_t* i = *(arg1 + 0x34); i != ebx; i = &i[0xb])
    (**i)(0)

*(arg1 + 0x38) = *(arg1 + 0x34)
*(arg1 + 0x44) = *(arg1 + 0x40)

for (int32_t* i_1 = *(arg1 + 0x28); i_1 != *(arg1 + 0x2c); i_1 = &i_1[1])
    int32_t* ecx_1 = *i_1
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()

*(arg1 + 0x2c) = *(arg1 + 0x28)
return sub_528690(arg1) __tailcall
