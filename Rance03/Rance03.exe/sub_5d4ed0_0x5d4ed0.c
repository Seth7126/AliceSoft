// 函数: sub_5d4ed0
// 地址: 0x5d4ed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = *(arg1 + 0x38)
int32_t ebx = *(arg1 + 0x3c)
char edx = *(arg1 + 0x48)
int32_t esi = *(arg1 + 0x44)
int32_t edi = *(arg1 + 0x40)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x44) = *(arg2 + 0x44)
int32_t result
result.b = *(arg2 + 0x48)
*(arg1 + 0x48) = result.b
result.b = 1
*(arg2 + 0x40) = edi
*(arg2 + 0x44) = esi
*(arg2 + 0x38) = ebp
*(arg2 + 0x3c) = ebx
*(arg2 + 0x48) = edx
return result
