// 函数: sub_5e8030
// 地址: 0x5e8030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HANDLE result = sub_46e3c0()
*(arg1 + 0x114) = result
*(arg1 + 0x1b0) = result
*(arg1 + 0x1b8) = result

if (result != 0)
    sub_46de40(result, arg1 + 0x258)

if (*(arg1 + 0x114) != 0)
    *(*(arg1 + 0x114) + 0x3c) = (***(arg1 + 0x254))(0x6eb718)

void* ecx_4 = *(arg1 + 0x1a0)

if (ecx_4 != 0)
    *(*(ecx_4 + 4) + 0x18) = *(arg1 + 0x114)

result.b = 1
return result
