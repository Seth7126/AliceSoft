// 函数: sub_5536b0
// 地址: 0x5536b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x13c)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x13c) = 0

*(arg1 + 0x140) = 0
int32_t* ecx_1 = *(arg1 + 0x78)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0x78) = 0

int32_t* ecx_2 = *(arg1 + 0x74)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *(arg1 + 0x74) = 0

*(arg1 + 0x128) = 0
*(arg1 + 0x120) = *(arg1 + 0x11c)
*(arg1 + 0x110) = *(arg1 + 0x10c)
sub_59e430(arg1 + 0x34)

for (int32_t* i = *(arg1 + 0x28); i != *(arg1 + 0x2c); i = &i[1])
    int32_t* ecx_4 = *i
    
    if (ecx_4 != 0)
        (*(*ecx_4 + 0x10))(1)

*(arg1 + 0x2c) = *(arg1 + 0x28)
void* result = sub_51faa0(arg1 + 0x18)
*(arg1 + 0x148) = 0
*(arg1 + 0x14c) = 0
*(arg1 + 0x150) = 0
*(arg1 + 0x154) = 0
int32_t* ecx_6 = *(arg1 + 0x14)
*(arg1 + 0x134) = 0

if (ecx_6 != 0)
    result = sub_54c280(ecx_6)
    *(arg1 + 0x14) = 0

*(arg1 + 0x10) = 0
return result
