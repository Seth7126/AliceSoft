// 函数: sub_489480
// 地址: 0x489480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x34) = *(arg1 + 0x30)
int32_t* i = *(arg1 + 0x1c)
*(arg1 + 0x2c) = 0
*(arg1 + 0x28) = 0xffffffff

for (; i != *(arg1 + 0x20); i = &i[1])
    (*(**i + 4))()

*(arg1 + 0x20) = *(arg1 + 0x1c)
int32_t* result = sub_4894f0(arg1)
int32_t* ecx_3 = *(arg1 + 0x14)

if (ecx_3 != 0)
    result = (*(*ecx_3 + 4))()
    *(arg1 + 0x14) = 0

int32_t* ecx_4 = *(arg1 + 0x10)

if (ecx_4 != 0)
    result = (*(*ecx_4 + 4))()
    *(arg1 + 0x10) = 0

return result
