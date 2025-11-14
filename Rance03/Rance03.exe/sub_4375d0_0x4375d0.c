// 函数: sub_4375d0
// 地址: 0x4375d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((*(arg1 + 0x70) - *(arg1 + 0x6c)) s>> 2 s<= arg2)
    return 1

int32_t esi = *(arg1 + 0x6c)

if ((*(arg1 + 0x70) - esi) s>> 2 u<= arg2)
    sub_69a57f("invalid vector<T> subscript")
    noreturn

void* eax_6 = *(esi + (arg2 << 2))
void* ecx = *(eax_6 + 4)

if (ecx != 0)
    return *(ecx + 0x24)

void* eax_8 = *(eax_6 + 8)

if (eax_8 == 0)
    return 1

return *(eax_8 + 0x24)
