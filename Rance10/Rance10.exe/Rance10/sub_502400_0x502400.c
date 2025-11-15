// 函数: sub_502400
// 地址: 0x502400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736f58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_30 = edi
int32_t* eax_3 = edi + 0x124
*(edi + 0x188) = 0
int32_t eax_4 = *(edi + 0x110)
int32_t var_2c
int32_t* edx = &var_2c
int32_t eax_5 = *(edi + 0x118)
var_2c = eax_5
int32_t var_28

if (eax_5 s<= 0x40)
    edx = &var_28

var_28 = 0x40
int32_t ebx = *edx
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = muls.dp.d(0x2aaaaaab, *(edi + 0x178) - *(edi + 0x174))
float xmm1 = *(edi + 0x160)
int128_t var_68 = *(edi + 0x14c)
int32_t xmm0_1 = *(edi + 0x15c)
int32_t ecx_2 = *(edi + 0x114)
int32_t edx_2 = edx_1 s>> 2
int32_t esi_2 = (edx_2 u>> 0x1f) + edx_2
int32_t i_2 = 0
int32_t temp0 = divs.dp.d(sx.q(ebx), ecx_2)
var_28 = esi_2
var_2c = temp0
int32_t* ecx_3 = &var_2c
int32_t esi_3 = *(edi + 0x11c)

if (temp0 s>= esi_2)
    ecx_3 = &var_28

