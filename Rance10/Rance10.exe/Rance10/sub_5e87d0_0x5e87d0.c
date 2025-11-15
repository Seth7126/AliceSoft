// 函数: sub_5e87d0
// 地址: 0x5e87d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 s< 0)
    return 

void* edi_1 = data_7fd4cc

if (arg1 s>= (*(edi_1 + 0x58) - *(edi_1 + 0x54)) s>> 3)
    return 

int32_t edi_2 = *(edi_1 + 0x54)
void* esi_2 = (arg1 << 3) + 4 + edi_2
__Smtx_lock_shared(esi_2)
void* edi_3 = *(edi_2 + (arg1 << 3))
__Smtx_unlock_shared(esi_2)

if (edi_3 == 0 || arg2 s< 0)
    return 

int32_t ecx = *(edi_3 + 0x6c)

if (arg2 s< (*(edi_3 + 0x70) - ecx) s>> 2)
    *(ecx + (arg2 << 2))
