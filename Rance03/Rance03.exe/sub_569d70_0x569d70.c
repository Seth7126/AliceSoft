// 函数: sub_569d70
// 地址: 0x569d70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

int32_t* edi = arg4
void* esi = arg3 + 0xc

do
    int32_t eax = *(esi - 0xc)
    esi += 0x14
    *edi = eax
    edi[1] = *(esi - 0x1c)
    edi[3] = *(esi - 0x14)
    edi[4] = *(esi - 0x10)
    edi = &edi[5]
while (esi - 0xc != arg2)

return edi
