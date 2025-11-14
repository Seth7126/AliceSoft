// 函数: sub_52a120
// 地址: 0x52a120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *(arg1 + 0x4c); i != *(arg1 + 0x50); i = &i[1])
    (*(**i + 4))()

*(arg1 + 0x50) = *(arg1 + 0x4c)

for (int32_t* i_1 = *(arg1 + 0x40); i_1 != *(arg1 + 0x44); i_1 = &i_1[1])
    sub_53a360(*i_1)

*(arg1 + 0x44) = *(arg1 + 0x40)
int32_t* ecx_3 = *(arg1 + 0x3c)

if (ecx_3 != 0)
    (*(*ecx_3 + 4))()
    *(arg1 + 0x3c) = 0

void* result = arg1 + 0x58
*(arg1 + 0x74) = 0xffffffff
bool cond:0 = *(result + 0x14) u< 0x10
*(result + 0x10) = 0

if (not(cond:0))
    result = *result

*result = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x10) = 0
return result
