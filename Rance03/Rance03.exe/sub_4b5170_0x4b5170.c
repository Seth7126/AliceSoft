// 函数: sub_4b5170
// 地址: 0x4b5170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = *(arg1 + 0x10)

if (result != *(arg1 + 0x14))
    int32_t edi_3 = (*(arg1 + 8) - *(arg1 + 4)) s>> 2
    int32_t esi_3 = (*(arg1 + 0x14) - result) s>> 2
    sub_42f470(arg1 + 4, 
        ((*(arg1 + 8) - *(arg1 + 4)) s>> 2) + ((*(arg1 + 0x14) - *(arg1 + 0x10)) s>> 2))
    sub_69d850(*(arg1 + 4) + (edi_3 << 2), *(arg1 + 0x10), esi_3 << 2)
    result = *(arg1 + 0x10)
    *(arg1 + 0x14) = result

return result
