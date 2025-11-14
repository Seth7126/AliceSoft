// 函数: sub_4d2530
// 地址: 0x4d2530
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = *(arg1 + 0x34)
int32_t result

for (int32_t* i = 4; i s< 0x10; i = &i[1])
    (*(**(i + *(ebx + 0x28)) + 0x1c))(*arg2)
    result = (*(**(i + *(ebx + 0x28)) + 0xc))()
    *arg2 += result

return result
