// 函数: sub_4da3a0
// 地址: 0x4da3a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg2
void** ebx = arg3
void* esi_1 = edi - ebx
int32_t i

for (i = esi_1 s/ 0x84; i s> 1; i = esi_1 s/ 0x84)
    void** var_10_1 = arg3
    arg3 = sub_4dab10(i, edi, ebx, arg4)
    esi_1 -= 0x84
    edi -= 0x84

return i
