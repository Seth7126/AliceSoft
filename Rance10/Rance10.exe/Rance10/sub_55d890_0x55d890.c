// 函数: sub_55d890
// 地址: 0x55d890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b645
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_1e0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_f8 = edi
int32_t ebx = 0
int32_t var_11c = 0
int32_t var_148 = 0
int32_t* var_124 = nullptr
int32_t* var_144 = nullptr
int32_t var_140 = 0
int32_t var_8_1 = 0
int32_t var_188 = *(edi + 0x10)
int128_t var_180 = *(edi + 0x18)
int32_t var_184 = *(edi + 0x14)
int32_t var_170 = *(edi + 0x28)
int32_t var_16c = *(edi + 0x2c)
int32_t var_158 = *(edi + 0x40)
struct partsengine::CTextDecoration::VTable* const var_190 =
    &partsengine::CTextDecoration::`vftable'
struct textsurface::CTextSurfaceProperty::VTable* const var_18c =
    &textsurface::CTextSurfaceProperty::`vftable'
int128_t var_168 = *(edi + 0x30)
int32_t var_154 = *(edi + 0x44)
void* esi = nullptr
void* var_110 = nullptr
void* var_10c = nullptr
int32_t var_120 = 0
int32_t var_108 = 0
int32_t eax_7 = *(edi + 0xd0)
int32_t var_100 = eax_7
int32_t var_114 = eax_7
char var_f1 = 0
bool var_f2 = true
void* var_13c = nullptr
int32_t var_138 = 0
int32_t var_134 = 0
void* eax_8 = *(edi + 0xcc)
void* var_118 = eax_8
void* var_128 = eax_8
int32_t var_12c = 0
char var_f9 = 0
int32_t var_64 = 0xf
int32_t var_68 = 0
char var_78 = 0
int32_t var_7c = 0xf
int32_t var_80 = 0
char var_90 = 0
int32_t var_1c8 = *(edi + 0x50)
int128_t var_1c0 = *(edi + 0x58)
int32_t var_1c4 = *(edi + 0x54)
int32_t var_1b0 = *(edi + 0x68)
int32_t var_1ac = *(edi + 0x6c)
int128_t xmm0_7 = *(edi + 0x70)
int32_t var_198 = *(edi + 0x80)
int32_t eax_12 = *(edi + 0x84)
struct partsengine::CTextDecoration::VTable* const var_1d0 =
    &partsengine::CTextDecoration::`vftable'
struct textsurface::CTextSurfaceProperty::VTable* const var_1cc =
    &textsurface::CTextSurfaceProperty::`vftable'
int128_t var_1a8 = xmm0_7
int32_t var_194 = eax_12
var_8_1.b = 6
void** i = *arg2

