// 函数: sub_4759b0
// 地址: 0x4759b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x93c)

if (ecx != 0)
    (**ecx)(1)
    *(arg1 + 0x93c) = 0

int32_t* ecx_1 = *(arg1 + 0x938)

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(1)
    *(arg1 + 0x938) = 0

int32_t* ecx_2 = *(arg1 + 0x934)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *(arg1 + 0x934) = 0

int32_t* ecx_3 = *(arg1 + 0x930)

if (ecx_3 != 0)
    (*(*ecx_3 + 4))()
    *(arg1 + 0x930) = 0

*(arg1 + 0x918) = *(arg1 + 0x914)
int32_t result = sub_472670(arg1 + 0xc)
*(arg1 + 4) = 0
return result
