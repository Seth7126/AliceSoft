// 函数: sub_412b80
// 地址: 0x412b80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = arg2

if (edx[5] u>= 0x10)
    edx = *edx

int32_t* ecx = arg1

if (ecx[5] u>= 0x10)
    ecx = *ecx

int32_t esi_1 = edx[4]
int32_t eax = esi_1
int32_t edi_1 = ecx[4]

if (edi_1 u< esi_1)
    eax = edi_1

int32_t eax_1 = sub_406ac0(eax, edx, ecx, eax)

if (eax_1 == 0)
    bool c_1 = esi_1 u< edi_1
    
    if (esi_1 != edi_1 && not(c_1))
        int32_t eax_2
        eax_2.b = 0
        return 0
    
    eax_1 = neg.d(sbb.d(eax_1, eax_1, c_1))

return (eax_1 u>> 0x1f).b ^ 1
