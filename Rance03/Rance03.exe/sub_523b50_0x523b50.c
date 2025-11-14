// 函数: sub_523b50
// 地址: 0x523b50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg3
void* edx = arg2 - arg3
void* i

for (i = edx & 0xfffffffc; i s> 4; i = edx & 0xfffffffc)
    var_4 = *(arg3 + edx - 4)
    *(arg3 + edx - 4) = *arg3
    int32_t eax_4 = (edx - 4) s>> 2
    sub_523d90(eax_4, nullptr, arg3, eax_4, &var_4, arg4)
    edx -= 4

return i
