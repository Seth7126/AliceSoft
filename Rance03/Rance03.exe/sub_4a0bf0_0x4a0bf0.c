// 函数: sub_4a0bf0
// 地址: 0x4a0bf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bc47a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_144
int32_t eax_2 = __security_cookie ^ &var_144
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5 = sub_4a4020(*(arg1 + 0x5c))
void* eax_6 = sub_4a4020(*(arg1 + 0x60))
void* eax_7 = sub_4a3970(*(arg1 + 0x64))

if (*(eax_5 + 0x30) != 0)
    void* ecx_3 = *(eax_5 + 0x34)
    *(eax_5 + 0x30) = 0
    *(ecx_3 + 0x14) = 1

if (*(eax_6 + 0x30) != 0)
    *(eax_6 + 0x30) = 0
    *(*(eax_6 + 0x34) + 0x14) = 1

int32_t eax_10 = *(arg1 + 0xb8)
int32_t esi_1 = *(arg1 + 0x100)
int32_t ecx_4 = *(arg1 + 0xc4)
int128_t var_108 = *(arg1 + 0x104)
int32_t eax_11 = *(arg1 + 0xbc)
int32_t var_f8 = *(arg1 + 0x114)
int32_t var_f4 = *(arg1 + 0x118)
int128_t xmm0_3 = *(arg1 + 0x11c)
int32_t eax_12 = *(arg1 + 0xfc)
struct partsengine::CCharSpriteProperty::VTable* const var_114 =
    &partsengine::CCharSpriteProperty::`vftable'
int32_t var_110 = eax_12
int32_t var_10c = esi_1
int128_t var_f0 = xmm0_3
int32_t eax_13 = ecx_4 * 2
int32_t var_c_1 = 0
void* eax_15 = arg1 + 0xc8
int32_t var_10c_1 = esi_1 + eax_11 - eax_13 - sub_4ff540(&var_114)

if (*(eax_15 + 0x14) u>= 0x10)
    eax_15 = *eax_15

bool cond:2 = sub_44a260(eax_15) == 0
void* esi_4 = *(eax_5 + 0x34)
int32_t eax_18 = **(*(esi_4 + 0x28) + 4)

if (cond:2)
    if ((*(eax_18 + 8))(eax_4) != 0x12)
        (*(**(*(esi_4 + 0x28) + 4) + 4))()
        struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_29 =
            sub_69adc6(0x50)
        struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_138_2 = eax_29
        var_c_1.b = 0x13
        struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_16
        
        if (eax_29 == 0)
            ecx_16 = nullptr
        else
            ecx_16 = sub_4ff5c0(eax_29, *(esi_4 + 0x3c))
        
        var_c_1.b = 0
        *(*(esi_4 + 0x28) + 4) = ecx_16
        *(esi_4 + 0x14) = 1
    
    sub_502e30(*(*(esi_4 + 0x28) + 4), eax_10 - 0x10, eax_11)
    void* esi_5 = *(eax_5 + 0x34)
    
    if ((*(**(*(esi_5 + 0x28) + 4) + 8))() != 0x12)
        (*(**(*(esi_5 + 0x28) + 4) + 4))()
        struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_39 =
            sub_69adc6(0x50)
        struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_138_3 = eax_39
        var_c_1.b = 0x1f
        struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_23
        
        if (eax_39 == 0)
            ecx_23 = nullptr
        else
            ecx_23 = sub_4ff5c0(eax_39, *(esi_5 + 0x3c))
        
        *(*(esi_5 + 0x28) + 4) = ecx_23
        *(esi_5 + 0x14) = 1
    
    void* esi_6 = *(*(esi_5 + 0x28) + 4)
    struct partsengine::CConstructionProcess::VTable* var_e0
    sub_47f050(&var_e0)
    var_c_1.b = 0x25
    int32_t var_b4_1 = eax_10 - 0x10
    int32_t var_b0_1 = eax_11
    int32_t var_dc_1 = 4
    int32_t var_c4_1 = 0
    int32_t var_c0_1 = 0
    int128_t var_ac_1 = data_709340
    sub_481250(esi_6 + 0x2c, &var_e0)
    var_c_1.b = 0
    sub_47f160(&var_e0)
else
    if ((*(eax_18 + 8))(eax_4) != 0x12)
        (*(**(*(esi_4 + 0x28) + 4) + 4))()
        struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_22 =
            sub_69adc6(0x50)
        struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_138_1 = eax_22
        var_c_1.b = 7
        struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_12
        
        if (eax_22 == 0)
            ecx_12 = nullptr
        else
            ecx_12 = sub_4ff5c0(eax_22, *(esi_4 + 0x3c))
        
        var_c_1.b = 0
        *(*(esi_4 + 0x28) + 4) = ecx_12
        *(esi_4 + 0x14) = 1
    
    sub_502f00(*(*(esi_4 + 0x28) + 4), arg1 + 0xc8)

void* esi_7 = *(eax_5 + 0x34)

if ((*(**(*(esi_7 + 0x28) + 4) + 8))(eax_4) != 0x12)
    (*(**(*(esi_7 + 0x28) + 4) + 4))()
    struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_52 =
        sub_69adc6(0x50)
    struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_138_4 = eax_52
    var_c_1.b = 0x2c
    struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_30
    
    if (eax_52 == 0)
        ecx_30 = nullptr
    else
        ecx_30 = sub_4ff5c0(eax_52, *(esi_7 + 0x3c))
    
    var_c_1.b = 0
    *(*(esi_7 + 0x28) + 4) = ecx_30
    *(esi_7 + 0x14) = 1

sub_503c60(*(*(esi_7 + 0x28) + 4))
sub_4d1cd0(eax_6, &var_114, 1)
void* esi_9 = *(eax_6 + 0x34)
int32_t eax_57 = eax_11 - eax_13

if ((*(**(*(esi_9 + 0x28) + 4) + 8))() != 0xd)
    (*(**(*(esi_9 + 0x28) + 4) + 4))()
    struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_63 = sub_69adc6(0x15c)
    struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_138_5 = eax_63
    var_c_1.b = 0x34
    struct partsengine::CSprite::partsengine::CTextSprite::VTable** ecx_36
    
    if (eax_63 == 0)
        ecx_36 = nullptr
    else
        ecx_36 = sub_517c70(eax_63)
    
    var_c_1.b = 0
    *(*(esi_9 + 0x28) + 4) = ecx_36
    *(esi_9 + 0x14) = 1

void* eax_67 = *(*(esi_9 + 0x28) + 4)

if (eax_10 - 0x10 s>= 0 && eax_57 s>= 0)
    int32_t var_11c_1 = eax_10 - 0x10
    struct partsengine::CRect::VTable* const var_128 = &partsengine::CRect::`vftable'
    int32_t var_124_1 = 0
    int32_t var_120_1 = 0
    int32_t var_118_1 = eax_57
    
    if (sub_512700(eax_67 + 0xb4, &var_128) == 0)
        *(eax_67 + 0xb8) = 0
        *(eax_67 + 0xc0) = eax_10 - 0x10
        *(eax_67 + 0xbc) = 0
        *(eax_67 + 0xc4) = eax_57
        *(eax_67 + 0xd8) = 1

