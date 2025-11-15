// 函数: sub_552d20
// 地址: 0x552d20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a8c1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::CRect::VTable* var_5c
sub_545fb0(&var_5c, *(arg1 + 0x2d0), *(arg1 + 0x2d4), arg1 + 0x2d8)
int32_t var_8_1 = 0
int32_t ecx_1 = *(arg2 + 0x7c) - 1
int32_t var_48
int32_t eax_10

switch (ecx_1)
    case 1, 4, 7
        int32_t eax_7
        int32_t edx_1
        edx_1:eax_7 = sx.q(var_48)
        eax_10 = neg.d((eax_7 - edx_1) s>> 1)
    case 2, 5, 8
        eax_10 = neg.d(var_48)
    default
        eax_10 = 0

int32_t var_44
int32_t edx_3 = var_44
int32_t result

switch (ecx_1)
    case 3, 4, 5
        int32_t eax_14
        int32_t edx_2
        edx_2:eax_14 = sx.q(edx_3)
        edx_3 = var_44
        result = neg.d((eax_14 - edx_2) s>> 1)
    case 6, 7, 8
        result = neg.d(edx_3)
    default
        result = 0

int32_t* esi = *(arg1 + 0x2c4)
int32_t xmm0 = (zx.o(0)).d
int32_t edi = *(arg1 + 0x2c8)
int32_t result_1 = result
int32_t var_2c = 0

if (esi != edi)
    int32_t var_50
    int32_t edx_4 = edx_3 - var_50
    int32_t var_54
    int32_t var_34 = var_54
    int32_t var_38 = edx_4
    
    do
        int32_t* edx_5 = *esi
        int32_t* eax_18 = &var_34
        int32_t ecx_2 = int.d(xmm0)
        int32_t var_30 = ecx_2
        
        if (ecx_2 s>= var_54)
            eax_18 = &var_30
        
        void* ecx_3 = *edx_5
        int32_t eax_19 = *eax_18
        int32_t ebx_3 = var_48 - eax_19
        int32_t var_20 = ebx_3
        int32_t eax_20
        
        if (ecx_3 == 0)
            eax_20 = 0
        else if (*(edx_5 + 0x16) == 0)
            int32_t* ecx_4 = *(ecx_3 + 0x118)
            
            if (ecx_4 != 0)
                eax_20 = (*(*ecx_4 + 0x10))(eax_2)
            else
                eax_20 = 0
        else
            eax_20 = edx_5[0xb]
        
        int32_t* ecx_5 = &var_20
        int32_t var_14 = eax_20
        
        if (ebx_3 s>= eax_20)
            ecx_5 = &var_14
        
        int32_t ebx_4 = *ecx_5
        void* ecx_6 = *edx_5
        var_20 = ebx_4
        int32_t eax_22
        
        if (ecx_6 == 0)
            eax_22 = 0
        else if (*(edx_5 + 0x16) == 0)
            int32_t* ecx_7 = *(ecx_6 + 0x118)
            
            if (ecx_7 != 0)
                eax_22 = (*(*ecx_7 + 0x14))(eax_2)
            else
                eax_22 = 0
        else
            eax_22 = edx_5[0xc]
        
        int32_t* ecx_8 = &var_38
        var_14 = eax_22
        
        if (edx_4 s>= eax_22)
            ecx_8 = &var_14
        
        struct common::CPoint::VTable* const var_74_1 = &common::CPoint::`vftable'
        struct common::CSize::VTable* const var_68_1 = &common::CSize::`vftable'
        int32_t var_64_1 = ebx_4
        struct common::CRect::VTable* const var_78_1 = &common::CRect::`vftable'
        int32_t eax_24 = *ecx_8
        int32_t ecx_10 = eax_19 - var_30
        int32_t var_70_1 = ecx_10
        var_14 = eax_24
        int32_t var_6c_1 = var_50
        int32_t var_60_1 = eax_24
        var_8_1.b = 1
        void var_138
        int128_t* eax_25 = sub_526a90(&var_138, arg2)
        var_8_1.b = 2
        void* ecx_13 = *(eax_25 + 0xbc)
        void* ecx_14
        
        if (ecx_13 != 0)
            ecx_14 = *(ecx_13 + 8)
        else
            ecx_14 = data_7fcba0
        
        _mm_cvtepi32_ps(zx.o(eax_10))
        _mm_cvtepi32_ps(zx.o(result_1))
        sub_4b9f80(eax_25, ecx_14)
        bool cond:2_1 = *(eax_25 + 0xa8) == 0
        int32_t ecx_16 = var_14
        *(eax_25 + 0x58) = ecx_10
        *(eax_25 + 0x5c) = var_50
        int32_t eax_30 = var_20
        eax_25[6].d = eax_30
        *(eax_25 + 0x64) = ecx_16
        char eax_31
        
        if (cond:2_1 || eax_30 s<= 0)
            eax_31 = 0
        else
            eax_31 = 1
        
        int128_t* var_14c_3 = eax_25
        *(eax_25 + 0xa8) = eax_31
        *(eax_25 + 0x7c) = 1
        sub_54e2e0(edx_5)
        var_8_1.b = 3
        int32_t* var_80
        
        if (var_80 != 0)
            int32_t edx_7 = var_80[1]
            var_80[1] -= 1
            (**var_80)(edx_7 - 1)
            var_80 = nullptr
        
        int32_t* var_84
        
        if (var_84 != 0)
            (*(*var_84 + 4))(eax_2)
            var_84 = nullptr
        
        int32_t* var_7c
        
        if (var_7c != 0)
            int32_t edx_9 = var_7c[1]
            var_7c[1] -= 1
            (**var_7c)(edx_9 - 1)
        
        esi = &esi[1]
        var_8_1.b = 0
        result = *(arg1 + 0x2b8) + var_20
        xmm0 = _mm_cvtepi32_ps(zx.o(result)) f+ var_2c
        var_2c = xmm0
    while (esi != edi)

fsbase->NtTib.ExceptionList = ExceptionList
return result
