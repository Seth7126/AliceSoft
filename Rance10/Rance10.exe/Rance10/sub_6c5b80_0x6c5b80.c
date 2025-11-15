// 函数: sub_6c5b80
// 地址: 0x6c5b80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748dc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_90 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = arg2
void** var_7c = ebx
int128_t var_78
__builtin_memset(&var_78, 0, 0x14)
int32_t var_64 = 0xffffffff
int32_t var_8_1 = 0
char var_44
int32_t var_30_1
char var_2c
int32_t var_18
char* eax_5

if (sub_6c67c0(&var_78, ebx) != 0)
    while (true)
        var_18 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        var_8_1.b = 3
        void** var_80
        char var_5c
        
        if (sub_6c6930(&var_2c) == 0)
            if (var_64 != 0)
                void** eax_93 = var_7c
                
                if (eax_93[5] u>= 0x10)
                    eax_93 = *eax_93
                
                var_80 = eax_93
                int32_t var_30_4 = 0xf
                int32_t var_34_8 = 0
                var_44 = 0
                sub_403490(&var_44, 0x783368, 0x1c)
                var_8_1.b = 4
                var_8_1.b = 5
                sub_6c52e0(sub_409240(&var_80, &var_44, &var_5c, &var_80))
                int32_t var_48
                
                if (var_48 u>= 0x10)
                    sub_403160(var_5c.d, var_48 + 1, 1)
                
                int32_t var_48_1 = 0xf
                int32_t var_4c_1 = 0
                var_5c = 0
                
                if (var_30_4 u>= 0x10)
                    sub_403160(var_44.d, var_30_4 + 1, 1)
                
                ebx.b = 0
            else
                ebx.b = 1
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c.d, var_18 + 1, 1)
            
            break
        
        char* ecx_4 = &var_2c
        ebx = var_2c.d
        int32_t eax_11 = 0xe
        
        if (var_18 u>= 0x10)
            ecx_4 = ebx
        
        if (var_1c_2 u< 0xe)
            eax_11 = var_1c_2
        
        if (sub_406ac0(eax_11, "IniFileVersion", ecx_4, eax_11) != 0 || var_1c_2 u< 0xe
                || var_1c_2 u> 0xe)
            void** ecx_7 = &var_2c
            int32_t eax_20 = 9
            
            if (var_18 u>= 0x10)
                ecx_7 = ebx
            
            if (var_1c_2 u< 9)
                eax_20 = var_1c_2
            
            int32_t var_30_3
            void* eax_25
            char* ecx_9
            
            if (sub_406ac0(eax_20, "ViewWidth", ecx_7, eax_20) == 0 && var_1c_2 u>= 9
                    && var_1c_2 u<= 9)
                if (sub_6c6bb0(&var_78, 0x7832fc) == 0)
                    goto label_6c62ab
                
                var_30_3 = 0xf
                int32_t var_34_3 = 0
                var_44 = 0
                var_8_1.b = 7
                
                if (sub_6c6930(&var_44) == 0)
                    goto label_6c62cb
                
                ecx_9 = &var_44
                
                if (var_30_3 u>= 0x10)
                    ecx_9 = var_44.d
                
                eax_25 = &arg1[2]
                goto label_6c5dfc
            
            char* ecx_32
            
            if (sub_407560(&var_2c, "ViewHeight") != 0)
                if (sub_6c6bb0(&var_78, 0x783334) == 0)
                    goto label_6c62df
                
                var_30_3 = 0xf
                int32_t var_34_4 = 0
                var_44 = 0
                var_8_1.b = 8
                
                if (sub_6c6930(&var_44) != 0)
                    ecx_9 = &var_44
                    
                    if (var_30_3 u>= 0x10)
                        ecx_9 = var_44.d
                    
                    eax_25 = &arg1[3]
                    goto label_6c5dfc
                
            label_6c62cb:
                
                if (var_30_3 u< 0x10)
                    goto label_6c62df
                
                sub_403160(var_44.d, var_30_3 + 1, 1)
            label_6c62df:
                ecx_32 = &var_2c
            label_6c62e2:
                var_8_1.b = 0
                sub_403320(ecx_32)
            label_6c62eb:
                void** eax_91 = var_7c
                
                if (eax_91[5] u>= 0x10)
                    eax_91 = *eax_91
                
                var_80 = eax_91
                var_30_1 = 0xf
                int32_t var_34_7 = 0
                var_44 = 0
                sub_403490(&var_44, 0x783458, 0x12)
                var_8_1.b = 0xd
                eax_5 = sub_409240(&var_80, &var_44, &var_2c, &var_80)
                var_8_1.b = 0xe
                goto label_6c5c29
            
            if (sub_407560(&var_2c, "SubViewWidth") != 0)
                if (sub_6c6bb0(&var_78, 0x783320) == 0)
                    goto label_6c62df
                
                var_30_3 = 0xf
                int32_t var_34_5 = 0
                var_44 = 0
                var_8_1.b = 9
                
                if (sub_6c6930(&var_44) == 0)
                    goto label_6c62cb
                
                ecx_9 = &var_44
                
                if (var_30_3 u>= 0x10)
                    ecx_9 = var_44.d
                
                eax_25 = &arg1[4]
                goto label_6c5dfc
            
            bool cond:11_1
            
            if (sub_407560(&var_2c, "SubViewHeight") != 0)
                if (sub_6c6bb0(&var_78, 0x7832cc) == 0)
                    goto label_6c62df
                
                var_30_3 = 0xf
                int32_t var_34_6 = 0
                var_44 = 0
                var_8_1.b = 0xa
                
                if (sub_6c6930(&var_44) == 0)
                    goto label_6c62cb
                
                ecx_9 = &var_44
                
                if (var_30_3 u>= 0x10)
                    ecx_9 = var_44.d
                
                eax_25 = &arg1[5]
            label_6c5dfc:
                void* var_94_8 = eax_25
                ebx.b = sub_6ca310(ecx_9, 0x7942e0) == 1
                
                if (var_30_3 u>= 0x10)
                    sub_403160(var_44.d, var_30_3 + 1, 1)
                
                cond:11_1 = ebx.b == 0
                goto label_6c6272
            
            void* eax_44
            char eax_58
            
            if (sub_407560(&var_2c, "GameName") == 0)
                if (sub_407560(&var_2c, "RegName") != 0)
                    if (sub_6c6bb0(&var_78, 0x7832ec) == 0)
                        goto label_6c62df
                    
                    eax_44 = &arg1[0xc]
                    goto label_6c626b
                
                if (sub_407560(&var_2c, "CodeName") != 0)
                    if (sub_6c6bb0(&var_78, 0x7832dc) == 0)
                        goto label_6c62df
                    
                    eax_44 = &arg1[0x12]
                    goto label_6c626b
                
                if (sub_407560(&var_2c, "BootName") != 0)
                    if (sub_6c6bb0(&var_78, 0x783290) == 0)
                        goto label_6c62df
                    
                    eax_44 = &arg1[0x18]
                    goto label_6c626b
                
                if (sub_407560(&var_2c, 0x78328c) != 0)
                    if (sub_6c6bb0(&var_78, 0x783288) == 0)
                        goto label_6c62df
                    
                    eax_44 = &arg1[0x1e]
                    goto label_6c626b
                
                if (sub_407560(&var_2c, "LoadDLL") != 0)
                    eax_58 = sub_6c6430(arg1, &var_78, var_7c)
                    goto label_6c6270
                
                if (sub_407560(&var_2c, "SaveFolder") != 0)
                    if (sub_6c6bb0(&var_78, 0x7832a4) == 0)
                        goto label_6c62df
                    
                    eax_44 = &arg1[0x27]
                    goto label_6c626b
                
                if (sub_407560(&var_2c, "UseJoypad") == 0)
                    if (sub_407560(&var_2c, "VolumeValancer") == 0)
                        if (sub_407560(&var_2c, "MainVM") != 0)
                        label_6c625b:
                            
                            if (sub_6c6bb0(&var_78, 0x7834a4) == 0)
                                goto label_6c62df
                            
                            eax_44 = &var_2c
                            goto label_6c626b
                        
                        if (sub_407560(&var_2c, "UseCD") != 0)
                            goto label_6c625b
                        
                        if (sub_407560(&var_2c, "MsgSkipName") != 0)
                            goto label_6c625b
                        
                        if (sub_407560(&var_2c, "ShowSoundSettingMenu") != 0)
                            goto label_6c625b
                        
                        if (sub_407560(&var_2c, "MainSurfaceBpp") != 0)
                            goto label_6c625b
                        
                        if (sub_407560(&var_2c, "DefaultVolumeRate") != 0)
                            goto label_6c625b
                        
                        void** eax_79 = &var_2c
                        
                        if (var_18 u>= 0x10)
                            eax_79 = ebx
                        
                        var_80 = eax_79
                        sub_403360(&var_5c, 0x78346c)
                        var_8_1.b = 0xb
                        var_8_1.b = 0xc
                        sub_6c52e0(sub_409240(&var_80, &var_5c, &var_44, &var_80))
                        sub_403320(&var_44)
                        sub_403320(&var_5c)
                    else
                        if (sub_6c6bb0(&var_78, 0x7834ac) == 0)
                            goto label_6c62df
                        
                        if (sub_6c6930(&var_2c) == 0)
                            goto label_6c62df
                        
                        if (sub_6c6bb0(&var_78, 0x7834a8) == 0)
                            goto label_6c62df
                        
                        if (sub_6c6bb0(&var_78, &(*U",=%%")[1]) == 0)
                            goto label_6c62df
                        
                        if (sub_6c6930(&var_2c) == 0)
                            goto label_6c62df
                        
                        if (sub_6c6bb0(&var_78, U",=%%") != 0)
                            eax_44 = &var_2c
                            goto label_6c626b
                else
                    if (sub_6c6bb0(&var_78, 0x783294) == 0)
                        goto label_6c62df
                    
                    ecx_32 = &var_2c
                    
                    if (sub_6c6930(&var_2c) == 0)
                        goto label_6c62e2
                    
                    arg1[0x2d].b = sub_407560(ecx_32, "true")
            else
                if (sub_6c6bb0(&var_78, 0x7832bc) == 0)
                    goto label_6c62df
                
                eax_44 = &arg1[6]
            label_6c626b:
                eax_58 = sub_6c6930(eax_44)
            label_6c6270:
                cond:11_1 = eax_58 == 0
            label_6c6272:
                
                if (cond:11_1)
                    goto label_6c62df
        else
            if (sub_6c6bb0(&var_78, 0x78330c) == 0)
            label_6c62ab:
                var_8_1.b = 0
                
                if (var_18 u>= 0x10)
                    sub_403160(var_2c.d, var_18 + 1, 1)
                
                goto label_6c62eb
            
            int32_t var_30_2 = 0xf
            int32_t var_34_2 = 0
            var_44 = 0
            var_8_1.b = 6
            
            if (sub_6c6930(&var_44) == 0)
                if (var_30_2 u>= 0x10)
                    sub_403160(var_44.d, var_30_2 + 1, 1)
                
                goto label_6c62ab
            
            char* ecx_6 = &var_44
            
            if (var_30_2 u>= 0x10)
                ecx_6 = var_44.d
            
            void* var_94_5 = &arg1[1]
            ebx.b = sub_6ca310(ecx_6, 0x7942e0) == 1
            
            if (var_30_2 u>= 0x10)
                sub_403160(var_44.d, var_30_2 + 1, 1)
            
            if (ebx.b == 0)
                goto label_6c62ab
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
else
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    var_7c = ebx
    var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    sub_403490(&var_44, 0x783388, 0x20)
    var_8_1.b = 1
    eax_5 = sub_409240(&var_7c, &var_44, &var_2c, &var_7c)
    var_8_1.b = 2
label_6c5c29:
    sub_6c52e0(eax_5)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44.d, var_30_1 + 1, 1)
    
    ebx.b = 0
void* result = var_78.d

if (result != 0)
    sub_403160(result, var_78:8.d - result, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
