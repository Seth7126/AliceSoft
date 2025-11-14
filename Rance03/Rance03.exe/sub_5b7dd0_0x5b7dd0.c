// 函数: sub_5b7dd0
// 地址: 0x5b7dd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = *(arg1 + 0x10)

if (ecx != 0)
    void* var_c_1 = arg1
    void* var_10_1 = ecx
    sub_5b95d0(ecx, *(arg1 + 0x14))
    j__free(*(arg1 + 0x10))
    *(arg1 + 0x10) = 0
    *(arg1 + 0x14) = 0
    *(arg1 + 0x18) = 0

int32_t result = *(arg1 + 4)

if (result != 0)
    result = j__free(result)
    *(arg1 + 4) = 0
    *(arg1 + 8) = 0
    *(arg1 + 0xc) = 0

return result
