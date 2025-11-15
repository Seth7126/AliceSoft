// 函数: sub_5660a0
// 地址: 0x5660a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 s< 0 || arg2 s>= (*(arg1 + 0x58) - *(arg1 + 0x54)) s>> 3)
    int32_t eax
    eax.b = 0
    return eax

int32_t* esi = *(arg1 + 0x54)
int32_t ebp = arg2 << 3
void* edi_1 = ebp + 4 + esi
__Smtx_lock_shared(edi_1)
int32_t esi_1 = esi[arg2 * 2]
__Smtx_unlock_shared(edi_1)

if (esi_1 != 0)
    if (*(arg1 + 0x60) != 0)
        int32_t* edi_2 = *(arg1 + 0x54)
        void* esi_3 = ebp + 4 + edi_2
        __Smtx_lock_shared(esi_3)
        void* edi_3 = edi_2[arg2 * 2]
        __Smtx_unlock_shared(esi_3)
        (*(**(arg1 + 0x60) + 0xc))(*(edi_3 + 8))
        int32_t* edi_4 = *(arg1 + 0x54)
        void* esi_5 = ebp + 4 + edi_4
        __Smtx_lock_shared(esi_5)
        int32_t edi_5 = edi_4[arg2 * 2]
        __Smtx_unlock_shared(esi_5)
        (*(**(arg1 + 0x60) + 0x10))(edi_5)
    
    sub_431b10(*(arg1 + 0x54) + ebp)

int32_t eax_3
eax_3.b = 1
return eax_3
