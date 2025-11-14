// 函数: sub_4376f0
// 地址: 0x4376f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((*(arg1 + 0x70) - *(arg1 + 0x6c)) s>> 2 s<= arg2)
    return &data_74f56c

int32_t esi = *(arg1 + 0x6c)

if ((*(arg1 + 0x70) - esi) s>> 2 u<= arg2)
    sub_69a57f("invalid vector<T> subscript")
    noreturn

int32_t eax_7 = *(*(esi + (arg2 << 2)) + 8)

if (eax_7 != 0)
    return eax_7 + 0xc

return &data_74f584
