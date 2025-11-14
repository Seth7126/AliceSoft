// 函数: sub_5706e0
// 地址: 0x5706e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = sub_5571c0(arg1 + 0x31c)
int32_t* ecx_1 = *(arg1 + 0x37c)

if (ecx_1 != 0)
    result = sub_529c30(ecx_1)
    *(arg1 + 0x37c) = 0

int32_t* ecx_2 = *(arg1 + 0x378)

if (ecx_2 != 0)
    result = sub_54c280(ecx_2)
    *(arg1 + 0x378) = 0

*(arg1 + 0x30c) = 0xffffffff
*(arg1 + 0x274) = 0
*(arg1 + 4) = 0
return result
