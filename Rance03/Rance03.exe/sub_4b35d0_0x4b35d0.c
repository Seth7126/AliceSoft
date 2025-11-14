// 函数: sub_4b35d0
// 地址: 0x4b35d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bd6f9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_194
int32_t eax_2 = __security_cookie ^ &var_194
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_194 = arg1
int32_t ebx = *(arg1 + 0xd8)
int32_t eax_6 = *(arg1 + 0xd0)
int32_t eax_7
int32_t edx
edx:eax_7 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x138) - *(arg1 + 0x134))
int128_t xmm0 = *(arg1 + 0x10c)
int32_t ecx_2 = *(arg1 + 0xd4)
int32_t edx_1 = edx s>> 2
int32_t esi_2 = (edx_1 u>> 0x1f) + edx_1
int32_t temp0 = divs.dp.d(sx.q(ebx), ecx_2)
int32_t var_178
int32_t* ecx_3 = &var_178
int32_t var_180 = esi_2
var_178 = temp0
int32_t esi_3 = *(arg1 + 0xe0)

if (temp0 s>= esi_2)
    ecx_3 = &var_180

int32_t xmm0_1 = *(arg1 + 0x11c)
int32_t eax_11 = *ecx_3
var_180 = xmm0_1
int32_t var_130 = xmm0_1
int32_t xmm0_2 = *(arg1 + 0x120)
int32_t eax_12 = *(arg1 + 0x104)
var_178 = xmm0_2
int32_t var_12c = xmm0_2
int128_t xmm0_3 = *(arg1 + 0x124)
int32_t var_148 = eax_12
int32_t eax_13 = *(arg1 + 0x108)
struct partsengine::CCharSpriteProperty::VTable* const var_14c =
    &partsengine::CCharSpriteProperty::`vftable'
int32_t var_144 = eax_13
int32_t var_c_1 = 0
int32_t eax_16 = eax_13 + ecx_2 - esi_3 * 2 - sub_4ff540(&var_14c)
int32_t i_1 = (*(arg1 + 0x78) - *(arg1 + 0x74)) s>> 2
int32_t var_144_1 = eax_16
int32_t i_2 = i_1

if (eax_11 s> i_1)
    int32_t i_3 = eax_11 - i_1
    void* eax_18 = arg1 + 0x10
    void* var_164_1 = eax_18
    int32_t i_4 = i_3
    i_2 = i_1 + i_3
    int32_t i
    
    do
        int32_t eax_19 = sub_47e8b0(eax_18)
        int32_t var_170
        int32_t* ecx_10 = &var_170
        int32_t eax_20 = *(arg1 + 0x78)
        var_170 = eax_19
        
        if (&var_170 u< eax_20)
            ecx_10 = *(arg1 + 0x74)
        
        if (&var_170 u>= eax_20 || ecx_10 u> &var_170)
            if (eax_20 == *(arg1 + 0x7c))
                int32_t* var_1a8_2 = ecx_10
                sub_412f20(arg1 + 0x74)
            
            int32_t* eax_23 = *(arg1 + 0x78)
            
            if (eax_23 != 0)
                *eax_23 = eax_19
        else
            if (eax_20 == *(arg1 + 0x7c))
                int32_t* var_1a8_1 = ecx_10
                sub_412f20(arg1 + 0x74)
            
            int32_t* ecx_12 = *(arg1 + 0x78)
            
            if (ecx_12 != 0)
                *ecx_12 = *(*(arg1 + 0x74) + ((&var_170 - ecx_10) s>> 2 << 2))
            
            i_3 = i_4
        
        *(arg1 + 0x78) += 4
        
        if (*(eax_19 + 0x47d) != 1)
            *(eax_19 + 0x47d) = 1
            *(eax_19 + 0x70) = 1
        
        eax_18 = var_164_1
        i = i_3
        i_3 -= 1
        i_4 = i_3
    while (i != 1)
    i_1 = i_2
else if (eax_11 s< i_1 && i_1 != eax_11)
    void* esi_7 = var_194
    
    while (i_1 s>= 0)
        sub_47e960(esi_7 + 0x10, *(*(arg1 + 0x74) + (i_1 << 2) - 4))
        *(arg1 + 0x78) -= 4
        i_1 -= 1
        
        if (i_1 == eax_11)
            break
    
    i_2 = i_1

int32_t ecx_15 = 0
int32_t var_18c_1 = 0

if (i_1 s> 0)
    int32_t eax_26 = ecx_2 - esi_3 * 2
    
    do
        void* esi_8 = *(sub_4a4020((*(arg1 + 0x74))[ecx_15]) + 0x34)
        
        if ((*(**(*(esi_8 + 0x28) + 4) + 8))(eax_4) != 0xd)
            (*(**(*(esi_8 + 0x28) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_37 =
                sub_69adc6(0x15c)
            struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_168_1 = eax_37
            var_c_1.b = 3
            struct partsengine::CSprite::partsengine::CTextSprite::VTable** ecx_21
            
            if (eax_37 == 0)
                ecx_21 = nullptr
            else
                ecx_21 = sub_517c70(eax_37)
            
            var_c_1.b = 0
            *(*(esi_8 + 0x28) + 4) = ecx_21
            *(esi_8 + 0x14) = 1
        
        void* esi_9 = *(*(esi_8 + 0x28) + 4)
        
        if (*(esi_9 + 0x10) != eax_12 || *(esi_9 + 0x14) != eax_16 || *(esi_9 + 0x18) != xmm0.d
            || *(esi_9 + 0x1c) != xmm0:4.d || *(esi_9 + 0x20) != xmm0:8.d
            || *(esi_9 + 0x24) != xmm0:0xc.d)
        label_4b395a:
            *(esi_9 + 0x18) = xmm0
            void* ebx_6 = esi_9 + 0xdc
            *(esi_9 + 0x14) = eax_16
            *(esi_9 + 0x28) = var_180
            *(esi_9 + 0x2c) = var_178
            *(esi_9 + 0x10) = eax_12
            *(esi_9 + 0x30) = xmm0_3
            int32_t var_e4_1 = 0xf
            int32_t var_e8_1 = 0
            char var_f8 = 0
            sub_401ff0(&var_f8, ebx_6, 0, 0xffffffff)
            var_c_1.b = 0xd
            bool cond:2_1 = *(ebx_6 + 0x14) u< 0x10
            *(ebx_6 + 0x10) = 0
            
            if (not(cond:2_1))
                ebx_6 = *ebx_6
            
            *ebx_6 = 0
            sub_519700(esi_9, &var_f8)
            var_c_1.b = 0
            
            if (var_e4_1 u>= 0x10)
                j__free(var_f8.d)
            
            i_1 = i_2
            *(esi_9 + 0xd8) = 1
        else
            float xmm0_4 = *(esi_9 + 0x28)
            int32_t temp3_1 = var_180
            xmm0_4 f- temp3_1
            int32_t eax_44
            eax_44:1.b = (xmm0_4 f== temp3_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_4, temp3_1) ? 1 : 0) << 2 | (xmm0_4 f< temp3_1 ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                goto label_4b395a
            
            float xmm0_5 = *(esi_9 + 0x2c)
            int32_t temp4_1 = var_178
            xmm0_5 f- temp4_1
            eax_44:1.b = (xmm0_5 f== temp4_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_5, temp4_1) ? 1 : 0) << 2 | (xmm0_5 f< temp4_1 ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4 || *(esi_9 + 0x30) != xmm0_3.d || *(esi_9 + 0x34) != xmm0_3:4.d
                    || *(esi_9 + 0x38) != xmm0_3:8.d || *(esi_9 + 0x3c) != xmm0_3:0xc.d)
                goto label_4b395a
        
        void* esi_10 = *(sub_4a4020(*(*(arg1 + 0x74) + (ecx_15 << 2))) + 0x34)
        
        if ((*(**(*(esi_10 + 0x28) + 4) + 8))() != 0xd)
            (*(**(*(esi_10 + 0x28) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_55 =
                sub_69adc6(0x15c)
            struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_168_2 = eax_55
            var_c_1.b = 0x10
            struct partsengine::CSprite::partsengine::CTextSprite::VTable** ecx_31
            
            if (eax_55 == 0)
                ecx_31 = nullptr
            else
                ecx_31 = sub_517c70(eax_55)
            
            var_c_1.b = 0
            *(*(esi_10 + 0x28) + 4) = ecx_31
            *(esi_10 + 0x14) = 1
        
        void* eax_59 = *(*(esi_10 + 0x28) + 4)
        
        if (eax_6 - esi_3 - 0x10 s>= 0 && eax_26 s>= 0 && (*(eax_59 + 0xb8) != 0
                || *(eax_59 + 0xbc) != 0 || *(eax_59 + 0xc0) != eax_6 - esi_3 - 0x10
                || *(eax_59 + 0xc4) != eax_26))
            *(eax_59 + 0xb8) = 0
            *(eax_59 + 0xbc) = 0
            *(eax_59 + 0xc0) = eax_6 - esi_3 - 0x10
            *(eax_59 + 0xc4) = eax_26
            *(eax_59 + 0xd8) = 1
        
        ecx_15 = var_18c_1 + 1
        var_18c_1 = ecx_15
    while (ecx_15 s< i_1)

void* ebx_7 = var_194
void* eax_60 = sub_4a4020(*(ebx_7 + 0x68))
void* eax_61 = *(ebx_7 + 0x68)

if (*(eax_61 + 0x47e) != 0)
    *(eax_61 + 0x47e) = 0
    *(eax_61 + 0x70) = 1

void* eax_62 = *(ebx_7 + 0x68)

if (*(eax_62 + 0x47d) != 1)
    *(eax_62 + 0x47d) = 1
    *(eax_62 + 0x70) = 1

void* esi_11 = *(eax_60 + 0x34)

if ((*(**(*(esi_11 + 0x28) + 4) + 8))(eax_4) != 0x12)
    (*(**(*(esi_11 + 0x28) + 4) + 4))()
    struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_68 =
        sub_69adc6(0x50)
    struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_168_3 = eax_68
    var_c_1.b = 0x20
    struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_38
    
    if (eax_68 == 0)
        ecx_38 = nullptr
    else
        ecx_38 = sub_4ff5c0(eax_68, *(esi_11 + 0x3c))
    
    var_c_1.b = 0
    *(*(esi_11 + 0x28) + 4) = ecx_38
    *(esi_11 + 0x14) = 1

sub_502d60(*(*(esi_11 + 0x28) + 4), eax_6 - 0x10, ecx_2)
void* esi_12 = *(eax_60 + 0x34)

if ((*(**(*(esi_12 + 0x28) + 4) + 8))() != 0x12)
    (*(**(*(esi_12 + 0x28) + 4) + 4))()
    struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_77 =
        sub_69adc6(0x50)
    struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_168_4 = eax_77
    var_c_1.b = 0x2c
    struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_43
    
    if (eax_77 == 0)
        ecx_43 = nullptr
    else
        ecx_43 = sub_4ff5c0(eax_77, *(esi_12 + 0x3c))
    
    *(*(esi_12 + 0x28) + 4) = ecx_43
    *(esi_12 + 0x14) = 1

void* esi_13 = *(*(esi_12 + 0x28) + 4)
struct partsengine::CConstructionProcess::VTable* var_e0
sub_47f050(&var_e0)
var_c_1.b = 0x32
int32_t var_b0 = ecx_2
int32_t var_dc = 6
int32_t var_c4 = 0
int32_t var_c0 = 0
int32_t var_b4 = eax_6 - 0x10
int128_t var_ac = data_7092f0
sub_481250(esi_13 + 0x2c, &var_e0)
var_c_1.b = 0
sub_47f160(&var_e0)
void* esi_14 = *(eax_60 + 0x34)
sub_510cf0(esi_14, 0x12, 1)
sub_503c60(*(*(esi_14 + 0x28) + 4))

if (*(eax_60 + 0x30) != 0)
    void* eax_82 = *(eax_60 + 0x34)
    *(eax_60 + 0x30) = 0
    *(eax_82 + 0x14) = 1

void* esi_15 = var_194
void* eax_83 = sub_4a4020(*(esi_15 + 0x6c))
void* eax_84 = *(esi_15 + 0x6c)

if (*(eax_84 + 0x47e) != 0)
    *(eax_84 + 0x47e) = 0
    *(eax_84 + 0x70) = 1

void* eax_85 = *(esi_15 + 0x6c)

if (*(eax_85 + 0x47c) != 1)
    *(eax_85 + 0x47c) = 1
    *(eax_85 + 0x70) = 1

void* esi_16 = *(eax_83 + 0x34)
sub_510cf0(esi_16, 0x12, 1)
sub_502d60(*(*(esi_16 + 0x28) + 4), eax_6 - 0x10, ecx_2)
void* esi_17 = *(eax_83 + 0x34)
sub_510cf0(esi_17, 0x12, 1)
sub_503510(*(*(esi_17 + 0x28) + 4), 0, 0, eax_6 - 0x10, ecx_2, 0xff, 0xc8, 0xc8, 0xc8)
void* esi_18 = *(eax_83 + 0x34)
sub_510cf0(esi_18, 0x12, 1)
sub_503c60(*(*(esi_18 + 0x28) + 4))

if (*(eax_83 + 0x30) != 0)
    void* eax_86 = *(eax_83 + 0x34)
    *(eax_83 + 0x30) = 0
    *(eax_86 + 0x14) = 1

void* esi_19 = sub_4a3ac0(*(var_194 + 0x70)) + 0xb4

if (*(esi_19 + 0x48) != eax_11)
    int32_t var_1a8_11 = *(esi_19 + 0x4c)
    *(esi_19 + 0x48) = eax_11
    sub_4aaa40(esi_19)
    int32_t* ecx_62 = *(esi_19 + 0x148)
    
    if (ecx_62 != 0)
        (**ecx_62)()

if (*(esi_19 + 0x34) != ebx)
    int32_t* ecx_63 = *(esi_19 + 0x148)
    *(esi_19 + 0x34) = ebx
    
    if (ecx_63 != 0)
        (**ecx_63)()

if (*(esi_19 + 0x38) != 0x10)
    int32_t* ecx_64 = *(esi_19 + 0x148)
    *(esi_19 + 0x38) = 0x10
    
    if (ecx_64 != 0)
        (**ecx_64)()

if (*(esi_19 + 0x3c) != 0x10)
    int32_t* ecx_65 = *(esi_19 + 0x148)
    *(esi_19 + 0x3c) = 0x10
    
    if (ecx_65 != 0)
        (**ecx_65)()

if (*(esi_19 + 0x40) != 0x10)
    int32_t* ecx_66 = *(esi_19 + 0x148)
    *(esi_19 + 0x40) = 0x10
    
    if (ecx_66 != 0)
        (**ecx_66)()

if (*(esi_19 + 0x44) != esi_2)
    int32_t var_1a8_12 = *(esi_19 + 0x4c)
    *(esi_19 + 0x44) = esi_2
    sub_4aaa40(esi_19)
    int32_t* ecx_68 = *(esi_19 + 0x148)
    
    if (ecx_68 != 0)
        (**ecx_68)()

void* esi_20 = var_194
void* eax_98 = sub_4a4020(*(esi_20 + 0x64))
void* eax_99 = *(esi_20 + 0x64)

if (*(eax_99 + 0x47e) != 0)
    *(eax_99 + 0x47e) = 0
    *(eax_99 + 0x70) = 1

if (*(eax_98 + 0x30) != 0)
    void* eax_100 = *(eax_98 + 0x34)
    *(eax_98 + 0x30) = 0
    *(eax_100 + 0x14) = 1

void* eax_101 = esi_20 + 0xe4

if (*(esi_20 + 0xf8) u>= 0x10)
    eax_101 = *eax_101

bool eax_102 = sub_44a260(eax_101)
void* esi_21 = *(eax_98 + 0x34)

if (eax_102 == 0)
    sub_510cf0(esi_21, 0x12, 1)
    sub_502e30(*(*(esi_21 + 0x28) + 4), eax_6 - 0x10, ebx)
    void* esi_22 = *(eax_98 + 0x34)
    sub_510cf0(esi_22, 0x12, 1)
    sub_5030f0(*(*(esi_22 + 0x28) + 4), 0, 0, eax_6 - 0x10, ebx, 0xff, 0xff, 0xff, 0xff)
else
    sub_510cf0(esi_21, 0x12, 1)
    sub_502f00(*(*(esi_21 + 0x28) + 4), arg1 + 0xe4)

void* esi_23 = *(eax_98 + 0x34)
sub_510cf0(esi_23, 0x12, 1)
int32_t* result = sub_503c60(*(*(esi_23 + 0x28) + 4))
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_194)
return result
