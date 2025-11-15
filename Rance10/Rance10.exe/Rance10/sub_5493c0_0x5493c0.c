// 函数: sub_5493c0
// 地址: 0x5493c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_104 = 0xffffffff
int32_t (* var_108)(void* arg1) = sub_73a339
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CConstructionProcess::VTable* var_100
int32_t eax_2 = __security_cookie ^ &var_100
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *arg1

if (arg3 == 0)
    (*(eax_3 + 0x34))(eax_2)
else
    (*(eax_3 + 0x30))(eax_2)

int32_t* esi = arg1[0x1f]
void* ecx = &arg1[0x1f]
int32_t ebx_1 = *(ecx + 4)
void* var_16c = ecx

if (esi != ebx_1)
    do
        (**esi)(0)
        esi = &esi[0x32]
    while (esi != ebx_1)
    
    ecx = var_16c

*(ecx + 4) = *ecx
char* ecx_2 = *(arg2 + 4)
void* result

if (&ecx_2[4] u> *(arg2 + 8))
    result.b = 0
else
    int32_t var_170_1 = 0
    uint32_t ebx_8 =
        ((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8 | zx.d(*ecx_2)
    *(arg2 + 4) = &ecx_2[4]
    uint32_t var_17c_1 = ebx_8
    
    if (ebx_8 s<= 0)
    label_54af9b:
        int32_t esi_3 = *(arg2 + 8)
        
        if (*(arg2 + 4) + 4 u> esi_3)
            result.b = 0
        else
            char* ecx_277 = *(arg2 + 4)
            uint32_t ebx_16 =
                ((zx.d(ecx_277[3]) << 8 | zx.d(ecx_277[2])) << 8 | zx.d(ecx_277[1])) << 8
                | zx.d(*ecx_277)
            *(arg2 + 4) = &ecx_277[4]
            
            if (&ecx_277[8] u> esi_3)
                result.b = 0
            else
                uint32_t ecx_284 =
                    ((zx.d(ecx_277[7]) << 8 | zx.d(ecx_277[6])) << 8 | zx.d(ecx_277[5])) << 8
                    | zx.d(ecx_277[4])
                *(arg2 + 4) = &ecx_277[8]
                
                if (&ecx_277[0xc] u> esi_3)
                    result.b = 0
                else
                    uint32_t edx_16 = ((zx.d(ecx_277[0xb]) << 8 | zx.d(ecx_277[0xa])) << 8
                        | zx.d(ecx_277[9])) << 8 | zx.d(ecx_277[8])
                    *(arg2 + 4) = &ecx_277[0xc]
                    
                    if (&ecx_277[0x10] u> esi_3)
                        result.b = 0
                    else
                        uint32_t esi_10 = ((zx.d(ecx_277[0xf]) << 8 | zx.d(ecx_277[0xe])) << 8
                            | zx.d(ecx_277[0xd])) << 8 | zx.d(ecx_277[0xc])
                        *(arg2 + 4) = &ecx_277[0x10]
                        sub_54c110(arg1)
                        sub_54c240(arg1, ebx_16, ecx_284, edx_16, esi_10)
                        result.b = 1
    else
        while (true)
            sub_4c3030(&var_100)
            int32_t var_104_1 = 0
            int128_t var_1b4_1
            __builtin_memcpy(&var_1b4_1, 
                "\x00\x00\x00\x00\x10\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x"
            "00\x00\x00", 
                0x18)
            uint32_t var_140 = 0
            int128_t xmm0_1 = data_79a8b0
            uint32_t var_130 = 0
            uint32_t var_134 = 0
            uint32_t var_138 = 0
            uint32_t var_13c = 0
            uint32_t var_110 = 0
            uint32_t var_114 = 0
            uint32_t var_184 = 0
            uint32_t var_180 = 0
            uint32_t var_118 = 0
            uint32_t var_11c = 0
            uint32_t var_12c = 0
            uint32_t var_128 = 0
            uint32_t var_124 = 0
            uint32_t var_144 = 0
            uint32_t var_158 = 0
            uint32_t var_154 = 0
            uint32_t var_150 = 0
            uint32_t var_174 = 0
            uint32_t var_168 = 0
            uint32_t var_15c = 0
            uint32_t var_160 = 0
            uint32_t var_164 = 0
            uint32_t var_178 = 0
            int32_t var_19c_1 = 0
            int32_t var_198_1 = 0
            int128_t var_194_1 = xmm0_1
            struct textsurface::CTextSurfaceProperty::VTable* const var_1b8 =
                &textsurface::CTextSurfaceProperty::`vftable'
            int32_t esi_1 = 0xf
            int32_t var_28_1 = 0
            int32_t var_24_1 = 0xf
            char var_38 = 0
            int32_t var_c_1 = 0xf
            int32_t var_10_1 = 0
            char var_20 = 0
            var_104_1.b = 3
            int32_t eax_9 = *(arg2 + 4) + 4
            char var_11d = 0
            
            if (eax_9 u<= *(arg2 + 8))
                char* ecx_4 = *(arg2 + 4)
                uint32_t edx_7 = ((zx.d(ecx_4[3]) << 8 | zx.d(ecx_4[2])) << 8 | zx.d(ecx_4[1])) << 8
                    | zx.d(*ecx_4)
                *(arg2 + 4) = &ecx_4[4]
                
                if (edx_7 u> 0x1d)
                    goto label_54af05
                
                uint32_t var_14c
                uint32_t var_148
                void var_6c
                void var_54
                uint32_t ebx_9
                uint32_t esi_2
                int128_t xmm0_13
                
                switch (edx_7)
                    case 0
                        if (sub_61ec90(arg2, &var_118) != 0 && sub_61ec90(arg2, &var_11c) != 0)
                            uint32_t var_d4_1 = var_118
                            int32_t var_fc_1 = 0
                            uint32_t var_d0_1 = var_11c
                            goto label_54af05
                    case 1
                        if (sub_61ec90(arg2, &var_118) != 0 && sub_61ec90(arg2, &var_11c) != 0)
                            uint32_t var_d4_2 = var_118
                            int32_t var_fc_2 = 1
                            uint32_t var_d0_2 = var_11c
                            goto label_54af05
                    case 2
                        if (sub_61ed80(arg2, &var_20) == 0)
                        label_54b090:
                            
                            if (var_c_1 u>= 0x10)
                                sub_403160(var_20.d, var_c_1 + 1, 1)
                            
                            esi_1 = var_24_1
                        else
                            sub_4c33a0(&var_100, &var_20)
                        label_54af05:
                            sub_4c52a0(var_16c, &var_100)
                            
                            if (var_c_1 u>= 0x10)
                                sub_403160(var_20.d, var_c_1 + 1, 1)
                            
                            int32_t var_c_2 = 0xf
                            int32_t var_10_2 = 0
                            var_20 = 0
                            
                            if (var_24_1 u>= 0x10)
                                sub_403160(var_38.d, var_24_1 + 1, 1)
                            
                            int32_t var_24_2 = 0xf
                            int32_t var_28_2 = 0
                            var_38 = 0
                            int32_t var_104_2 = 0xffffffff
                            sub_4c3130(&var_100)
                            int32_t eax_319 = var_170_1 + 1
                            var_170_1 = eax_319
                            
                            if (eax_319 s>= ebx_8)
                                goto label_54af9b
                            
                            continue
                    case 3
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0
                                && sub_61ec90(arg2, &var_118) != 0
                                && sub_61ec90(arg2, &var_11c) != 0
                                && sub_61ec90(arg2, &var_12c) != 0
                                && sub_61ec90(arg2, &var_128) != 0
                                && sub_61ec90(arg2, &var_124) != 0)
                            sub_4c33d0(&var_100, var_110, var_114, var_118, var_11c, var_12c, 
                                var_128, var_124)
                            goto label_54af05
                    case 4
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0
                                && sub_61ec90(arg2, &var_118) != 0
                                && sub_61ec90(arg2, &var_11c) != 0
                                && sub_61ec90(arg2, &var_12c) != 0
                                && sub_61ec90(arg2, &var_128) != 0
                                && sub_61ec90(arg2, &var_124) != 0
                                && sub_61ec90(arg2, &var_144) != 0)
                            sub_4c3410(&var_100, var_110, var_114, var_118, var_11c, var_12c, 
                                var_128, var_124, var_144)
                            goto label_54af05
                    case 5
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0
                                && sub_61ec90(arg2, &var_118) != 0
                                && sub_61ec90(arg2, &var_11c) != 0
                                && sub_61ec90(arg2, &var_144) != 0)
                            uint32_t var_e4_1 = var_110
                            uint32_t var_e0_1 = var_114
                            uint32_t var_d4_3 = var_118
                            uint32_t var_d0_3 = var_11c
                            int32_t var_fc_3 = 5
                            uint32_t var_c0_1 = var_144
                            goto label_54af05
                    case 6
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0
                                && sub_61ec90(arg2, &var_118) != 0
                                && sub_61ec90(arg2, &var_11c) != 0
                                && sub_61ec90(arg2, &var_12c) != 0
                                && sub_61ec90(arg2, &var_128) != 0
                                && sub_61ec90(arg2, &var_124) != 0
                                && sub_61ec90(arg2, &var_144) != 0)
                            sub_4c3460(&var_100, var_110, var_114, var_118, var_11c, var_12c, 
                                var_128, var_124, var_144)
                            goto label_54af05
                    case 7
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0)
                            if (sub_61ed80(arg2, &var_38) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_160) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_164) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_12c) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_128) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_124) == 0)
                                goto label_54b090
                            
                            if (sub_6c9300(arg2, &var_148) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_158) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_154) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_150) == 0)
                                goto label_54b090
                            
                            if (sub_6c9300(arg2, &var_14c) == 0)
                                goto label_54b090
                            
                            var_1b4_1.d = var_160
                            var_1b4_1:4.d = var_164
                            void var_1ec
                            int32_t* eax_71 = sub_402f50(&var_1ec, var_12c, var_128, var_124, 0xff)
                            uint32_t var_274_5 = var_150
                            uint32_t var_278_5 = var_154
                            var_1b4_1 = *eax_71
                            uint32_t var_19c_2 = var_148
                            void var_23c
                            int128_t var_194_2 =
                                *sub_402f50(&var_23c, var_158, var_278_5, var_274_5, 0xff)
                            uint32_t var_198_2 = var_14c
                            
                            if (sub_61ec90(arg2, &var_168) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_15c) == 0)
                                goto label_54b090
                            
                            sub_4c3680(&var_100, var_110, var_114, &var_38, &var_1b8, var_168, 
                                var_15c)
                            goto label_54af05
                    case 8
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0)
                            if (sub_61ed80(arg2, &var_38) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_160) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_164) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_12c) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_128) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_124) == 0)
                                goto label_54b090
                            
                            if (sub_6c9300(arg2, &var_148) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_158) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_154) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_150) == 0)
                                goto label_54b090
                            
                            if (sub_6c9300(arg2, &var_14c) == 0)
                                goto label_54b090
                            
                            esi_2 = var_160
                            ebx_9 = var_164
                            var_1b4_1.d = esi_2
                            var_1b4_1:4.d = ebx_9
                            void var_1fc
                            int32_t* eax_88 = sub_402f50(&var_1fc, var_12c, var_128, var_124, 0xff)
                            uint32_t var_274_8 = var_150
                            int128_t xmm0_6 = *eax_88
                            uint32_t var_278_8 = var_154
                            uint32_t var_27c_8 = var_158
                            var_1b4_1 = xmm0_6
                            uint32_t var_19c_3 = var_148
                            void var_20c
                            int128_t xmm0_8 =
                                *sub_402f50(&var_20c, var_27c_8, var_278_8, var_274_8, 0xff)
                            int128_t var_194_3 = xmm0_8
                            uint32_t var_198_3 = var_14c
                            
                            if (sub_61ec90(arg2, &var_168) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_15c) == 0)
                                goto label_54b090
                            
                            uint32_t var_e4_2 = var_110
                            uint32_t var_e0_2 = var_114
                            int32_t var_fc_4 = 8
                            sub_403590(&var_6c, &var_38, 0, 0xffffffff)
                            int128_t var_94_1 = xmm0_6
                            uint32_t var_84_1 = var_148
                            uint32_t var_80_1 = var_14c
                            xmm0_13 = xmm0_8
                        label_549d17:
                            uint32_t var_a8_1 = var_168
                            uint32_t var_98_1 = ebx_9
                            ebx_8 = var_17c_1
                            uint32_t var_9c_1 = esi_2
                            int128_t var_7c_1 = xmm0_13
                            uint32_t var_a4_1 = var_15c
                            goto label_54af05
                    case 9
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0
                                && sub_61ec90(arg2, &var_118) != 0
                                && sub_61ec90(arg2, &var_11c) != 0
                                && sub_61ec90(arg2, &var_12c) != 0
                                && sub_61ec90(arg2, &var_128) != 0
                                && sub_61ec90(arg2, &var_124) != 0
                                && sub_61ec90(arg2, &var_158) != 0
                                && sub_61ec90(arg2, &var_154) != 0
                                && sub_61ec90(arg2, &var_150) != 0)
                            sub_4c34b0(&var_100, var_110, var_114, var_118, var_11c, var_12c, 
                                var_128, var_124, var_158, var_154, var_150)
                            goto label_54af05
                    case 0xa
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0
                                && sub_61ec90(arg2, &var_118) != 0
                                && sub_61ec90(arg2, &var_11c) != 0
                                && sub_61ec90(arg2, &var_12c) != 0
                                && sub_61ec90(arg2, &var_128) != 0
                                && sub_61ec90(arg2, &var_124) != 0)
                            sub_4c3580(&var_100, var_110, var_114, var_118, var_11c, var_12c, 
                                var_128, var_124)
                            goto label_54af05
                    case 0xb
                        if (sub_61ed80(arg2, &var_20) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_130) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_134) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_138) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_13c) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_110) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_114) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_118) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_11c) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_140) == 0)
                            goto label_54b090
                        
                        int32_t var_fc_7 = 0xb
                    label_54a38c:
                        sub_403590(&var_54, &var_20, 0, 0xffffffff)
                        uint32_t var_e4_5 = var_110
                        uint32_t var_e0_5 = var_114
                        uint32_t var_d4_4 = var_118
                        uint32_t var_d0_4 = var_11c
                        uint32_t var_f4_1 = var_130
                        uint32_t var_f0_1 = var_134
                        uint32_t var_ec_1 = var_138
                        uint32_t var_e8_1 = var_13c
                        uint32_t var_f8_1 = var_140
                        goto label_54af05
                    case 0xc
                        if (sub_61ed80(arg2, &var_20) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_130) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_134) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_138) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_13c) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_110) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_114) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_118) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_11c) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_140) == 0)
                            goto label_54b090
                        
                        sub_4c35c0(&var_100, &var_20, var_110, var_114, var_118, var_11c, var_130, 
                            var_134, var_138, var_13c, var_140)
                        goto label_54af05
                    case 0xd
                        if (sub_61ed80(arg2, &var_20) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_130) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_134) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_138) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_13c) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_110) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_114) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_118) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_11c) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_140) == 0)
                            goto label_54b090
                        
                        int32_t var_fc_8 = 0xd
                        goto label_54a38c
                    case 0xe
                        if (sub_61ed80(arg2, &var_20) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_130) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_134) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_138) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_13c) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_110) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_114) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_118) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_11c) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_140) == 0)
                            goto label_54b090
                        
                        int32_t var_fc_9 = 0xe
                        goto label_54a38c
                    case 0xf
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0
                                && sub_61ec90(arg2, &var_118) != 0
                                && sub_61ec90(arg2, &var_11c) != 0
                                && sub_6c9280(arg2, &var_11d) != 0)
                            uint32_t var_e4_6 = var_110
                            uint32_t var_e0_6 = var_114
                            uint32_t var_d4_5 = var_118
                            uint32_t var_d0_5 = var_11c
                            uint32_t eax_208
                            eax_208.b = var_11d
                            int32_t var_fc_10 = 0xf
                            char var_3c_1 = eax_208.b
                            goto label_54af05
                    case 0x10
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0
                                && sub_61ec90(arg2, &var_118) != 0
                                && sub_61ec90(arg2, &var_11c) != 0
                                && sub_61ec90(arg2, &var_12c) != 0
                                && sub_61ec90(arg2, &var_128) != 0
                                && sub_61ec90(arg2, &var_124) != 0
                                && sub_6c9280(arg2, &var_11d) != 0)
                            int32_t var_fc_11 = 0x10
                        label_54a784:
                            uint32_t var_e4_7 = var_110
                            uint32_t var_e0_7 = var_114
                            uint32_t var_d4_6 = var_118
                            uint32_t var_d0_6 = var_11c
                            uint32_t var_cc_1 = var_12c
                            uint32_t var_c8_1 = var_128
                            uint32_t var_c4_1 = var_124
                            uint32_t eax_223
                            eax_223.b = var_11d
                            char var_3c_2 = eax_223.b
                            goto label_54af05
                    case 0x11
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0
                                && sub_61ec90(arg2, &var_118) != 0
                                && sub_61ec90(arg2, &var_11c) != 0
                                && sub_61ec90(arg2, &var_12c) != 0
                                && sub_61ec90(arg2, &var_128) != 0
                                && sub_61ec90(arg2, &var_124) != 0
                                && sub_6c9280(arg2, &var_11d) != 0)
                            int32_t var_fc_12 = 0x11
                            goto label_54a784
                    case 0x12
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0
                                && sub_61ec90(arg2, &var_184) != 0
                                && sub_61ec90(arg2, &var_180) != 0
                                && sub_61ec90(arg2, &var_12c) != 0
                                && sub_61ec90(arg2, &var_128) != 0
                                && sub_61ec90(arg2, &var_124) != 0
                                && sub_61ec90(arg2, &var_144) != 0)
                            sub_4c3630(&var_100, var_110, var_114, var_184, var_180, var_12c, 
                                var_128, var_124, var_144)
                            goto label_54af05
                    case 0x13
                        if (sub_61ed80(arg2, &var_20) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_130) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_134) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_138) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_13c) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_110) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_114) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_118) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_11c) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_140) == 0)
                            goto label_54b090
                        
                        int32_t var_fc_13 = 0x13
                        goto label_54a38c
                    case 0x14
                        if (sub_61ed80(arg2, &var_20) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_130) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_134) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_138) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_13c) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_110) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_114) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_118) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_11c) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_140) == 0)
                            goto label_54b090
                        
                        int32_t var_fc_14 = 0x14
                        goto label_54a38c
                    case 0x15
                        if (sub_61ed80(arg2, &var_20) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_130) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_134) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_138) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_13c) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_110) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_114) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_118) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_11c) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_140) == 0)
                            goto label_54b090
                        
                        int32_t var_fc_15 = 0x15
                        goto label_54a38c
                    case 0x16
                        if (sub_61ed80(arg2, &var_20) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_130) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_134) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_138) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_13c) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_110) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_114) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_118) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_11c) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_140) == 0)
                            goto label_54b090
                        
                        int32_t var_fc_16 = 0x16
                        goto label_54a38c
                    case 0x17
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0)
                            if (sub_61ed80(arg2, &var_38) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_160) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_164) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_12c) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_128) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_124) == 0)
                                goto label_54b090
                            
                            if (sub_6c9300(arg2, &var_148) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_158) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_154) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_150) == 0)
                                goto label_54b090
                            
                            if (sub_6c9300(arg2, &var_14c) == 0)
                                goto label_54b090
                            
                            esi_2 = var_160
                            ebx_9 = var_164
                            var_1b4_1.d = esi_2
                            var_1b4_1:4.d = ebx_9
                            void var_21c
                            int32_t* eax_109 = sub_402f50(&var_21c, var_12c, var_128, var_124, 0xff)
                            uint32_t var_274_10 = var_150
                            int128_t xmm0_14 = *eax_109
                            uint32_t var_278_11 = var_154
                            uint32_t var_27c_10 = var_158
                            var_1b4_1 = xmm0_14
                            uint32_t var_19c_4 = var_148
                            void var_22c
                            int128_t xmm0_16 =
                                *sub_402f50(&var_22c, var_27c_10, var_278_11, var_274_10, 0xff)
                            int128_t var_194_4 = xmm0_16
                            uint32_t var_198_4 = var_14c
                            
                            if (sub_61ec90(arg2, &var_168) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_15c) == 0)
                                goto label_54b090
                            
                            uint32_t var_e4_3 = var_110
                            uint32_t var_e0_3 = var_114
                            int32_t var_fc_5 = 0x17
                            sub_403590(&var_6c, &var_38, 0, 0xffffffff)
                            int128_t var_94_2 = xmm0_14
                            uint32_t var_84_2 = var_148
                            uint32_t var_80_2 = var_14c
                            xmm0_13 = xmm0_16
                            goto label_549d17
                    case 0x18
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0)
                            if (sub_61ed80(arg2, &var_38) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_160) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_164) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_12c) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_128) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_124) == 0)
                                goto label_54b090
                            
                            if (sub_6c9300(arg2, &var_148) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_158) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_154) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_150) == 0)
                                goto label_54b090
                            
                            if (sub_6c9300(arg2, &var_14c) == 0)
                                goto label_54b090
                            
                            esi_2 = var_160
                            ebx_9 = var_164
                            var_1b4_1.d = esi_2
                            var_1b4_1:4.d = ebx_9
                            void var_25c
                            int32_t* eax_128 = sub_402f50(&var_25c, var_12c, var_128, var_124, 0xff)
                            uint32_t var_274_12 = var_150
                            int128_t xmm0_21 = *eax_128
                            uint32_t var_278_14 = var_154
                            uint32_t var_27c_12 = var_158
                            var_1b4_1 = xmm0_21
                            uint32_t var_19c_5 = var_148
                            void var_24c
                            int128_t xmm0_23 =
                                *sub_402f50(&var_24c, var_27c_12, var_278_14, var_274_12, 0xff)
                            int128_t var_194_5 = xmm0_23
                            uint32_t var_198_5 = var_14c
                            
                            if (sub_61ec90(arg2, &var_168) == 0)
                                goto label_54b090
                            
                            if (sub_61ec90(arg2, &var_15c) == 0)
                                goto label_54b090
                            
                            uint32_t var_e4_4 = var_110
                            uint32_t var_e0_4 = var_114
                            int32_t var_fc_6 = 0x18
                            sub_403590(&var_6c, &var_38, 0, 0xffffffff)
                            int128_t var_94_3 = xmm0_21
                            uint32_t var_84_3 = var_148
                            uint32_t var_80_3 = var_14c
                            xmm0_13 = xmm0_23
                            goto label_549d17
                    case 0x19
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0
                                && sub_61ec90(arg2, &var_118) != 0
                                && sub_61ec90(arg2, &var_11c) != 0
                                && sub_61ec90(arg2, &var_144) != 0
                                && sub_61ec90(arg2, &var_174) != 0)
                            sub_4c3500(&var_100, var_110, var_114, var_118, var_11c, var_144, 
                                var_174)
                            goto label_54af05
                    case 0x1a
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0
                                && sub_61ec90(arg2, &var_118) != 0
                                && sub_61ec90(arg2, &var_11c) != 0
                                && sub_61ec90(arg2, &var_144) != 0
                                && sub_61ec90(arg2, &var_174) != 0)
                            sub_4c3540(&var_100, var_110, var_114, var_118, var_11c, var_144, 
                                var_174)
                            goto label_54af05
                    case 0x1b
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0
                                && sub_61ec90(arg2, &var_118) != 0
                                && sub_61ec90(arg2, &var_11c) != 0
                                && sub_61ec90(arg2, &var_178) != 0
                                && sub_6c9280(arg2, &var_11d) != 0)
                            int32_t var_fc_17 = 0x1b
                        label_54adf2:
                            uint32_t var_e4_8 = var_110
                            uint32_t var_e0_8 = var_114
                            uint32_t var_d4_7 = var_118
                            uint32_t var_d0_7 = var_11c
                            uint32_t var_ac_1 = var_178
                            uint32_t eax_302
                            eax_302.b = var_11d
                            char var_3c_3 = eax_302.b
                            goto label_54af05
                    case 0x1c
                        if (sub_61ec90(arg2, &var_110) != 0 && sub_61ec90(arg2, &var_114) != 0
                                && sub_61ec90(arg2, &var_118) != 0
                                && sub_61ec90(arg2, &var_11c) != 0
                                && sub_61ec90(arg2, &var_178) != 0
                                && sub_6c9280(arg2, &var_11d) != 0)
                            int32_t var_fc_18 = 0x1c
                            goto label_54adf2
                    case 0x1d
                        if (sub_61ed80(arg2, &var_20) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_110) == 0)
                            goto label_54b090
                        
                        if (sub_61ec90(arg2, &var_114) == 0)
                            goto label_54b090
                        
                        int32_t var_fc_19 = 0x1d
                        sub_403590(&var_54, &var_20, 0, 0xffffffff)
                        uint32_t var_e4_9 = var_110
                        uint32_t var_e0_9 = var_114
                        goto label_54af05
            
            int32_t var_c_3 = 0xf
            int32_t var_10_3 = 0
            var_20 = 0
            
            if (esi_1 u>= 0x10)
                sub_403160(var_38.d, esi_1 + 1, 1)
            
            int32_t var_24_3 = 0xf
            int32_t var_28_3 = 0
            var_38 = 0
            sub_4c3130(&var_100)
            break
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_100)
return result
