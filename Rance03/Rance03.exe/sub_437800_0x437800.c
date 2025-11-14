// 函数: sub_437800
// 地址: 0x437800
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((*(arg1 + 0x70) - *(arg1 + 0x6c)) s>> 2 s<= arg3)
    return 0

int32_t esi = *(arg1 + 0x6c)

if ((*(arg1 + 0x70) - esi) s>> 2 u<= arg3)
    sub_69a57f("invalid vector<T> subscript")
    noreturn

void* ecx = *(*(esi + (arg3 << 2)) + 4)

if (ecx != 0)
    return sub_435590(ecx, arg2, arg4)

return 0
