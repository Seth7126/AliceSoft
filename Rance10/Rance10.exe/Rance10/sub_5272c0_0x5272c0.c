// 函数: sub_5272c0
// 地址: 0x5272c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x80) = int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0x80) * arg21)) * 0.00392156886f)
*(arg1 + 0x84) = int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0x84) * arg22)) * 0.00392156886f)
*(arg1 + 0x88) = int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0x88) * arg23)) * 0.00392156886f)
*(arg1 + 0x8c) += arg18
*(arg1 + 0x90) += arg19
*(arg1 + 0x94) += arg20
bool cond:0 = *(arg1 + 0xa8) == 0
*(arg1 + 0xa4) = int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0xa4) * arg27)) * 0.00392156886f)
char eax_15

if (cond:0 || arg28 == 0)
    eax_15 = 0
else
    eax_15 = 1

*(arg1 + 0xa8) = eax_15
int32_t eax_16 = arg24

if (eax_16 == 0)
    eax_16 = *(arg1 + 0x98)

*(arg1 + 0x98) = eax_16
int32_t eax_17

if (arg25 != 0)
    eax_17 = *(arg1 + 0x9c)
else
    eax_17 = 0

*(arg1 + 0x9c) = eax_17
int32_t eax_18 = 1

if (arg26 != 1)
    eax_18 = *(arg1 + 0xa0)

int32_t* ecx = *(arg1 + 0xb4)
*(arg1 + 0xa0) = eax_18
*(arg1 + 0x7c) = arg15
*(arg1 + 0x58) = arg6
*(arg1 + 0x5c) = arg7
*(arg1 + 0x60) = arg8
*(arg1 + 0x64) = arg9

if (ecx != 0)
    (*(*ecx + 4))()

int32_t* ecx_1 = arg29

if (ecx_1 == 0)
    ecx_1 = *(arg1 + 0xb4)

*(arg1 + 0xb4) = ecx_1

if (ecx_1 != 0)
    (**ecx_1)()

int32_t* ecx_2 = *(arg1 + 0xb8)

if (ecx_2 != 0)
    int32_t esi_1 = ecx_2[1]
    ecx_2[1] -= 1
    (**ecx_2)(esi_1 - 1)

void* esi_2 = *(arg1 + 0xb4)
void* const eax_30

if (esi_2 == 0)
    eax_30 = nullptr
else
    int32_t eax_29 = (*(**(esi_2 + 0x74) + 0xc))()
    
    if (eax_29 == 0x10)
        eax_30 = sub_518920(*(esi_2 + 0x74))
    else if (eax_29 == 0xc)
        eax_30 = sub_4b4cd0(*(esi_2 + 0x74))
    else if (eax_29 != 0xd)
        eax_30 = nullptr
    else
        eax_30 = sub_4b4cd0(sub_4ef940(*(*(esi_2 + 0x74) + 0xa4)))

*(arg1 + 0xb8) = eax_30

if (eax_30 != 0)
    *(eax_30 + 4)
    *(eax_30 + 4) += 1

void* eax_33 = *(arg1 + 0xbc)
void* eax_34

if (eax_33 != 0)
    eax_34 = *(eax_33 + 8)
else
    eax_34 = data_7fcba0

sub_4b9d50(arg1, arg2, arg3, eax_34, arg4, arg5, arg10, arg11, arg12, arg13, arg14, arg16, arg17)
return arg1
