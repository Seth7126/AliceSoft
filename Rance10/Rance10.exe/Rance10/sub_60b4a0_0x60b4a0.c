// 函数: sub_60b4a0
// 地址: 0x60b4a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edx = *(arg2 + 4)

if (&edx[4] u> *(arg2 + 8))
    int32_t eax
    eax.b = 0
    return eax

int32_t esi_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(arg2 + 4) = &edx[4]
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (esi_6 u> 0)
    void* var_10_1 = arg2
    void* var_14_1 = arg1
    sub_417d50(*(arg1 + 0x58), *(arg1 + 0x5c))
    *(arg1 + 0x5c) = *(arg1 + 0x58)
    sub_60be20(arg1 + 0x58, esi_6)
    int32_t* i = *(arg1 + 0x58)
    
    for (int32_t edi_2 = *(arg1 + 0x5c); i != edi_2; i = &i[6])
        if (sub_61ed80(arg2, i).b == 0)
            eax_3.b = 0
            return eax_3

eax_3.b = 1
return eax_3
