// 函数: sub_556270
// 地址: 0x556270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ad61
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = *(arg1 + 0x6c)
int32_t var_14 = edi

if (*(arg1 + 0x70) != 0)
    if ((*(**(arg1 + (edi << 2) + 0x7c) + 0x20))(eax_2) == 0)
        char eax_9
        
        if (edi == 3)
            eax_9 = (*(**(arg1 + 0x84) + 0x20))()
            var_14 = 2
        
        if (edi != 3 || eax_9 == 0)
            var_14 = 1
    else
        var_14 = edi

void* esi_1 = arg1 + 0x80
int32_t i = 1
void* var_18 = esi_1
int32_t result

do
    int32_t* edi_1 = *esi_1
    
    if ((*(*edi_1 + 8))(eax_2) == 0x17)
        int32_t eax_11
        eax_11.b = edi_1[0x11].b
        
        if (eax_11.b != 0)
            int32_t eax_13 = (*(*edi_1 + 0x2c))()
            int32_t eax_15 = (*(*edi_1 + 0x28))() + arg4
            edi_1[0x11].b = 1
            esi_1 = var_18
            int32_t xmm1_2 = _mm_cvtepi32_ps(zx.o(eax_15))
            edi_1[2] = 0
            edi_1[3] = 0
            edi_1[5] = 0
            int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_13 + arg5))
            edi_1[4] = xmm1_2
            edi_1[6] = 0
            edi_1[7] = xmm0_2
            edi_1[8] = xmm1_2
            edi_1[9] = xmm0_2
    
    void* eax_16
    eax_16.b = *(arg2 + 0x13c)
    (*(*edi_1 + 0x1c))(eax_16.b.d)
    void var_dc
    int128_t* eax_18 = sub_526a90(&var_dc, arg3)
    int32_t var_8_1 = 0
    char eax_19
    
    if (*(eax_18 + 0xa8) == 0 || var_14 != i)
        eax_19 = 0
    else
        eax_19 = 1
    
    *(eax_18 + 0xa8) = eax_19
    (*(*edi_1 + 0x18))(eax_18)
    int32_t var_8_2 = 1
    int32_t* var_24
    
    if (var_24 != 0)
        int32_t edx_2 = var_24[1]
        var_24[1] -= 1
        (**var_24)(edx_2 - 1)
        var_24 = nullptr
    
    int32_t* var_28
    
    if (var_28 != 0)
        (*(*var_28 + 4))()
        var_28 = nullptr
    
    int32_t* var_20
    
    if (var_20 != 0)
        int32_t edx_4 = var_20[1]
        var_20[1] -= 1
        (**var_20)(edx_4 - 1)
        var_20 = nullptr
    
    int32_t var_8_3 = 0xffffffff
    result = (*(*edi_1 + 0x10))()
    i += 1
    esi_1 += 4
    var_18 = esi_1
while (i s< 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
