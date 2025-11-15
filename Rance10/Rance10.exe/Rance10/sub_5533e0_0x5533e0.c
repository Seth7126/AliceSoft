// 函数: sub_5533e0
// 地址: 0x5533e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx

if (arg2[5] u< 0x10)
    edx = arg2
else
    edx = *arg2

int32_t* ecx

if (*(arg1 + 0x24) u< 0x10)
    ecx = arg1 + 0x10
else
    ecx = *(arg1 + 0x10)

int32_t esi = arg2[4]
int32_t eax = esi
int32_t edi = *(arg1 + 0x20)

if (edi u< esi)
    eax = edi

if (sub_406ac0(eax, edx, ecx, eax) == 0 && edi u>= esi && edi u<= esi && *(arg1 + 0x28) == 1)
    int32_t edx_1 = *(arg1 + 0x30)
    int32_t* ecx_1 = *(arg1 + 0x2c)
    int32_t* eax_2 = *arg3
    
    if ((((arg3[1] - eax_2) ^ (edx_1 - ecx_1)) & 0xfffffffc) == 0)
        int32_t var_14_1 = 0
        int32_t* var_18_1 = ecx_1
        char result = sub_555ab0(eax_2, edx_1, ecx_1, eax_2)
        
        if (result != 0)
            return result

if (arg1 + 0x10 != arg2)
    sub_403590(arg1 + 0x10, arg2, 0, 0xffffffff)

sub_4274a0(arg1 + 0x2c, arg3)
sub_42c9c0(arg1 + 0x2c, 0xc)

if (*(arg1 + 0x28) != 1)
    *(arg1 + 0x28) = 1
    sub_553710(arg1)

return sub_553710(arg1)
