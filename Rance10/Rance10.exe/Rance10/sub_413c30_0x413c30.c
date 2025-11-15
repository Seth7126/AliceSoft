// 函数: sub_413c30
// 地址: 0x413c30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg2

if (arg1[5] u>= 0x10)
    arg1 = *arg1

if (esi[5] u>= 0x10)
    esi = *esi

int32_t edi_1 = arg1[4]
int32_t ebx_1 = esi[4]
int32_t eax = edi_1

if (ebx_1 u< edi_1)
    eax = ebx_1

int32_t eax_1 = sub_406ac0(eax, arg1, esi, eax)

if (eax_1 == 0)
    bool c_1 = edi_1 u< ebx_1
    
    if (edi_1 != ebx_1 && not(c_1))
        return 0
    
    eax_1 = neg.d(sbb.d(eax_1, eax_1, c_1))

return not.d(eax_1) u>> 0x1f