if (i != arg2[1])
    int32_t* esi_1 = arg2
    
    do
        int32_t var_4c_1 = 0xf
        int32_t var_50_1 = 0
        char var_60 = 0
        sub_403590(&var_60, i, 0, 0xffffffff)
        var_8_1.b = 7
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30 = 0
        sub_403590(&var_30, &var_60, 0, 0xffffffff)
        var_8_1.b = 8
        int32_t* eax_13 = *esi_1
        int32_t var_1e4_1 = 0.d
        sub_46f570(eax_13, esi_1[1], &eax_13[6], eax_13)
        void* ecx_5 = esi_1[1] - 0x18
        void* var_104
        void* var_1e4_2 = var_104
        void* var_1e8_2 = ecx_5
        sub_417d50(ecx_5, esi_1[1])
        esi_1[1] -= 0x18
        char var_c0
        char var_a8
        int32_t var_94
        char* eax_14
        int32_t ebx_1
        
        if (*(edi + 0xf0) == 0)
            var_94 = 0xf
            int32_t var_98_1 = 0
            var_a8 = 0
            sub_403490(&var_a8, 0x75d445, nullptr)
            eax_14 = &var_a8
            ebx_1 = ebx | 2
        else
            eax_14 = sub_55e480(&var_c0, &var_60)
            ebx_1 = ebx | 1
        
        int32_t var_11c_1 = ebx_1
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        char var_48 = 0
        sub_4056a0(&var_48, eax_14)
        var_8_1 = 0xa
        
        if ((ebx_1.b & 2) != 0)
            ebx_1 &= 0xfffffffd
            var_11c_1 = ebx_1
            
            if (var_94 u>= 0x10)
                sub_403160(var_a8.d, var_94 + 1, 1)
            
            var_94 = 0xf
            int32_t var_98_2 = 0
            var_a8 = 0
        
        var_8_1.b = 0xb
        
        if ((ebx_1.b & 1) != 0)
            var_11c_1 = ebx_1 & 0xfffffffe
            int32_t var_ac
            
            if (var_ac u>= 0x10)
                sub_403160(var_c0.d, var_ac + 1, 1)
            
            var_ac = 0xf
            int32_t var_b0_1 = 0
            var_c0 = 0
        
        char* ecx_8 = &var_48
        char* ebx_3 = var_48.d
        int32_t eax_19 = 3
        
        if (var_34_1 u>= 0x10)
            ecx_8 = ebx_3
        
        if (var_38_1 u< 3)
            eax_19 = var_38_1
        
        if (sub_406ac0(eax_19, 0x7677d4, ecx_8, eax_19) == 0 && var_38_1 u>= 3 && var_38_1 u<= 3)
            int32_t eax_21 = sub_55e680(&var_60)
            int32_t* ebx_4 = var_10c
            void* eax_22
            
            if (&var_114 u< ebx_4)
                eax_22 = var_110
            
            if (&var_114 u>= ebx_4 || eax_22 u> &var_114)
                if (ebx_4 == var_120)
                    sub_404610(&var_110, 1)
                    ebx_4 = var_10c
                    var_120 = var_108
                
                if (ebx_4 != 0)
                    *ebx_4 = var_100
            else
                int32_t esi_4 = (&var_114 - eax_22) s>> 2
                
                if (ebx_4 == var_120)
                    sub_404610(&var_110, 1)
                    ebx_4 = var_10c
                    var_120 = var_108
                    eax_22 = var_110
                
                if (ebx_4 != 0)
                    *ebx_4 = *(eax_22 + (esi_4 << 2))
            
            var_10c = &ebx_4[1]
            int32_t ebx_6 = var_100
            var_100 = eax_21
            var_114 = eax_21
            int32_t eax_35
            eax_35.b = ebx_6 s% 3 != eax_21 s% 3
            var_f1 = eax_35.b
            goto label_55dd21
        
        char* ecx_13 = &var_48
        int32_t eax_42 = 4
        
        if (var_34_1 u>= 0x10)
            ecx_13 = ebx_3
        
        if (var_38_1 u< 4)
            eax_42 = var_38_1
        
        if (sub_406ac0(eax_42, "/pos", ecx_13, eax_42) == 0 && var_38_1 u>= 4 && var_38_1 u<= 4)
            void* edx_6 = var_110
            int32_t eax_43
            eax_43.b = edx_6 == var_10c
            
            if (eax_43.b == 0)
                void* eax_45 = var_10c - edx_6
                var_10c -= 4
                int32_t esi_6 = *(edx_6 + (eax_45 s>> 2 << 2) - 4)
                int32_t eax_56
                eax_56.b = var_100 s% 3 != esi_6 s% 3
                var_f1 = eax_56.b
                var_100 = esi_6
                var_114 = esi_6
            
            goto label_55de40
        
        char* ecx_18 = &var_48
        int32_t eax_59 = 4
        
        if (var_34_1 u>= 0x10)
            ecx_18 = ebx_3
        
        if (var_38_1 u< 4)
            eax_59 = var_38_1
        
        if (sub_406ac0(eax_59, "font", ecx_18, eax_59) != 0 || var_38_1 u< 4 || var_38_1 u> 4)
            char* ecx_20 = &var_48
            int32_t eax_68 = 5
            
            if (var_34_1 u>= 0x10)
                ecx_20 = ebx_3
            
            if (var_38_1 u< 5)
                eax_68 = var_38_1
            
            int32_t var_1e8_6
            
            if (sub_406ac0(eax_68, "/font", ecx_20, eax_68) != 0 || var_38_1 u< 5 || var_38_1 u> 5)
                if (sub_407560(&var_48, "time") != 0)
                    sub_404370(&var_13c, &var_128)
                    void* eax_76 = sub_55e580(&var_60)
                    var_118 = eax_76
                    var_128 = eax_76
                    
                    if (var_34_1 u< 0x10)
                        goto label_55dd38
                    
                    int32_t var_1e4_16 = 1
                    var_1e8_6 = var_34_1 + 1
                    goto label_55dd2a
                
                if (sub_407560(&var_48, "/time") != 0)
                    void* edx_12 = var_13c
                    
                    if (edx_12 != var_138)
                        int32_t eax_80 = (var_138 - edx_12) s>> 2
                        var_138 -= 4
                        void* eax_81 = *(edx_12 + (eax_80 << 2) - 4)
                        var_118 = eax_81
                        var_128 = eax_81
                    
                    goto label_55e099
                
                if (sub_407560(&var_48, "ruby").b != 0)
                    char* eax_92 = &var_78
                    var_68 = 0
                    
                    if (var_64 u>= 0x10)
                        eax_92 = var_78.d
                    
                    var_f9 = 1
                    *eax_92 = 0
                    sub_55ee40(&var_60, &var_90, &var_1d0)
                    goto label_55e099
                
                void var_d8
                
                if (var_f1 != 0)
                    if (var_f2 == 0)
                        int32_t eax_91 = &var_30
                        
                        if (var_1c_1 u>= 0x10)
                            eax_91 = var_30.d
                        
                        if (*eax_91 != 0xa)
                            struct partsengine::CTextLineSprite::VTable** eax_93 = sub_6e810c(0xfc)
                            var_104 = eax_93
                            void* eax_94 = sub_5596b0(eax_93)
                            var_104 = eax_94
                            
                            if (*(var_f8 + 0xf2) != 0)
                                sub_55bb70(eax_94)
                            
                            sub_55a7a0(eax_94, &var_190)
                            sub_403360(&var_d8, 0x75d446)
                            var_8_1.b = 0xc
                            void var_f0
                            sub_403360(&var_f0, U"\n")
                            var_8_1.b = 0xd
                            sub_55a490(eax_94, &var_f0, &var_d8, zx.d(*(var_f8 + 0xf1)), var_118, 
                                &var_12c)
                            sub_403320(&var_f0)
                            var_8_1.b = 0xb
                            sub_403320(&var_d8)
                            *(eax_94 + 0xe4) = var_100
                            sub_428f00(var_f8 + 0x9c, &var_104)
                            var_f2 = true
                    
                    var_f1 = 0
                
                if (var_f9 == 0)
                label_55e30c:
                    struct partsengine::CTextLineSprite::VTable** eax_98 = sub_6e810c(0xfc)
                    var_104 = eax_98
                    void* eax_99 = sub_5596b0(eax_98)
                    edi = var_f8
                    var_104 = eax_99
                    
                    if (*(edi + 0xf2) != 0)
                        sub_55bb70(eax_99)
                    
                    sub_55a7a0(eax_99, &var_190)
                    
                    if (sub_407560(&var_48, "/ruby") == 0)
                        if (var_20_1 != 0)
                            char* eax_103 = &var_30
                            
                            if (var_1c_1 u>= 0x10)
                                eax_103 = var_30.d
                            
                            var_f2 = eax_103[var_20_1 - 1] == 0xa
                        
                        sub_403360(&var_d8, 0x75d447)
                        var_8_1.b = 0xe
                        sub_55a490(eax_99, &var_30, &var_d8, zx.d(*(edi + 0xf1)), var_118, &var_12c)
                        var_8_1.b = 0xb
                        sub_403320(&var_d8)
                    else
                        if (var_68 != 0)
                            char* eax_101 = &var_78
                            
                            if (var_64 u>= 0x10)
                                eax_101 = var_78.d
                            
                            var_f2 = eax_101[var_68 - 1] == 0xa
                        
                        sub_55a850(eax_99, &var_1d0)
                        sub_55a490(eax_99, &var_78, &var_90, zx.d(*(edi + 0xf1)), var_118, &var_12c)
                        sub_404d20(&var_78)
                        sub_404d20(&var_90)
                        var_f9 = 0
                    
                    *(eax_99 + 0xe4) = var_100
                    sub_428f00(edi + 0x9c, &var_104)
                    sub_403320(&var_48)
                    sub_403320(&var_30)
                    var_8_1.b = 6
                    sub_403320(&var_60)
                else
                    if (sub_407560(&var_48, "/ruby") != 0)
                        goto label_55e30c
                    
                    sub_4055a0(&var_78, &var_30, 0, 0xffffffff)
                label_55e099:
                    sub_403320(&var_48)
                    sub_403320(&var_30)
                    var_8_1.b = 6
                    sub_403320(&var_60)
                    edi = var_f8
            else
                int32_t edx_11 = var_148
                int32_t eax_69
                eax_69.b = edx_11 == var_124
                char* var_1ec_5
                
                if (eax_69.b == 0)
                    int32_t* esi_8 = &var_124[-0x10]
                    void* ecx_22 = var_124 - edx_11
                    var_124 = esi_8
                    void* ecx_23 = ecx_22 & 0xffffffc0
                    int32_t var_188_1 = *(ecx_23 + edx_11 - 0x38)
                    int128_t var_180_1 = *(ecx_23 + edx_11 - 0x30)
                    int32_t var_184_1 = *(ecx_23 + edx_11 - 0x34)
                    int32_t var_170_1 = *(ecx_23 + edx_11 - 0x20)
                    int32_t var_158_1 = *(ecx_23 + edx_11 - 8)
                    int32_t var_16c_1 = *(ecx_23 + edx_11 - 0x1c)
                    int32_t var_154_1 = *(ecx_23 + edx_11 - 4)
                    int128_t var_168_1 = *(ecx_23 + edx_11 - 0x18)
                    (**esi_8)(0)
                    var_144 = esi_8
                label_55dd21:
                    
                    if (var_34_1 u< 0x10)
                        goto label_55dd38
                    
                    int32_t var_1e4_7 = 1
                    var_1e8_6 = var_34_1 + 1
                label_55dd2a:
                    var_1ec_5 = var_48.d
                    goto label_55dd2d
                
            label_55de40:
                
                if (var_34_1 u< 0x10)
                    goto label_55dd38
                
                int32_t var_1e4_9 = 1
                var_1e8_6 = var_34_1 + 1
                var_1ec_5 = ebx_3
            label_55dd2d:
                sub_403160(var_1ec_5, var_1e8_6, 1)
            label_55dd38:
                var_48 = 0
                int32_t var_38_2 = 0
                int32_t var_34_2 = 0xf
                
                if (var_1c_1 u>= 0x10)
                    sub_403160(var_30.d, var_1c_1 + 1, 1)
                
                var_8_1.b = 6
                int32_t var_1c_2 = 0xf
                int32_t var_20_2 = 0
                var_30 = 0
                
                if (var_4c_1 u>= 0x10)
                    sub_403160(var_60.d, var_4c_1 + 1, 1)
                
                edi = var_f8
        else
            sub_560e20(&var_148, &var_190)
            sub_55e890(&var_60, &var_190)
            
            if (var_34_1 u>= 0x10)
                sub_403160(var_48.d, var_34_1 + 1, 1)
            
            int32_t var_34_3 = 0xf
            int32_t var_38_3 = 0
            var_48 = 0
            
            if (var_1c_1 u>= 0x10)
                sub_403160(var_30.d, var_1c_1 + 1, 1)
            
            var_8_1.b = 6
            int32_t var_1c_3 = 0xf
            int32_t var_20_3 = 0
            var_30 = 0
            
            if (var_4c_1 u>= 0x10)
                sub_403160(var_60.d, var_4c_1 + 1, 1)
            
            var_124 = var_144
            edi = var_f8
        
        esi_1 = arg2
        ebx = var_11c_1
        i = *esi_1
    while (i != esi_1[1])
    
    if (var_7c u>= 0x10)
        sub_403160(var_90.d, var_7c + 1, 1)
    
    esi = var_110

int32_t var_7c_1 = 0xf
int32_t var_80_1 = 0
var_90 = 0

if (var_64 u>= 0x10)
    sub_403160(var_78.d, var_64 + 1, 1)

void* ecx_35 = var_13c

if (ecx_35 != 0)
    sub_403160(ecx_35, (var_134 - ecx_35) s>> 2, 4)

if (esi != 0)
    sub_403160(esi, (var_120 - esi) s>> 2, 4)

int32_t result = sub_41f4b0(&var_148)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
