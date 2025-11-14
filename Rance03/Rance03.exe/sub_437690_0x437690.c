// 函数: sub_437690
// 地址: 0x437690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((*(arg1 + 0x70) - *(arg1 + 0x6c)) s>> 2 s<= arg2)
    return 0

int32_t esi = *(arg1 + 0x6c)

if ((*(arg1 + 0x70) - esi) s>> 2 u<= arg2)
    sub_69a57f("invalid vector<T> subscript")
    noreturn

void* eax_6 = *(esi + (arg2 << 2))

if (*(eax_6 + 4) != 0)
    return 1

int32_t eax_8 = *(eax_6 + 8)
int32_t eax_9 = neg.d(eax_8)
return sbb.d(eax_9, eax_9, eax_8 != 0) & 2
