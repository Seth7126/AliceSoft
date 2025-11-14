// 函数: sub_52bdf0
// 地址: 0x52bdf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg3
void* edx = arg2 - arg3
void* i

for (i = edx & 0xfffffffc; i s> 4; i = edx & 0xfffffffc)
    var_4 = *(arg3 + edx - 4)
    *(arg3 + edx - 4) = *arg3
    int32_t var_14_1 = arg4
    int32_t eax_4 = (edx - 4) s>> 2
    sub_52bed0(eax_4, nullptr, arg3, eax_4, &var_4)
    edx -= 4

return i
