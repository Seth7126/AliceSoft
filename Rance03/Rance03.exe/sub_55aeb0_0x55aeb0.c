// 函数: sub_55aeb0
// 地址: 0x55aeb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x28)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x28) = 0

int32_t ebx = *(arg1 + 0x18)

for (int32_t* i = *(arg1 + 0x14); i != ebx; i = &i[0x9b])
    (**i)(0)

int32_t result = *(arg1 + 0x14)
*(arg1 + 0x18) = result
*(arg1 + 0x20) = 0xffffffff
*(arg1 + 0x24) = 0xffffffff
return result
