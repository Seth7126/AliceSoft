// 函数: sub_467590
// 地址: 0x467590
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx

if (arg2[5] u< 0x10)
    ecx = arg2
else
    ecx = *arg2

int32_t ebx = arg2[4]
int32_t eax = 3

if (ebx u< 3)
    eax = ebx

int32_t eax_1

if (sub_406ac0(eax, 0x75eed8, ecx, eax) != 0 || ebx u< 3 || ebx u> 3)
    if (sub_407560(arg2, "float").b != 0)
        int32_t eax_2 = int.d(fconvert.t(*(arg1 + 0xc)))
        *(arg1 + 4) = 2
        *(arg1 + 8) = eax_2
        eax_2.b = 1
        return eax_2
    
    if (ebx != 0)
        eax_1.b = 0
        return eax_1
else
    int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 8)))
    *(arg1 + 4) = 1
    *(arg1 + 0xc) = xmm0_2

eax_1.b = 1
return eax_1
