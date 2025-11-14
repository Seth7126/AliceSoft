// 函数: sub_569e10
// 地址: 0x569e10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

int32_t* edi = arg4
void* ecx = arg3 + 0xc
void* esi = &edi[3]

do
    int32_t eax = *(ecx - 0xc)
    ecx += 0x20
    *edi = eax
    esi += 0x20
    edi = &edi[8]
    *(esi - 0x28) = *(ecx - 0x28)
    *(esi - 0x20) = *(ecx - 0x20)
    *(esi - 0x10) = *(ecx - 0x10)
while (ecx - 0xc != arg2)

return edi
