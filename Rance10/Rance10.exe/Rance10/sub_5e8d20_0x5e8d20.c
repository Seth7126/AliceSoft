// 函数: sub_5e8d20
// 地址: 0x5e8d20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4_1 = arg1
void* edi_1

if (arg1 s>= 0)
    edi_1 = data_7fd4cc

int32_t edi_3

if (arg1 s< 0 || arg1 s>= (*(edi_1 + 0x58) - *(edi_1 + 0x54)) s>> 3)
    edi_3 = 0
else
    int32_t edi_2 = *(edi_1 + 0x54)
    void* esi_2 = (arg1 << 3) + 4 + edi_2
    __Smtx_lock_shared(esi_2)
    edi_3 = *(edi_2 + (arg1 << 3))
    __Smtx_unlock_shared(esi_2)

int32_t edi_4 = neg.d(edi_3)
void* edi_6 = sbb.d(edi_4, edi_4, edi_3 != 0) & (edi_3 + 0x10)
int32_t result

if (edi_6 == 0)
    result.b = 0
    return result

*(edi_6 + 0x84) = arg2
result.b = 1
return result
