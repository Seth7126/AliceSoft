// 函数: sub_644cf0
// 地址: 0x644cf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x10)

if (eax != 0)
    _free(eax)

int32_t eax_1 = *(arg1 + 0x14)

if (eax_1 != 0)
    _free(eax_1)

int32_t eax_2 = *(arg1 + 0x18)

if (eax_2 != 0)
    _free(eax_2)

int32_t eax_3 = *(arg1 + 0x1c)

if (eax_3 != 0)
    _free(eax_3)

int32_t eax_4 = *(arg1 + 0x20)

if (eax_4 != 0)
    _free(eax_4)

return _memset(arg1, 0, 0x38)
