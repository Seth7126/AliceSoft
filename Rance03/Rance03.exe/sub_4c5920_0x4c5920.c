// 函数: sub_4c5920
// 地址: 0x4c5920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_12 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be722
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = *(arg1 + 0xd8)
struct partsengine::CSprite::partsengine::CTextSprite::VTable** ebp = *(arg1 + 0xdc)
void* ecx = *(arg1 + 0x5c)
int32_t var_44 = edi
struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_40 = ebp
void* eax_3 = sub_4a4020(ecx)
void* eax_4 = sub_4a4020(*(arg1 + 0x64))
void* eax_5 = sub_4a4020(*(arg1 + 0x60))
void* const var_34 = eax_5
int32_t eax_6 = sub_4ff540(arg1 + 0xe0)
sub_4d1cd0(eax_5, arg1 + 0xe0, 1)
void* esi_1 = *(eax_5 + 0x34)
struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_1c

if ((*(**(*(esi_1 + 0x28) + 4) + 8))(eax_2) != 0xd)
    (*(**(*(esi_1 + 0x28) + 4) + 4))()
    struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_11 = sub_69adc6(0x15c)
    var_1c = eax_11
    int32_t var_4 = 2
    struct partsengine::CSprite::partsengine::CTextSprite::VTable** ecx_10
    
    if (eax_11 == 0)
        ecx_10 = nullptr
    else
        ecx_10 = sub_517c70(eax_11)
    
    int32_t var_4_1 = 0xffffffff
    *(*(esi_1 + 0x28) + 4) = ecx_10
    *(esi_1 + 0x14) = 1

void* esi_2 = *(*(esi_1 + 0x28) + 4)

if (*(esi_2 + 0xc8) != 1)
    *(esi_2 + 0xc8) = 1
    sub_519640(esi_2)
    *(esi_2 + 0xd8) = 1

void* esi_4 = *(var_34 + 0x34)

if ((*(**(*(esi_4 + 0x28) + 4) + 8))() != 0xd)
    (*(**(*(esi_4 + 0x28) + 4) + 4))()
    struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_20 = sub_69adc6(0x15c)
    var_1c = eax_20
    int32_t var_4_2 = 0xe
    struct partsengine::CSprite::partsengine::CTextSprite::VTable** ecx_15
    
    if (eax_20 == 0)
        ecx_15 = nullptr
    else
        ecx_15 = sub_517c70(eax_20)
    
    int32_t var_4_3 = 0xffffffff
    *(*(esi_4 + 0x28) + 4) = ecx_15
    *(esi_4 + 0x14) = 1

*(*(*(esi_4 + 0x28) + 4) + 0xf5) = 0
int32_t var_38

