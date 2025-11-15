// 函数: sub_5e94a0
// 地址: 0x5e94a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx_1

if (arg1 s>= 0)
    edx_1 = data_7fd4cc

int32_t edi_1

if (arg1 s< 0 || arg1 s>= (*(edx_1 + 0x58) - *(edx_1 + 0x54)) s>> 3)
    edi_1 = 0
else
    int32_t* edi = *(edx_1 + 0x54) + (arg1 << 3)
    __Smtx_lock_shared(&edi[1])
    edi_1 = *edi
    __Smtx_unlock_shared(&edi[1])

int32_t edi_2 = neg.d(edi_1)
void* edi_4 = sbb.d(edi_2, edi_2, edi_1 != 0) & (edi_1 + 0x10)

if (edi_4 != 0)
    return *(edi_4 + 0x134)

return 0xffffffff
