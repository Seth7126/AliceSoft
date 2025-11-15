// 函数: sub_54d950
// 地址: 0x54d950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = &data_7fd34c

if (data_7fd360 u>= 0x10)
    edx = data_7fd34c

int32_t** esi = arg2
int32_t* ecx

if (esi[5] u< 0x10)
    ecx = esi
else
    ecx = *esi

int32_t ebx = esi[4]
int32_t ebp = data_7fd35c
int32_t eax = ebp

if (ebx u< ebp)
    eax = ebx

if (sub_406ac0(eax, edx, ecx, eax) != 0 || ebx u< ebp || ebx u> ebp)
    if (esi[5] u>= 0x10)
        esi = *esi
    
    int32_t* eax_5 = sub_44c320(esi)
    
    if (eax_5 == 0)
        eax_5.b = 0
        return eax_5
    
    sub_54d770(arg1)
    
    if (*arg1 == 0)
        sub_54d770(arg1)
    
    sub_450940(*arg1, eax_5)
    *(arg1 + 0x16) = 0
    (*(*eax_5 + 4))()
else
    int32_t* ecx_1 = *arg1
    
    if (ecx_1 != 0)
        int32_t esi_1 = ecx_1[1]
        ecx_1[1] -= 1
        (**ecx_1)(esi_1 - 1)
        *arg1 = 0
        int32_t eax_4
        eax_4.b = 1
        arg1[5].b = 1
        return eax_4

int32_t eax_1
eax_1.b = 1
return eax_1
