// 函数: sub_583d40
// 地址: 0x583d40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0xd0)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0xd0) = 0

int32_t* ecx_1 = *(arg1 + 0xcc)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0xcc) = 0

int32_t* ecx_2 = *(arg1 + 0x14)
*(arg1 + 0x154) = 0

if (ecx_2 != 0)
    sub_54c280(ecx_2)
    *(arg1 + 0x14) = 0

sub_59e430(arg1 + 0x34)

for (int32_t* i = *(arg1 + 0x28); i != *(arg1 + 0x2c); i = &i[1])
    int32_t* ecx_4 = *i
    
    if (ecx_4 != 0)
        (*(*ecx_4 + 0x10))(1)

*(arg1 + 0x2c) = *(arg1 + 0x28)
void* result = sub_51faa0(arg1 + 0x18)
*(arg1 + 0x10) = 0
return result