if (edi s> 0 && ebp s> 0)
    sub_4d2240(eax_3, 1)
    int32_t var_20
    
    if (*(arg1 + 0x1c4) != 0)
        int32_t eax_72 = sub_5146e0(arg1 + 0x1b4)
        var_20 = eax_72
        struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_73 =
            sub_5147e0(arg1 + 0x1b4)
        var_1c = eax_73
        void* eax_75 = sub_510540(*(eax_3 + 0x34), 1)
        struct partsengine::CSprite::partsengine::CTextSprite::VTable*** ecx_38 = &var_1c
        
        if (ebp s>= eax_73)
            ecx_38 = &var_40
        
        int32_t* ecx_39 = &var_20
        
        if (var_44 s>= eax_72)
            ecx_39 = &var_44
        
        sub_502d60(eax_75, *ecx_39, *ecx_38)
        sub_4d22d0(eax_3, arg1 + 0x1b4, 0, 0, eax_72, eax_73, 0, 0, eax_72, eax_73, 1, 1)
    else
        struct partsengine::CSprite::partsengine::CTextSprite::VTable** eax_25 = *(arg1 + 0x134)
        int32_t eax_26 = *(arg1 + 0x138)
        int32_t eax_27 = *(arg1 + 0x13c)
        var_1c = *(arg1 + 0x140)
        var_20 = *(arg1 + 0x144)
        int32_t eax_30 = *(arg1 + 0x148)
        var_34 = *(arg1 + 0x14c)
        var_38 = *(arg1 + 0x150)
        int32_t eax_33 = *(arg1 + 0x154)
        void* esi_6 = *(eax_3 + 0x34)
        
        if ((*(**(*(esi_6 + 0x28) + 4) + 8))() != 0x12)
            (*(**(*(esi_6 + 0x28) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_40 =
                sub_69adc6(0x50)
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_10_1 =
                eax_40
            int32_t var_4_4 = 0x1e
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_20
            
            if (eax_40 == 0)
                ecx_20 = nullptr
            else
                ecx_20 = sub_4ff5c0(eax_40, *(esi_6 + 0x3c))
            
            int32_t var_4_5 = 0xffffffff
            *(*(esi_6 + 0x28) + 4) = ecx_20
            *(esi_6 + 0x14) = 1
        
        sub_502d60(*(*(esi_6 + 0x28) + 4), edi, ebp)
        void* esi_7 = *(eax_3 + 0x34)
        int32_t eax_47 = **(*(esi_7 + 0x28) + 4)
        struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_68_1
        int32_t var_64_2
        int32_t var_60_5
        
        if (*(arg1 + 0x114) != 0)
            if ((*(eax_47 + 8))() != 0x12)
                (*(**(*(esi_7 + 0x28) + 4) + 4))()
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_57 =
                    sub_69adc6(0x50)
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_10_3 =
                    eax_57
                int32_t var_4_8 = 0x36
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_28
                
                if (eax_57 == 0)
                    ecx_28 = nullptr
                else
                    ecx_28 = sub_4ff5c0(eax_57, *(esi_7 + 0x3c))
                
                int32_t var_4_9 = 0xffffffff
                *(*(esi_7 + 0x28) + 4) = ecx_28
                *(esi_7 + 0x14) = 1
            
            var_60_5 = eax_30
            var_64_2 = var_20
            var_68_1 = var_1c
        else
            if ((*(eax_47 + 8))() != 0x12)
                (*(**(*(esi_7 + 0x28) + 4) + 4))()
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_51 =
                    sub_69adc6(0x50)
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_10_2 =
                    eax_51
                int32_t var_4_6 = 0x2a
                struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_25
                
                if (eax_51 == 0)
                    ecx_25 = nullptr
                else
                    ecx_25 = sub_4ff5c0(eax_51, *(esi_7 + 0x3c))
                
                int32_t var_4_7 = 0xffffffff
                *(*(esi_7 + 0x28) + 4) = ecx_25
                *(esi_7 + 0x14) = 1
            
            var_60_5 = eax_27
            var_64_2 = eax_26
            var_68_1 = eax_25
        
        sub_503020(*(*(esi_7 + 0x28) + 4), 0, 0, edi, ebp, var_68_1, var_64_2, var_60_5)
        void* esi_8 = *(eax_3 + 0x34)
        
        if ((*(**(*(esi_8 + 0x28) + 4) + 8))() != 0x12)
            (*(**(*(esi_8 + 0x28) + 4) + 4))()
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_67 =
                sub_69adc6(0x50)
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** var_10_4 =
                eax_67
            int32_t var_4_10 = 0x42
            struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** ecx_33
            
            if (eax_67 == 0)
                ecx_33 = nullptr
            else
                ecx_33 = sub_4ff5c0(eax_67, *(esi_8 + 0x3c))
            
            int32_t var_4_11 = 0xffffffff
            *(*(esi_8 + 0x28) + 4) = ecx_33
            *(esi_8 + 0x14) = 1
        
        sub_5035e0(*(*(esi_8 + 0x28) + 4), 1, 1, edi - 2, ebp - 2, var_34, var_38, eax_33)
        sub_4d2290(eax_3, 0, 0, edi, ebp, var_34, var_38, eax_33, 1)
    sub_503c60(sub_510540(*(eax_3 + 0x34), 1))
    sub_4d2240(eax_4, 1)
    sub_502d60(sub_510540(*(eax_4 + 0x34), 1), 1, eax_6)
    sub_503510(sub_510540(*(eax_4 + 0x34), 1), 0, 0, 1, eax_6, 0, 0, 0, 0xff)
    sub_503c60(sub_510540(*(eax_4 + 0x34), 1))

var_38 = 0
var_34 = nullptr
sub_4c64f0(arg1 + 0xe0, arg1 + 0x118, &var_38, &var_34)
void* eax_84 = sub_4a3ac0(*(arg1 + 0x68))
void* eax_85 = sub_4a3b70(*(arg1 + 0x6c))
int32_t ebp_2 = sub_5146e0(eax_84 + 0x16c)

if (ebp_2 == 0)
    ebp_2 = *(arg1 + 0x70)

int32_t edi_3 = sub_5147e0(eax_85 + 0x16c)

if (edi_3 == 0)
    edi_3 = *(arg1 + 0x70)

void* eax_89 = var_40 - edi_3

if (*(eax_84 + 0xe8) != eax_89)
    int32_t* ecx_54 = *(eax_84 + 0x1fc)
    *(eax_84 + 0xe8) = eax_89
    
    if (ecx_54 != 0)
        (**ecx_54)()

if (*(eax_84 + 0xec) != ebp_2)
    int32_t* ecx_55 = *(eax_84 + 0x1fc)
    *(eax_84 + 0xec) = ebp_2
    
    if (ecx_55 != 0)
        (**ecx_55)()

if (*(eax_84 + 0xf0) != ebp_2)
    int32_t* ecx_56 = *(eax_84 + 0x1fc)
    *(eax_84 + 0xf0) = ebp_2
    
    if (ecx_56 != 0)
        (**ecx_56)()

if (*(eax_84 + 0xf4) != ebp_2)
    int32_t* ecx_57 = *(eax_84 + 0x1fc)
    *(eax_84 + 0xf4) = ebp_2
    
    if (ecx_57 != 0)
        (**ecx_57)()

void* const eax_94 = var_34

if (*(eax_84 + 0xf8) != eax_94)
    int32_t var_60_14 = *(eax_84 + 0x100)
    *(eax_84 + 0xf8) = eax_94
    sub_4aaa40(eax_84 + 0xb4)
    int32_t* ecx_59 = *(eax_84 + 0x1fc)
    
    if (ecx_59 != 0)
        (**ecx_59)()

void* ecx_62 = var_40 - *(arg1 + 0x74) * 2 - ebp_2

if (*(eax_84 + 0xfc) != ecx_62)
    int32_t var_60_15 = *(eax_84 + 0x100)
    *(eax_84 + 0xfc) = ecx_62
    sub_4aaa40(eax_84 + 0xb4)
    int32_t* ecx_64 = *(eax_84 + 0x1fc)
    
    if (ecx_64 != 0)
        (**ecx_64)()

sub_4aac00(eax_84 + 0xb4, arg1 + 0x19c)
int32_t eax_101 = var_44 - ebp_2

if (*(eax_85 + 0xe8) != eax_101)
    int32_t* ecx_66 = *(eax_85 + 0x1fc)
    *(eax_85 + 0xe8) = eax_101
    
    if (ecx_66 != 0)
        (**ecx_66)()

if (*(eax_85 + 0xec) != edi_3)
    int32_t* ecx_67 = *(eax_85 + 0x1fc)
    *(eax_85 + 0xec) = edi_3
    
    if (ecx_67 != 0)
        (**ecx_67)()

if (*(eax_85 + 0xf0) != edi_3)
    int32_t* ecx_68 = *(eax_85 + 0x1fc)
    *(eax_85 + 0xf0) = edi_3
    
    if (ecx_68 != 0)
        (**ecx_68)()

if (*(eax_85 + 0xf4) != edi_3)
    int32_t* ecx_69 = *(eax_85 + 0x1fc)
    *(eax_85 + 0xf4) = edi_3
    
    if (ecx_69 != 0)
        (**ecx_69)()

int32_t eax_106 = var_38

if (*(eax_85 + 0xf8) != eax_106)
    int32_t var_60_17 = *(eax_85 + 0x100)
    *(eax_85 + 0xf8) = eax_106
    sub_4aaa40(eax_85 + 0xb4)
    int32_t* ecx_71 = *(eax_85 + 0x1fc)
    
    if (ecx_71 != 0)
        (**ecx_71)()

int32_t ecx_74 = var_44 - *(arg1 + 0x74) * 2 - edi_3

if (*(eax_85 + 0xfc) != ecx_74)
    int32_t var_60_18 = *(eax_85 + 0x100)
    *(eax_85 + 0xfc) = ecx_74
    sub_4aaa40(eax_85 + 0xb4)
    int32_t* ecx_76 = *(eax_85 + 0x1fc)
    
    if (ecx_76 != 0)
        (**ecx_76)()

sub_4aac00(eax_85 + 0xb4, arg1 + 0x184)
void* eax_112 = sub_4a4020(*(arg1 + 0x5c))

if (*(eax_112 + 0x30) != 0)
    *(eax_112 + 0x30) = 0
    *(*(eax_112 + 0x34) + 0x14) = 1

void* eax_114 = sub_4a4020(*(arg1 + 0x64))

if (*(eax_114 + 0x30) != 0)
    *(eax_114 + 0x30) = 0
    *(*(eax_114 + 0x34) + 0x14) = 1

void* eax_116 = sub_4a4020(*(arg1 + 0x60))

if (*(eax_116 + 0x30) != 0)
    *(eax_116 + 0x30) = 0
    *(*(eax_116 + 0x34) + 0x14) = 1

void* result = *(arg1 + 0x5c)

if (*(result + 0x47c) != 1)
    *(result + 0x47c) = 1
    *(result + 0x70) = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
