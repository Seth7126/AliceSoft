// 函数: sub_5815a0
// 地址: 0x5815a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x40)

if (ecx != 0)
    sub_53a360(ecx)
    *(arg1 + 0x40) = 0

int32_t* ecx_1 = *(arg1 + 0x3c)

if (ecx_1 != 0)
    sub_53a360(ecx_1)
    *(arg1 + 0x3c) = 0

for (int32_t* i = *(arg1 + 0x30); i != *(arg1 + 0x34); i = &i[1])
    int32_t* ecx_2 = *i
    
    if (ecx_2 != 0)
        sub_53a360(ecx_2)

int32_t result = *(arg1 + 0x30)
*(arg1 + 0x34) = result
return result