void* esi_12 = *(eax_6 + 0x34)

if ((*(**(*(esi_12 + 0x28) + 4) + 8))() != 0xd)
    (*(**(*(esi_12 + 0x28) + 4) + 4))()
    struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_77 = sub_69adc6(0x15c)
    struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_138_6 = eax_77
    var_c_1.b = 0x40
    struct partsengine::CSprite::partsengine::CTextSprite::VTable** ecx_43
    
    if (eax_77 == 0)
        ecx_43 = nullptr
    else
        ecx_43 = sub_517c70(eax_77)
    
    var_c_1.b = 0
    *(*(esi_12 + 0x28) + 4) = ecx_43
    *(esi_12 + 0x14) = 1

sub_5195c0(*(*(esi_12 + 0x28) + 4), arg1 + 0xe0)

if (*(eax_7 + 0x90) != 0x10 || *(eax_7 + 0x94) != eax_11)
    int32_t* ecx_46 = *(eax_7 + 0x200)
    *(eax_7 + 0x90) = 0x10
    *(eax_7 + 0x94) = eax_11
    
    if (ecx_46 != 0)
        (**ecx_46)()

if (*(eax_7 + 0x1f0) != arg1 + 0x140)
    int32_t* ecx_47 = *(eax_7 + 0x200)
    *(eax_7 + 0x1f0) = arg1 + 0x140
    
    if (ecx_47 != 0)
        (**ecx_47)()

void* result = arg1 + 0x158

if (*(eax_7 + 0x1f4) != result)
    int32_t* ecx_48 = *(eax_7 + 0x200)
    *(eax_7 + 0x1f4) = result
    
    if (ecx_48 != 0)
        result = (**ecx_48)()

if (*(eax_7 + 0x1f8) != arg1 + 0x170)
    int32_t* ecx_49 = *(eax_7 + 0x200)
    *(eax_7 + 0x1f8) = arg1 + 0x170
    
    if (ecx_49 != 0)
        result = (**ecx_49)()

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_144)
return result
