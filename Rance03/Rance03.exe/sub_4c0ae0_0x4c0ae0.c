// 函数: sub_4c0ae0
// 地址: 0x4c0ae0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg2
int32_t* ebx = arg3
void* esi_1 = edi - ebx
int32_t i

for (i = esi_1 s/ 0x5c; i s> 1; i = esi_1 s/ 0x5c)
    int32_t* var_10_1 = arg3
    arg3 = sub_4c1880(i, edi, ebx, arg4)
    esi_1 -= 0x5c
    edi -= 0x5c

return i
