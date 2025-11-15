// 函数: sub_521e20
// 地址: 0x521e20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

bool cond:0 = *(arg1 + 0xc) == 0
void** eax = arg2
uint32_t var_4 = 0
uint32_t result = 0

if (cond:0)
    if (eax[5] u>= 0x10)
        eax = *eax
    
    sub_44c5f0(eax, &result, &var_4)
    return result

if (eax[5] u>= 0x10)
    eax = *eax

sub_44c5f0(eax, &var_4, &result)
return result
