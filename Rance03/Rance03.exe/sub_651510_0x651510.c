// 函数: sub_651510
// 地址: 0x651510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ced7e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_bc
int32_t eax_2 = __security_cookie ^ &var_bc
int32_t __saved_edi
int32_t var_d0 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_bc = arg1
void** ebx = arg2
void** var_9c = ebx
struct startup::CTokenFile::VTable* const var_b8 = &startup::CTokenFile::`vftable'
int32_t var_b4 = (zx.o(0)).d
int32_t var_a4 = 0
int32_t var_a0 = 0xffffffff
int32_t var_4 = 0

if (sub_652490(&var_b8, ebx) != 0)
    while (true)
        void** var_78_1 = 0xf
        int32_t var_7c_1 = 0
        char var_8c = 0
        var_4.b = 1
        
        if (sub_652630(&var_8c).b == 0)
            if (var_a0 != 0)
                ebx = var_9c
                
                if (ebx[5] u>= 0x10)
                    ebx = *ebx
                
                void** var_d4_31 = ebx
                sub_64b530(0x7009ac)
                ebx.b = 0
            else
                ebx.b = 1
            
        label_651f06:
            sub_401fb0(&var_8c)
            break
        
        char* ecx_1 = &var_8c
        char* ebp_1 = var_8c.d
        int32_t edx_1 = 0xe
        
        if (var_78_1 u>= 0x10)
            ecx_1 = ebp_1
        
        if (var_7c_1 u< 0xe)
            edx_1 = var_7c_1
        
        int32_t eax_8
        bool cond:3_1
        
        if (edx_1 == 0)
        label_651674:
            
            if (var_7c_1 u>= 0xe)
                eax_8.b = var_7c_1 != 0xe
            else
                eax_8 = 0xffffffff
            
            cond:3_1 = eax_8 == 0
        else
            char const* const esi_1 = "IniFileVersion"
            int32_t i_1 = edx_1 - 4
            
            if (edx_1 u>= 4)
                int32_t i
                
                do
                    if (*ecx_1 != *esi_1)
                        goto label_651637
                    
                    ecx_1 = &ecx_1[4]
                    esi_1 = &esi_1[4]
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            if (i_1 == 0xfffffffc)
                eax_8 = 0
            else
            label_651637:
                int32_t eax_6
                eax_6.b = *ecx_1
                char const temp2_1 = *esi_1
                
                if (eax_6.b != temp2_1)
                    eax_8 = sbb.d(eax_6, eax_6, eax_6.b u< temp2_1) | 1
                else if (i_1 == 0xfffffffd)
                    eax_8 = 0
                else
                    eax_6.b = ecx_1[1]
                    char temp5_1 = esi_1[1]
                    
                    if (eax_6.b != temp5_1)
                        eax_8 = sbb.d(eax_6, eax_6, eax_6.b u< temp5_1) | 1
                    else if (i_1 == 0xfffffffe)
                        eax_8 = 0
                    else
                        eax_6.b = ecx_1[2]
                        char temp7_1 = esi_1[2]
                        
                        if (eax_6.b != temp7_1)
                            eax_8 = sbb.d(eax_6, eax_6, eax_6.b u< temp7_1) | 1
                        else if (i_1 == 0xffffffff)
                            eax_8 = 0
                        else
                            eax_6.b = ecx_1[3]
                            char temp8_1 = esi_1[3]
                            
                            if (eax_6.b == temp8_1)
                                eax_8 = 0
                            else
                                eax_8 = sbb.d(eax_6, eax_6, eax_6.b u< temp8_1) | 1
            
            cond:3_1 = eax_8 == 0
            
            if (eax_8 == 0)
                goto label_651674
        
        eax_8.b = cond:3_1
        void* eax_11
        char eax_24
        
        if (eax_8.b == 0)
            char* ecx_3 = &var_8c
            int32_t eax_12 = 9
            
            if (var_78_1 u>= 0x10)
                ecx_3 = ebp_1
            
            if (var_7c_1 u< 9)
                eax_12 = var_7c_1
            
            int32_t eax_13 = sub_405190(eax_12, "ViewWidth", ecx_3, eax_12)
            bool cond:2_1 = eax_13 == 0
            
            if (eax_13 == 0)
                if (var_7c_1 u>= 9)
                    eax_13.b = var_7c_1 != 9
                else
                    eax_13 = 0xffffffff
                
                cond:2_1 = eax_13 == 0
            
            eax_13.b = cond:2_1
            
            if (eax_13.b != 0)
                if (sub_6528b0(&var_b8, 0x7009ec) == 0)
                    goto label_651eac
                
                eax_11 = var_bc + 8
                goto label_651e10
            
            char* ecx_5 = &var_8c
            int32_t eax_16 = 0xa
            
            if (var_78_1 u>= 0x10)
                ecx_5 = ebp_1
            
            if (var_7c_1 u< 0xa)
                eax_16 = var_7c_1
            
            int32_t eax_17 = sub_405190(eax_16, "ViewHeight", ecx_5, eax_16)
            bool cond:5_1 = eax_17 == 0
            
            if (eax_17 == 0)
                if (var_7c_1 u>= 0xa)
                    eax_17.b = var_7c_1 != 0xa
                else
                    eax_17 = 0xffffffff
                
                cond:5_1 = eax_17 == 0
            
            eax_17.b = cond:5_1
            
            if (eax_17.b != 0)
                if (sub_6528b0(&var_b8, 0x7009fc) == 0)
                    goto label_651eac
                
                eax_11 = var_bc + 0xc
                goto label_651e10
            
            if (sub_40c250(&var_8c, "GameName") != 0)
                if (sub_6528b0(&var_b8, 0x700978) == 0)
                    goto label_651eac
                
                eax_24 = sub_652630(var_bc + 0x10)
                goto label_651e15
            
            if (sub_40c250(&var_8c, "RegName") != 0)
                if (sub_6528b0(&var_b8, 0x700984) == 0)
                    goto label_651eac
                
                eax_24 = sub_652630(var_bc + 0x28)
                goto label_651e15
            
            if (sub_40c250(&var_8c, "CodeName") != 0)
                if (sub_6528b0(&var_b8, 0x700994) == 0)
                    goto label_651eac
                
                eax_24 = sub_652630(var_bc + 0x40)
                goto label_651e15
            
            if (sub_40c250(&var_8c, "BootName") != 0)
                if (sub_6528b0(&var_b8, 0x7009a4) == 0)
                    goto label_651eac
                
                eax_24 = sub_652630(var_bc + 0x58)
                goto label_651e15
            
            if (sub_40c250(&var_8c, 0x7009a8) != 0)
                if (sub_6528b0(&var_b8, 0x700950) == 0)
                    goto label_651eac
                
                eax_24 = sub_652630(var_bc + 0x70)
                goto label_651e15
            
            char var_74
            char* ecx_22
            
            if (sub_40c250(&var_8c, "MainVM") == 0)
                if (sub_40c250(&var_8c, "LoadDLL") == 0)
                    if (sub_40c250(&var_8c, "UseCD") != 0)
                        if (sub_6528b0(&var_b8, 0x700b80) == 0)
                            goto label_651eac
                        
                        eax_24 = sub_652630(&var_8c)
                        goto label_651e15
                    
                    char* ecx_60
                    
                    if (sub_40c250(&var_8c, "VolumeValancer") == 0)
                        if (sub_40c250(&var_8c, "SaveFolder") != 0)
                            if (sub_6528b0(&var_b8, 0x700b10) == 0)
                                goto label_651eac
                            
                            eax_24 = sub_652630(var_bc + 0xa0)
                            goto label_651e15
                        
                        if (sub_40c250(&var_8c, "MsgSkipName") != 0)
                            if (sub_6528b0(&var_b8, 0x700b20) == 0)
                                goto label_651eac
                            
                            int32_t var_60_3 = 0xf
                            int32_t var_64_3 = 0
                            var_74 = 0
                            var_4.b = 0xc
                            goto label_651cf9
                        
                        if (sub_40c250(&var_8c, "UseJoypad") == 0)
                            if (sub_40c250(&var_8c, "ShowSoundSettingMenu") != 0)
                                if (sub_6528b0(&var_b8, 0x700ac8) == 0)
                                    goto label_651eac
                                
                                eax_24 = sub_652630(&var_8c)
                                goto label_651e15
                            
                            if (sub_40c250(&var_8c, "MainSurfaceBpp") != 0)
                                if (sub_6528b0(&var_b8, 0x700adc) == 0)
                                    goto label_651eac
                                
                                void var_90
                                eax_11 = &var_90
                                goto label_651e10
                            
                            if (sub_40c250(&var_8c, "DefaultVolumeRate") != 0)
                                if (sub_6528b0(&var_b8, U"=]=,") == 0)
                                    goto label_651eac
                                
                                eax_11 = var_bc + 0xbc
                                goto label_651e10
                            
                            char* eax_86 = &var_8c
                            
                            if (var_78_1 u>= 0x10)
                                eax_86 = var_8c.d
                            
                            char* var_d4_27 = eax_86
                            sub_64b530(0x700a58)
                        else
                            if (sub_6528b0(&var_b8, 0x700aa4) == 0)
                                goto label_651eac
                            
                            ecx_60 = &var_8c
                            
                            if (sub_652630(&var_8c) == 0)
                                goto label_651eb0
                            
                            *(var_bc + 0xb8) = sub_40c250(ecx_60, "true") != 0
                    else
                        int32_t var_60_2 = 0xf
                        int32_t var_64_2 = 0
                        var_74 = 0
                        var_4.b = 0xb
                        
                        if (sub_6528b0(&var_b8, 0x700b94) == 0)
                        label_651ea3:
                            ecx_22 = &var_74
                        label_651ea7:
                            sub_401fb0(ecx_22)
                        label_651eac:
                            ecx_60 = &var_8c
                        label_651eb0:
                            var_4.b = 0
                            sub_401fb0(ecx_60)
                            void** eax_88 = var_9c
                            
                            if (eax_88[5] u>= 0x10)
                                eax_88 = *eax_88
                            
                            void** var_d4_30 = eax_88
                            sub_64b530(0x700a90)
                            ebx.b = 0
                            break
                            break
                        
                        int32_t var_94
                        
                        if (sub_652960(&var_94) == 0)
                            goto label_651ea3
                        
                        if (sub_6528b0(&var_b8, &(*U"=]=,")[1]) == 0)
                            goto label_651ea3
                        
                        if (sub_6528b0(&var_b8, &(*U"=]=,")[2]) == 0)
                            goto label_651ea3
                        
                        if (sub_652630(&var_74) == 0)
                            goto label_651ea3
                        
                        int32_t var_98 = 0xffffffff
                        char eax_66 = sub_6528b0(&var_b8, &(*U"=]=,")[3])
                        char eax_67
                        
                        if (eax_66 != 0)
                            eax_67 = sub_652960(&var_98)
                        
                        if (eax_66 != 0 && eax_67 == 0)
                            goto label_651ea3
                        
                        sub_651ff0(var_bc, var_94, &var_74, var_98)
                        sub_401fb0(&var_74)
                else
                    if (sub_6528b0(&var_b8, 0x700968) == 0)
                        goto label_651eac
                    
                    if (sub_6528b0(&var_b8, 0x70096c) == 0)
                        goto label_651eac
                    
                    while (true)
                        int32_t var_48_1 = 0xf
                        int32_t var_4c_1 = 0
                        char var_5c = 0
                        var_4.b = 3
                        ecx_22 = &var_5c
                        
                        if (sub_652630(&var_5c) == 0)
                            goto label_651d0a
                        
                        if (sub_40c250(ecx_22, 0x700970) == 0)
                            void var_44
                            sub_4026d0(&var_44, &var_5c)
                            var_4.b = 4
                            void var_2c
                            char* ecx_29
                            
                            if (sub_40c250(&var_44, 0x700974) != 0)
                                ebx = var_9c
                                char* eax_49 = sub_402960(&var_2c, ebx)
                                var_4.b = 5
                                sub_410ad0(eax_49, eax_49, &var_74, &var_5c)
                                var_4.b = 7
                                sub_401fb0(&var_2c)
                                ecx_29 = &var_74
                                
                                if (sub_651510(&var_74) == 0)
                                    goto label_651e5b
                                
                                var_4.b = 4
                                sub_401fb0(ecx_29)
                                goto label_651ad6
                            
                            if (sub_40c250(&var_44, 0x700b30) != 0)
                                ebx = var_9c
                                char* eax_52 = sub_402960(&var_2c, ebx)
                                var_4.b = 8
                                sub_410ad0(eax_52, eax_52, &var_74, &var_5c)
                                var_4.b = 0xa
                                sub_401fb0(&var_2c)
                                uint8_t eax_53 = sub_605500(&var_74)
                                char eax_54
                                
                                if (eax_53 != 0)
                                    eax_54 = sub_651510(&var_74)
                                
                                if (eax_53 == 0 || eax_54 != 0)
                                    var_4.b = 4
                                    sub_401fb0(&var_74)
                                    goto label_651ad6
                                
                                ecx_29 = &var_74
                            label_651e5b:
                                sub_401fb0(ecx_29)
                            label_651e91:
                                ebx.b = 0
                                sub_401fb0(&var_44)
                                sub_401fb0(&var_5c)
                                goto label_651f06
                            
                            sub_421cd0(var_bc + 0x88, &var_5c)
                            ebx = var_9c
                        label_651ad6:
                            char eax_55 = sub_652630(&var_5c)
                            char eax_56
                            
                            if (eax_55 != 0)
                                eax_56 = sub_40c250(&var_5c, 0x700b34)
                            
                            if (eax_55 != 0 && eax_56 == 0)
                                if (sub_40c250(&var_5c, 0x700b38) == 0)
                                    char* eax_87 = &var_5c
                                    
                                    if (var_48_1 u>= 0x10)
                                        eax_87 = var_5c.d
                                    
                                    if (ebx[5] u>= 0x10)
                                        ebx = *ebx
                                    
                                    char* var_d4_29 = eax_87
                                    void** var_d8_2 = ebx
                                    sub_64b530(0x700b3c)
                                else
                                    sub_401fb0(&var_44)
                                    sub_401fb0(&var_5c)
                                    continue
                                
                                goto label_651e91
                            
                            sub_401fb0(&var_44)
                        
                        sub_401fb0(&var_5c)
                        break
            else
                if (sub_6528b0(&var_b8, 0x70095c) == 0)
                    goto label_651eac
                
                int32_t var_60_1 = 0xf
                int32_t var_64_1 = 0
                var_74 = 0
                var_4.b = 2
            label_651cf9:
                ecx_22 = &var_74
                
                if (sub_652630(&var_74) == 0)
                    goto label_651ea7
                
            label_651d0a:
                sub_401fb0(ecx_22)
        else
            if (sub_6528b0(&var_b8, 0x7009dc) == 0)
                goto label_651eac
            
            eax_11 = var_bc + 4
        label_651e10:
            eax_24 = sub_652960(eax_11)
        label_651e15:
            
            if (eax_24 == 0)
                goto label_651eac
        
        if (var_78_1 u>= 0x10)
            j__free(var_8c.d)
else
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    void** var_d4_1 = ebx
    sub_64b530(0x700a34)
    ebx.b = 0

if (var_b4 != 0)
    j__free(var_b4)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_bc)
return result
