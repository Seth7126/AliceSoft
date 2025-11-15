// 函数: sub_4076d0
// 地址: 0x4076d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2[5] u>= 0x10)
    arg2 = *arg2

if (arg1[5] u>= 0x10)
    arg1 = *arg1

int32_t esi_1 = arg2[4]
int32_t eax = esi_1
int32_t edi_1 = arg1[4]

if (edi_1 u< esi_1)
    eax = edi_1

int32_t result = sub_406ac0(eax, arg2, arg1, eax)
bool cond:2 = result == 0

if (result == 0)
    bool c_1 = esi_1 u< edi_1
    
    if (esi_1 != edi_1 && not(c_1))
        int32_t eax_1
        eax_1.b = false
        return 0xffffff00
    
    cond:2 = neg.d(sbb.d(result, result, c_1)) == 0

result.b = cond:2
return result
