// 函数: sub_500ce0
// 地址: 0x500ce0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c0fcc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1fc
int32_t eax_2 = __security_cookie ^ &var_1fc
int32_t __saved_edi
int32_t var_20c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = *(arg1 + 0x30)
void* ecx = arg1 + 0x2c
int32_t* esi = *ecx
void* var_190 = ecx

if (esi != ebx)
    do
        (**esi)(0)
        esi = &esi[0x30]
    while (esi != ebx)
    
    ecx = var_190

*(ecx + 4) = *ecx
char* ecx_2 = *(arg2 + 4)
uint32_t result

if (&ecx_2[4] u> *(arg2 + 8))
    result.b = 0
else
    uint32_t result_1 = 0
    uint32_t ebx_7 =
        ((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8 | zx.d(*ecx_2)
    *(arg2 + 4) = &ecx_2[4]
    
    if (ebx_7 s<= 0)
    label_502482:
        char* ecx_231 = *(arg2 + 4)
        int32_t esi_2 = *(arg2 + 8)
        
        if (&ecx_231[4] u> esi_2)
            result.b = 0
        else
            uint32_t ebx_15 =
                ((zx.d(ecx_231[3]) << 8 | zx.d(ecx_231[2])) << 8 | zx.d(ecx_231[1])) << 8
                | zx.d(*ecx_231)
            *(arg2 + 4) = &ecx_231[4]
            
            if (&ecx_231[8] u> esi_2)
                result.b = 0
            else
                uint32_t ecx_238 =
                    ((zx.d(ecx_231[7]) << 8 | zx.d(ecx_231[6])) << 8 | zx.d(ecx_231[5])) << 8
                    | zx.d(ecx_231[4])
                *(arg2 + 4) = &ecx_231[8]
                
                if (&ecx_231[0xc] u> esi_2)
                    result.b = 0
                else
                    uint32_t edx_10 = ((zx.d(ecx_231[0xb]) << 8 | zx.d(ecx_231[0xa])) << 8
                        | zx.d(ecx_231[9])) << 8 | zx.d(ecx_231[8])
                    *(arg2 + 4) = &ecx_231[0xc]
                    
                    if (&ecx_231[0x10] u> esi_2)
                        result.b = 0
                    else
                        uint32_t esi_9 = ((zx.d(ecx_231[0xf]) << 8 | zx.d(ecx_231[0xe])) << 8
                            | zx.d(ecx_231[0xd])) << 8 | zx.d(ecx_231[0xc])
                        *(arg2 + 4) = &ecx_231[0x10]
                        sub_503c60(arg1)
                        sub_503cf0(arg1, ebx_15, ecx_238, edx_10, esi_9)
                        result.b = 1
    else
        while (true)
            struct partsengine::CConstructionProcess::VTable* var_e0
            sub_47f050(&var_e0)
            int32_t var_c_1 = 0
            int128_t var_180_1
            __builtin_memcpy(&var_180_1, 
                "\x00\x00\x00\x00\x10\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x"
            "00\x00\x00", 
                0x18)
            uint32_t var_1d0 = 0
            int128_t xmm0_1 = data_709310
            uint32_t var_1cc = 0
            uint32_t var_1d4 = 0
            uint32_t var_1d8 = 0
            uint32_t var_1dc = 0
            uint32_t var_1f4 = 0
            uint32_t var_1f8 = 0
            uint32_t var_194 = 0
            uint32_t var_18c = 0
            uint32_t var_1f0 = 0
            uint32_t var_1ec = 0
            uint32_t var_1e0 = 0
            uint32_t var_1e4 = 0
            uint32_t var_1e8 = 0
            uint32_t var_1c8 = 0
            uint32_t var_1c0 = 0
            uint32_t var_1c4 = 0
            uint32_t var_1bc = 0
            uint32_t var_1ac = 0
            uint32_t var_1b0 = 0
            uint32_t var_1a8 = 0
            uint32_t var_1b4 = 0
            struct partsengine::CCharSpriteProperty::VTable* const var_184 =
                &partsengine::CCharSpriteProperty::`vftable'
            int32_t var_168_1 = 0
            int32_t var_164_1 = 0
            int128_t var_160_1 = xmm0_1
            int32_t var_e4_1 = 0xf
            int32_t var_e8_1 = 0
            char var_f8 = 0
            int32_t ebx_8 = 0xf
            int32_t var_100_1 = 0
            int32_t var_fc_1 = 0xf
            char var_110 = 0
            var_c_1.b = 3
            char* edx_1 = *(arg2 + 4)
            char var_1b8 = 0
            
            if (&edx_1[4] u<= *(arg2 + 8))
                uint32_t ecx_11 =
                    ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8
                    | zx.d(*edx_1)
                *(arg2 + 4) = &edx_1[4]
                
                if (ecx_11 u> 0x16)
                    goto label_5023e5
                
                uint32_t var_19c
                uint32_t var_198
                
                switch (ecx_11)
                    case 0
                        if (sub_468b20(arg2, &var_1f0) != 0 && sub_468b20(arg2, &var_1ec) != 0)
                            uint32_t var_b4_1 = var_1f0
                            int32_t var_dc_1 = 0
                            uint32_t var_b0_1 = var_1ec
                            goto label_5023e5
                    case 1
                        if (sub_468b20(arg2, &var_1f0) != 0 && sub_468b20(arg2, &var_1ec) != 0)
                            uint32_t var_b4_2 = var_1f0
                            int32_t var_dc_2 = 1
                            uint32_t var_b0_2 = var_1ec
                            goto label_5023e5
                    case 2
                        if (sub_468d00(arg2, &var_110) == 0)
                            ebx_8 = var_fc_1
                        else
                            sub_47f310(&var_e0, &var_110)
                        label_5023e5:
                            sub_481250(var_190, &var_e0)
                            
                            if (var_fc_1 u>= 0x10)
                                j__free(var_110.d)
                            
                            int32_t var_fc_2 = 0xf
                            int32_t var_100_2 = 0
                            var_110 = 0
                            
                            if (var_e4_1 u>= 0x10)
                                j__free(var_f8.d)
                            
                            int32_t var_e4_2 = 0xf
                            int32_t var_e8_2 = 0
                            var_f8 = 0
                            int32_t var_c_2 = 0xffffffff
                            sub_47f160(&var_e0)
                            result = result_1 + 1
                            result_1 = result
                            
                            if (result s>= ebx_7)
                                goto label_502482
                            
                            continue
                    case 3
                        if (sub_468b20(arg2, &var_1f4) != 0 && sub_468b20(arg2, &var_1f8) != 0
                                && sub_468b20(arg2, &var_1f0) != 0
                                && sub_468b20(arg2, &var_1ec) != 0
                                && sub_468b20(arg2, &var_1e0) != 0
                                && sub_468b20(arg2, &var_1e4) != 0
                                && sub_468b20(arg2, &var_1e8) != 0)
                            sub_47f340(&var_e0, var_1f4, var_1f8, var_1f0, var_1ec, var_1e0, 
                                var_1e4, var_1e8)
                            goto label_5023e5
                    case 4
                        if (sub_468b20(arg2, &var_1f4) != 0 && sub_468b20(arg2, &var_1f8) != 0
                                && sub_468b20(arg2, &var_1f0) != 0
                                && sub_468b20(arg2, &var_1ec) != 0
                                && sub_468b20(arg2, &var_1e0) != 0
                                && sub_468b20(arg2, &var_1e4) != 0
                                && sub_468b20(arg2, &var_1e8) != 0
                                && sub_468b20(arg2, &var_1c8) != 0)
                            sub_47f380(&var_e0, var_1f4, var_1f8, var_1f0, var_1ec, var_1e0, 
                                var_1e4, var_1e8, var_1c8)
                            goto label_5023e5
                    case 5
                        if (sub_468b20(arg2, &var_1f4) != 0 && sub_468b20(arg2, &var_1f8) != 0
                                && sub_468b20(arg2, &var_1f0) != 0
                                && sub_468b20(arg2, &var_1ec) != 0
                                && sub_468b20(arg2, &var_1c8) != 0)
                            uint32_t var_c4_1 = var_1f4
                            uint32_t var_c0_1 = var_1f8
                            uint32_t var_b4_3 = var_1f0
                            uint32_t var_b0_3 = var_1ec
                            int32_t var_dc_3 = 5
                            uint32_t var_a0_1 = var_1c8
                            goto label_5023e5
                    case 6
                        if (sub_468b20(arg2, &var_1f4) != 0 && sub_468b20(arg2, &var_1f8) != 0
                                && sub_468b20(arg2, &var_1f0) != 0
                                && sub_468b20(arg2, &var_1ec) != 0
                                && sub_468b20(arg2, &var_1e0) != 0
                                && sub_468b20(arg2, &var_1e4) != 0
                                && sub_468b20(arg2, &var_1e8) != 0
                                && sub_468b20(arg2, &var_1c8) != 0)
                            sub_47f3d0(&var_e0, var_1f4, var_1f8, var_1f0, var_1ec, var_1e0, 
                                var_1e4, var_1e8, var_1c8)
                            goto label_5023e5
                    case 7
                        if (sub_468b20(arg2, &var_1f4) != 0 && sub_468b20(arg2, &var_1f8) != 0)
                            if (sub_468d00(arg2, &var_f8) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468b20(arg2, &var_1a8) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468b20(arg2, &var_1b4) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468b20(arg2, &var_1e0) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468b20(arg2, &var_1e4) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468b20(arg2, &var_1e8) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468bc0(arg2, &var_19c) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468b20(arg2, &var_1c0) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468b20(arg2, &var_1c4) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468b20(arg2, &var_1bc) == 0)
                                ebx_8 = var_fc_1
                            else
                                char eax_66
                                int32_t ecx_62
                                eax_66, ecx_62 = sub_468bc0(arg2, &var_198)
                                
                                if (eax_66 == 0)
                                    ebx_8 = var_fc_1
                                else
                                    int32_t var_210_51 = ecx_62
                                    var_180_1.d = var_1a8
                                    var_180_1:4.d = var_1b4
                                    void var_150
                                    int32_t* eax_69
                                    int32_t ecx_64
                                    eax_69, ecx_64 = sub_47f000(&var_150, var_1e0, var_1e4, var_1e8)
                                    int32_t var_210_52 = ecx_64
                                    uint32_t var_214_5 = var_1bc
                                    uint32_t var_218_5 = var_1c4
                                    var_180_1 = *eax_69
                                    uint32_t var_168_2 = var_19c
                                    void var_130
                                    int128_t var_160_2 =
                                        *sub_47f000(&var_130, var_1c0, var_218_5, var_214_5)
                                    uint32_t var_164_2 = var_198
                                    
                                    if (sub_468b20(arg2, &var_1ac) == 0)
                                        ebx_8 = var_fc_1
                                    else
                                        if (sub_468b20(arg2, &var_1b0) != 0)
                                            sub_47f790(&var_e0, var_1f4, var_1f8, &var_f8, 
                                                &var_184, var_1ac, var_1b0)
                                            goto label_5023e5
                                        
                                        ebx_8 = var_fc_1
                    case 8
                        if (sub_468b20(arg2, &var_1f4) != 0 && sub_468b20(arg2, &var_1f8) != 0)
                            if (sub_468d00(arg2, &var_f8) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468b20(arg2, &var_1a8) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468b20(arg2, &var_1b4) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468b20(arg2, &var_1e0) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468b20(arg2, &var_1e4) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468b20(arg2, &var_1e8) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468bc0(arg2, &var_19c) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468b20(arg2, &var_1c0) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468b20(arg2, &var_1c4) == 0)
                                ebx_8 = var_fc_1
                            else if (sub_468b20(arg2, &var_1bc) == 0)
                                ebx_8 = var_fc_1
                            else
                                char eax_85
                                int32_t ecx_82
                                eax_85, ecx_82 = sub_468bc0(arg2, &var_198)
                                
                                if (eax_85 == 0)
                                    ebx_8 = var_fc_1
                                else
                                    int32_t var_210_69 = ecx_82
                                    var_180_1.d = var_1a8
                                    var_180_1:4.d = var_1b4
                                    void var_120
                                    int32_t* eax_88
                                    int32_t ecx_84
                                    eax_88, ecx_84 = sub_47f000(&var_120, var_1e0, var_1e4, var_1e8)
                                    int32_t var_210_70 = ecx_84
                                    uint32_t var_214_8 = var_1bc
                                    uint32_t var_218_8 = var_1c4
                                    var_180_1 = *eax_88
                                    uint32_t var_168_3 = var_19c
                                    void var_140
                                    int128_t var_160_3 =
                                        *sub_47f000(&var_140, var_1c0, var_218_8, var_214_8)
                                    uint32_t var_164_3 = var_198
                                    
                                    if (sub_468b20(arg2, &var_1ac) == 0)
                                        ebx_8 = var_fc_1
                                    else
                                        if (sub_468b20(arg2, &var_1b0) != 0)
                                            sub_47f850(&var_e0, var_1f4, var_1f8, &var_f8, 
                                                &var_184, var_1ac, var_1b0)
                                            goto label_5023e5
                                        
                                        ebx_8 = var_fc_1
                    case 9
                        if (sub_468b20(arg2, &var_1f4) != 0 && sub_468b20(arg2, &var_1f8) != 0
                                && sub_468b20(arg2, &var_1f0) != 0
                                && sub_468b20(arg2, &var_1ec) != 0
                                && sub_468b20(arg2, &var_1e0) != 0
                                && sub_468b20(arg2, &var_1e4) != 0
                                && sub_468b20(arg2, &var_1e8) != 0
                                && sub_468b20(arg2, &var_1c0) != 0
                                && sub_468b20(arg2, &var_1c4) != 0
                                && sub_468b20(arg2, &var_1bc) != 0)
                            sub_47f420(&var_e0, var_1f4, var_1f8, var_1f0, var_1ec, var_1e0, 
                                var_1e4, var_1e8, var_1c0, var_1c4, var_1bc)
                            goto label_5023e5
                    case 0xa
                        if (sub_468b20(arg2, &var_1f4) != 0 && sub_468b20(arg2, &var_1f8) != 0
                                && sub_468b20(arg2, &var_1f0) != 0
                                && sub_468b20(arg2, &var_1ec) != 0
                                && sub_468b20(arg2, &var_1e0) != 0
                                && sub_468b20(arg2, &var_1e4) != 0
                                && sub_468b20(arg2, &var_1e8) != 0)
                            sub_47f470(&var_e0, var_1f4, var_1f8, var_1f0, var_1ec, var_1e0, 
                                var_1e4, var_1e8)
                            goto label_5023e5
                    case 0xb
                        if (sub_468d00(arg2, &var_110) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1cc) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1d4) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1d8) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1dc) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f4) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f8) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f0) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1ec) == 0)
                            ebx_8 = var_fc_1
                        else
                            if (sub_468b20(arg2, &var_1d0) != 0)
                                sub_47f4b0(&var_e0, &var_110, var_1f4, var_1f8, var_1f0, var_1ec, 
                                    var_1cc, var_1d4, var_1d8, var_1dc, var_1d0)
                                goto label_5023e5
                            
                            ebx_8 = var_fc_1
                    case 0xc
                        if (sub_468d00(arg2, &var_110) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1cc) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1d4) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1d8) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1dc) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f4) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f8) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f0) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1ec) == 0)
                            ebx_8 = var_fc_1
                        else
                            if (sub_468b20(arg2, &var_1d0) != 0)
                                sub_47f520(&var_e0, &var_110, var_1f4, var_1f8, var_1f0, var_1ec, 
                                    var_1cc, var_1d4, var_1d8, var_1dc, var_1d0)
                                goto label_5023e5
                            
                            ebx_8 = var_fc_1
                    case 0xd
                        if (sub_468d00(arg2, &var_110) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1cc) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1d4) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1d8) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1dc) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f4) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f8) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f0) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1ec) == 0)
                            ebx_8 = var_fc_1
                        else
                            if (sub_468b20(arg2, &var_1d0) != 0)
                                sub_47f590(&var_e0, &var_110, var_1f4, var_1f8, var_1f0, var_1ec, 
                                    var_1cc, var_1d4, var_1d8, var_1dc, var_1d0)
                                goto label_5023e5
                            
                            ebx_8 = var_fc_1
                    case 0xe
                        if (sub_468d00(arg2, &var_110) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1cc) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1d4) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1d8) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1dc) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f4) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f8) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f0) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1ec) == 0)
                            ebx_8 = var_fc_1
                        else
                            if (sub_468b20(arg2, &var_1d0) != 0)
                                sub_47f600(&var_e0, &var_110, var_1f4, var_1f8, var_1f0, var_1ec, 
                                    var_1cc, var_1d4, var_1d8, var_1dc, var_1d0)
                                goto label_5023e5
                            
                            ebx_8 = var_fc_1
                    case 0xf
                        if (sub_468b20(arg2, &var_1f4) != 0 && sub_468b20(arg2, &var_1f8) != 0
                                && sub_468b20(arg2, &var_1f0) != 0
                                && sub_468b20(arg2, &var_1ec) != 0
                                && sub_468ab0(arg2, &var_1b8) != 0)
                            sub_47f670(&var_e0, var_1f4, var_1f8, var_1f0, var_1ec, (var_1b8.d).b)
                            goto label_5023e5
                    case 0x10
                        if (sub_468b20(arg2, &var_1f4) != 0 && sub_468b20(arg2, &var_1f8) != 0
                                && sub_468b20(arg2, &var_1f0) != 0
                                && sub_468b20(arg2, &var_1ec) != 0
                                && sub_468b20(arg2, &var_1e0) != 0
                                && sub_468b20(arg2, &var_1e4) != 0
                                && sub_468b20(arg2, &var_1e8) != 0
                                && sub_468ab0(arg2, &var_1b8) != 0)
                            sub_47f6a0(&var_e0, var_1f4, var_1f8, var_1f0, var_1ec, var_1e0, 
                                var_1e4, var_1e8, (var_1b8.d).b)
                            goto label_5023e5
                    case 0x11
                        if (sub_468b20(arg2, &var_1f4) != 0 && sub_468b20(arg2, &var_1f8) != 0
                                && sub_468b20(arg2, &var_1f0) != 0
                                && sub_468b20(arg2, &var_1ec) != 0
                                && sub_468b20(arg2, &var_1e0) != 0
                                && sub_468b20(arg2, &var_1e4) != 0
                                && sub_468b20(arg2, &var_1e8) != 0
                                && sub_468ab0(arg2, &var_1b8) != 0)
                            sub_47f6f0(&var_e0, var_1f4, var_1f8, var_1f0, var_1ec, var_1e0, 
                                var_1e4, var_1e8, (var_1b8.d).b)
                            goto label_5023e5
                    case 0x12
                        if (sub_468b20(arg2, &var_1f4) != 0 && sub_468b20(arg2, &var_1f8) != 0
                                && sub_468b20(arg2, &var_194) != 0
                                && sub_468b20(arg2, &var_18c) != 0
                                && sub_468b20(arg2, &var_1e0) != 0
                                && sub_468b20(arg2, &var_1e4) != 0
                                && sub_468b20(arg2, &var_1e8) != 0
                                && sub_468b20(arg2, &var_1c8) != 0)
                            sub_47f740(&var_e0, var_1f4, var_1f8, var_194, var_18c, var_1e0, 
                                var_1e4, var_1e8, var_1c8)
                            goto label_5023e5
                    case 0x13
                        if (sub_468d00(arg2, &var_110) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1cc) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1d4) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1d8) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1dc) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f4) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f8) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f0) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1ec) == 0)
                            ebx_8 = var_fc_1
                        else
                            if (sub_468b20(arg2, &var_1d0) != 0)
                                sub_47f8d0(&var_e0, &var_110, var_1f4, var_1f8, var_1f0, var_1ec, 
                                    var_1cc, var_1d4, var_1d8, var_1dc, var_1d0)
                                goto label_5023e5
                            
                            ebx_8 = var_fc_1
                    case 0x14
                        if (sub_468d00(arg2, &var_110) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1cc) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1d4) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1d8) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1dc) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f4) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f8) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f0) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1ec) == 0)
                            ebx_8 = var_fc_1
                        else
                            if (sub_468b20(arg2, &var_1d0) != 0)
                                sub_47f940(&var_e0, &var_110, var_1f4, var_1f8, var_1f0, var_1ec, 
                                    var_1cc, var_1d4, var_1d8, var_1dc, var_1d0)
                                goto label_5023e5
                            
                            ebx_8 = var_fc_1
                    case 0x15
                        if (sub_468d00(arg2, &var_110) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1cc) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1d4) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1d8) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1dc) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f4) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f8) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f0) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1ec) == 0)
                            ebx_8 = var_fc_1
                        else
                            if (sub_468b20(arg2, &var_1d0) != 0)
                                sub_47f9b0(&var_e0, &var_110, var_1f4, var_1f8, var_1f0, var_1ec, 
                                    var_1cc, var_1d4, var_1d8, var_1dc, var_1d0)
                                goto label_5023e5
                            
                            ebx_8 = var_fc_1
                    case 0x16
                        if (sub_468d00(arg2, &var_110) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1cc) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1d4) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1d8) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1dc) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f4) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f8) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1f0) == 0)
                            ebx_8 = var_fc_1
                        else if (sub_468b20(arg2, &var_1ec) == 0)
                            ebx_8 = var_fc_1
                        else
                            if (sub_468b20(arg2, &var_1d0) != 0)
                                sub_47fa20(&var_e0, &var_110, var_1f4, var_1f8, var_1f0, var_1ec, 
                                    var_1cc, var_1d4, var_1d8, var_1dc, var_1d0)
                                goto label_5023e5
                            
                            ebx_8 = var_fc_1
            
            if (ebx_8 u>= 0x10)
                j__free(var_110.d)
            
            int32_t var_fc_3 = 0xf
            int32_t var_100_3 = 0
            var_110 = 0
            
            if (var_e4_1 u>= 0x10)
                j__free(var_f8.d)
            
            int32_t var_e4_3 = 0xf
            int32_t var_e8_3 = 0
            var_f8 = 0
            sub_47f160(&var_e0)
            break
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_1fc)
return result
