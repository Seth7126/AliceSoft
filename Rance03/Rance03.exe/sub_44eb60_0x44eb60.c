// 函数: sub_44eb60
// 地址: 0x44eb60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x34) = *(arg2 + 0x34)
*(arg1 + 0x44) = *(arg2 + 0x44)
*(arg1 + 0x54) = *(arg2 + 0x54)
*(arg1 + 0x64) = *(arg2 + 0x64)
*(arg1 + 0x74) = *(arg2 + 0x74)
*(arg1 + 0x78) = *(arg2 + 0x78)
*(arg1 + 0x7c) = *(arg2 + 0x7c)
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x84) = *(arg2 + 0x84)
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x8c) = *(arg2 + 0x8c)
*(arg1 + 0x90) = *(arg2 + 0x90)
*(arg1 + 0x94) = *(arg2 + 0x94)
*(arg1 + 0x98) = *(arg2 + 0x98)
*(arg1 + 0x9c) = *(arg2 + 0x9c)
*(arg1 + 0xac) = *(arg2 + 0xac)
*(arg1 + 0xbc) = *(arg2 + 0xbc)
*(arg1 + 0xc0) = *(arg2 + 0xc0)
*(arg1 + 0xc1) = *(arg2 + 0xc1)
*(arg1 + 0xc8) = *(arg2 + 0xc8)
*(arg1 + 0xcc) = *(arg2 + 0xcc)
*(arg1 + 0xd0) = *(arg2 + 0xd0)
*(arg1 + 0xd4) = *(arg2 + 0xd4)
int32_t* ecx = *(arg1 + 0xd8)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0xd8) = 0

int32_t* ecx_1 = *(arg2 + 0xd8)
*(arg1 + 0xd8) = ecx_1

if (ecx_1 != 0)
    (**ecx_1)()

int32_t* ecx_2 = *(arg1 + 0xdc)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *(arg1 + 0xdc) = 0

int32_t* ecx_3 = *(arg2 + 0xdc)
*(arg1 + 0xdc) = ecx_3

if (ecx_3 != 0)
    (**ecx_3)()

int32_t result
result.b = 1
return result