struct textsurface::CTextSurfaceProperty::VTable* const var_74 =
    &textsurface::CTextSurfaceProperty::`vftable'
int32_t var_58 = xmm0_1
int32_t* ecx_4 = &var_2c
var_28 = *ecx_3
int32_t eax_12
int32_t edx_4
edx_4:eax_12 = sx.q(eax_4)
var_2c = esi_3
int32_t eax_14 = (eax_12 - edx_4) s>> 1
int32_t var_24 = eax_14
int32_t esi_4 = *(edi + 0x120)
int32_t* eax_15 = &i_2

if (esi_3 s>= eax_14)
    ecx_4 = &var_24

float var_54 = xmm1

if (*ecx_4 s> 0)
    eax_15 = ecx_4

int32_t* ecx_5 = &var_2c
int32_t eax_16 = *eax_15
int32_t ebx_1 = *(edi + 0x148)
int32_t eax_18
int32_t edx_5
edx_5:eax_18 = sx.q(ebx)
var_2c = esi_4
int32_t eax_20 = (eax_18 - edx_5) s>> 1
var_24 = eax_20
int32_t* eax_21 = &i_2
i_2 = 0

if (esi_4 s>= eax_20)
    ecx_5 = &var_24

int32_t var_6c = ebx_1

if (*ecx_5 s> 0)
    eax_21 = ecx_5

var_2c = *eax_21
int32_t var_70 = *(edi + 0x144)
int128_t var_50 = *(edi + 0x164)
int32_t var_8_1 = 0
var_24 = ebx_1

if ((ebx_1.b & 1) != 0)
    var_24 = ebx_1 + 1

int32_t eax_25 = int.d(sub_4a78b0(xmm1))
int32_t esi_5 = ebx_1

if (eax_25 s< ebx_1)
    esi_5 = eax_25

int32_t eax_26 = int.d(sub_4a78b0(*(edi + 0x15c)))
int32_t ecx_6 = ebx_1

if (eax_26 s< ebx_1)
    ecx_6 = eax_26

if (ecx_6 s< esi_5)
    ecx_6 = esi_5

int32_t i_1 = (*(edi + 0xbc) - *(edi + 0xb8)) s>> 2
int32_t ebx_2 = ebx_1 + ecx_2 - (ecx_6 + var_2c) * 2 - var_24
i_2 = i_1
int32_t eax_30 = var_28
int32_t var_6c_1 = ebx_2
void* ebx_3 = edi + 0xb8

if (eax_30 s> i_1)
    int32_t i_4 = eax_30 - i_1
    void* ecx_9 = edi + 0x48
    void* var_34_1 = ecx_9
    i_2 = i_1 + i_4
    int32_t i_3 = i_4
    int32_t i
    
    do
        struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** 
            eax_31 = sub_4c2920(ecx_9)
        int32_t ecx_10 = *(ebx_3 + 4)
        var_24 = eax_31
        int32_t edx_6
        
        if (&var_24 u< ecx_10)
            edx_6 = *ebx_3
        
        if (&var_24 u>= ecx_10 || edx_6 u> &var_24)
            if (ecx_10 == *(ebx_3 + 8))
                int32_t var_88_2 = ecx_10
                sub_42cd50(ebx_3)
            
            struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable**
                * eax_34 = *(ebx_3 + 4)
            
            if (eax_34 != 0)
                *eax_34 = eax_31
        else
            if (ecx_10 == *(ebx_3 + 8))
                int32_t var_88_1 = ecx_10
                sub_42cd50(ebx_3)
            
            int32_t* ecx_12 = *(ebx_3 + 4)
            
            if (ecx_12 != 0)
                *ecx_12 = *(*ebx_3 + ((&var_24 - edx_6) s>> 2 << 2))
        
        *(ebx_3 + 4) += 4
        ecx_9 = var_34_1
        i = i_3
        i_3 -= 1
    while (i != 1)
    i_1 = i_2
else if (eax_30 s< i_1 && i_1 != eax_30)
    while (i_1 s>= 0)
        int32_t* eax_36 = *(*ebx_3 + (i_1 << 2) - 4)
        
        if (eax_36 != 0)
            int32_t eax_38 = sub_4c29e0(edi + 0x48, &eax_36[3])
            
            if (eax_38 != 0xffffffff)
                int32_t esi_9 = eax_38 << 2
                char* eax_40 = *(edi + 0x90) + esi_9
                sub_6feca0(eax_40, &eax_40[4], *(edi + 0x94) - &eax_40[4])
                *(edi + 0x94) -= 4
                char* eax_42 = *(edi + 0x80) + esi_9
                sub_6feca0(eax_42, &eax_42[4], *(edi + 0x84) - &eax_42[4])
                *(edi + 0x84) -= 4
                sub_4ed5c0(eax_36, edi + 0x48)
                (*(*eax_36 + 4))(eax_2)
                i_1 = i_2
        
        edi = var_30
        i_1 -= 1
        i_2 = i_1
        *(edi + 0xbc) -= 4
        
        if (i_1 == var_28)
            break

int32_t ecx_21 = 0
var_24 = 0

if (i_1 s> 0)
    int32_t eax_44 = var_2c
    
    do
        void* esi_11 = *(sub_4efcc0((*ebx_3)[ecx_21]) + 0x44)
        sub_555e00(esi_11, 0x13, 1)
        sub_55f4d0(*(esi_11 + 0x80), &var_74)
        void* esi_12 = *(sub_4efcc0((*ebx_3)[ecx_21]) + 0x44)
        sub_555e00(esi_12, 0x13, 1)
        sub_55f2e0(*(esi_12 + 0x80), 0, 0, eax_4 - eax_16 - 0x10, ecx_2 - eax_44 * 2)
        ecx_21 = var_24 + 1
        var_24 = ecx_21
    while (ecx_21 s< i_2)

int32_t eax_51 = sub_4efcc0(*(var_30 + 0xac))
var_24 = eax_51
void* esi_13 = *(eax_51 + 0x44)
sub_555e00(esi_13, 0x18, 1)
sub_54b7e0(*(esi_13 + 0x80), eax_4 - 0x10, ecx_2)
void* esi_15 = *(var_24 + 0x44)
sub_555e00(esi_15, 0x18, 1)
int32_t var_88_9 = 0xc8
int32_t var_8c_4 = 0x64
int32_t var_90_2 = 0x64
int32_t var_94_2 = 0xff
int32_t var_98_2 = ecx_2
int32_t var_9c_2 = eax_4 - 0x10
sub_54bc60(*(esi_15 + 0x80))
void* esi_16 = *(var_24 + 0x44)
sub_555e00(esi_16, 0x18, 1)
sub_54c110(*(esi_16 + 0x80))
int32_t eax_53 = var_24

if (*(eax_53 + 0x40) != 0)
    *(eax_53 + 0x40) = 0

void* eax_54 = sub_4efcc0(*(var_30 + 0xb0))
void* esi_17 = *(eax_54 + 0x44)
sub_555e00(esi_17, 0x18, 1)
sub_54b7e0(*(esi_17 + 0x80), eax_4 - 0x10, ecx_2)
void* esi_19 = *(eax_54 + 0x44)
sub_555e00(esi_19, 0x18, 1)
int32_t var_88_11 = 0xc8
int32_t var_8c_6 = 0xc8
int32_t var_90_3 = 0xc8
int32_t var_94_3 = 0xff
int32_t var_98_3 = ecx_2
int32_t var_9c_3 = eax_4 - 0x10
sub_54bc60(*(esi_19 + 0x80))
void* esi_20 = *(eax_54 + 0x44)
sub_555e00(esi_20, 0x18, 1)
sub_54c110(*(esi_20 + 0x80))

if (*(eax_54 + 0x40) != 0)
    *(eax_54 + 0x40) = 0

void* esi_21 = &sub_4ef140(*(var_30 + 0xb4))[0x33]
int32_t eax_56 = var_28

if (*(esi_21 + 0x48) != eax_56)
    int32_t var_88_12 = *(esi_21 + 0x4c)
    *(esi_21 + 0x48) = eax_56
    sub_4f7c10(esi_21)
    *(esi_21 + 0x150) = 1

if (*(esi_21 + 0x34) != ebx)
    *(esi_21 + 0x34) = ebx
    *(esi_21 + 0x150) = 1

if (*(esi_21 + 0x38) != 0x10)
    *(esi_21 + 0x38) = 0x10
    *(esi_21 + 0x150) = 1

if (*(esi_21 + 0x3c) != 0x10)
    *(esi_21 + 0x3c) = 0x10
    *(esi_21 + 0x150) = 1

if (*(esi_21 + 0x40) != 0x10)
    *(esi_21 + 0x40) = 0x10
    *(esi_21 + 0x150) = 1

if (*(esi_21 + 0x44) != esi_2)
    int32_t var_88_13 = *(esi_21 + 0x4c)
    *(esi_21 + 0x44) = esi_2
    sub_4f7c10(esi_21)
    *(esi_21 + 0x150) = 1

void* eax_59 = sub_4efcc0(*(var_30 + 0xa8))
*(*(var_30 + 0xa8) + 0x1a8) = 1

if (*(eax_59 + 0x40) != 0)
    *(eax_59 + 0x40) = 0

void* eax_60 = var_30 + 0x124

if (*(var_30 + 0x138) u>= 0x10)
    eax_60 = *eax_60

if (sub_44c4e0(eax_60) == 0)
    if (ebx s<= 0)
        void* eax_63 = *(var_30 + 0xa8)
        *(eax_63 + 0x1a8) = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_63
    
    void* esi_23 = *(eax_59 + 0x44)
    sub_555e00(esi_23, 0x18, 1)
    sub_54b880(*(esi_23 + 0x80), eax_4 - 0x10, ebx)
    void* esi_24 = *(eax_59 + 0x44)
    int32_t var_88_17 = sub_555e00(esi_24, 0x18, 1)
    int32_t var_8c_8 = 0xff
    int32_t var_90_4 = 0xff
    int32_t var_94_4 = 0xff
    int32_t var_98_4 = ebx
    int32_t var_9c_4 = eax_4 - 0x10
    sub_54bab0(*(esi_24 + 0x80))
else
    void* esi_22 = *(eax_59 + 0x44)
    sub_555e00(esi_22, 0x18, 1)
    sub_54b920(*(esi_22 + 0x80), eax_3)

void* esi_25 = *(eax_59 + 0x44)
sub_555e00(esi_25, 0x18, 1)
int32_t* eax_64 = sub_54c110(*(esi_25 + 0x80))
fsbase->NtTib.ExceptionList = ExceptionList
return eax_64
