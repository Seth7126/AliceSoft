// 函数: sub_5e9c40
// 地址: 0x5e9c40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx

if (arg1 s>= 0)
    edx = data_7fd4cc

int32_t edi_1

if (arg1 s< 0 || arg1 s>= (*(edx + 0x58) - *(edx + 0x54)) s>> 3)
    edi_1 = 0
else
    int32_t* edi = *(edx + 0x54) + (arg1 << 3)
    __Smtx_lock_shared(&edi[1])
    edi_1 = *edi
    __Smtx_unlock_shared(&edi[1])

int32_t edi_2 = neg.d(edi_1)
int32_t edi_4 = sbb.d(edi_2, edi_2, edi_1 != 0) & (edi_1 + 0x10)

if (edi_4 != 0 && arg2 s>= 0 && arg2 u< 7)
    return *(edi_4 + (arg2 << 2) + 0x164)

return 0
