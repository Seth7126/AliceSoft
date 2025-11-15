// 函数: sub_5e9370
// 地址: 0x5e9370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi_1

if (arg3 s>= 0)
    esi_1 = data_7fd4cc

int32_t edi_1

if (arg3 s< 0 || arg3 s>= (*(esi_1 + 0x58) - *(esi_1 + 0x54)) s>> 3)
    edi_1 = 0
else
    int32_t* edi = *(esi_1 + 0x54) + (arg3 << 3)
    __Smtx_lock_shared(&edi[1])
    edi_1 = *edi
    __Smtx_unlock_shared(&edi[1])

int32_t edi_2 = neg.d(edi_1)
void* edi_4 = sbb.d(edi_2, edi_2, edi_1 != 0) & (edi_1 + 0x10)

if (edi_4 == 0)
    int32_t eax_4
    eax_4.b = 0
    return eax_4

*(edi_4 + 0xc0) = arg4
*(edi_4 + 0xbc) = arg2
*(edi_4 + 0xc8) = arg5
*(edi_4 + 0xcc) = arg6
int32_t eax_7
eax_7.b = 1
return eax_7
