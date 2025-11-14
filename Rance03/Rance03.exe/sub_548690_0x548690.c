// 函数: sub_548690
// 地址: 0x548690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x30)

if (ecx != 0)
    sub_53a360(ecx)
    *(arg1 + 0x30) = 0

int32_t* ecx_1 = *(arg1 + 0x2c)

if (ecx_1 != 0)
    sub_53a360(ecx_1)
    *(arg1 + 0x2c) = 0

for (int32_t* i = *(arg1 + 0x20); i != *(arg1 + 0x24); i = &i[1])
    int32_t* ecx_2 = *i
    
    if (ecx_2 != 0)
        sub_53a360(ecx_2)

int32_t result = *(arg1 + 0x20)
*(arg1 + 0x24) = result
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
return result
