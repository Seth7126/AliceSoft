// 函数: sub_61aa60
// 地址: 0x61aa60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1 + 0xc)

if (edx == 0)
    return 0

void* eax_1 = *(arg1 + 8)
int32_t result = 0
int32_t var_8 = 0
int32_t var_4 = 0
int32_t* eax_2 = *(eax_1 + 0x38)

if ((*(*eax_2 + 0x38))(eax_2, edx, 0, 4, 0, &result) s< 0)
    return 0

return result
