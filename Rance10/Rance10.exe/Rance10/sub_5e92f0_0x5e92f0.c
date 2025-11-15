// 函数: sub_5e92f0
// 地址: 0x5e92f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi_1

if (arg3 s>= 0)
    edi_1 = data_7fd4cc

int32_t edi_3

if (arg3 s< 0 || arg3 s>= (*(edi_1 + 0x58) - *(edi_1 + 0x54)) s>> 3)
    edi_3 = 0
else
    int32_t edi_2 = *(edi_1 + 0x54)
    void* esi_2 = (arg3 << 3) + 4 + edi_2
    __Smtx_lock_shared(esi_2)
    edi_3 = *(edi_2 + (arg3 << 3))
    __Smtx_unlock_shared(esi_2)

int32_t edi_4 = neg.d(edi_3)
void* edi_6 = sbb.d(edi_4, edi_4, edi_3 != 0) & (edi_3 + 0x10)

if (edi_6 == 0)
    int32_t eax_3
    eax_3.b = 0
    return eax_3

*arg2 = *(edi_6 + 0xa4)
*arg4 = *(edi_6 + 0xa8)
*arg5 = *(edi_6 + 0xac)
int32_t* eax_6
eax_6.b = 1
return eax_6
