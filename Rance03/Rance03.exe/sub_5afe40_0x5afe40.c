// 函数: sub_5afe40
// 地址: 0x5afe40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg2
int32_t* ebx = arg3
void* esi_1 = edi - ebx
int32_t i

for (i = esi_1 s/ 0x24; i s> 1; i = esi_1 s/ 0x24)
    int32_t* var_10_1 = arg3
    arg3 = sub_5b0870(i, edi, ebx, arg4)
    esi_1 -= 0x24
    edi -= 0x24

return i
