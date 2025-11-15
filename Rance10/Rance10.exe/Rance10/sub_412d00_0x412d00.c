// 函数: sub_412d00
// 地址: 0x412d00
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

int32_t result = sub_406ac0(eax, edx, ecx, eax)
bool cond:2 = result != 0

if (result == 0)
    bool c_1 = esi_1 u< edi_1
    
    if (esi_1 != edi_1 && not(c_1))
        int32_t eax_1
        eax_1.b = true
        return 0xffffff01
    
    cond:2 = neg.d(sbb.d(result, result, c_1)) != 0

result.b = cond:2
return result
