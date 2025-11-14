// 函数: sub_586f40
// 地址: 0x586f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x214)

if (ecx != 0)
    (**ecx)(1)
    *(arg1 + 0x214) = 0

int32_t* ecx_1 = *(arg1 + 0x210)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0x210) = 0

int32_t result = sub_587ca0(arg1 + 4)
*(arg1 + 0x220) = 0
*(arg1 + 0x21c) = 0
*(arg1 + 0x23d) = 0
return result
