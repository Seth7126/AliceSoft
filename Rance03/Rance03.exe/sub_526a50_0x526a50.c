// 函数: sub_526a50
// 地址: 0x526a50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_5f46d0(arg1 + 0x18)

for (int32_t* i = *(arg1 + 0x50); i != *(arg1 + 0x54); i = &i[1])
    int32_t* ecx_1 = *i
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()

int32_t result = *(arg1 + 0x50)
*(arg1 + 0x54) = result
int32_t* ecx_2 = *(arg1 + 0x4c)

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))(arg1 + 4)

int32_t* ecx_3 = *(arg1 + 0x14)
*(arg1 + 0x4c) = 0

if (ecx_3 != 0)
    result = (**ecx_3)(1)
    *(arg1 + 0x14) = 0

int32_t* ecx_4 = *(arg1 + 0x10)

if (ecx_4 != 0)
    result = (*(*ecx_4 + 4))()
    *(arg1 + 0x10) = 0

return result
