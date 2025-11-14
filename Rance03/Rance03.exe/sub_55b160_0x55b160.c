// 函数: sub_55b160
// 地址: 0x55b160
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c52ed
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_2e0
int32_t eax_2 = __security_cookie ^ &var_2e0
char* ebx
char* var_2e4 = ebx
int32_t __saved_edi
int32_t var_2f4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_2e0 = arg1
struct sealengine::CEmitter::VTable* var_280
sub_535f80(&var_280)
int32_t var_4 = 0
int32_t var_29c = 0xf
int32_t var_2a0 = 0
char var_2b0 = 0
var_4.b = 1
void var_2d4

if (sub_59ce30(&var_2b0, &var_2d4) == 0)
    ebx.b = 0
else
    void var_278
    sub_401ff0(&var_278, &var_2b0, 0, 0xffffffff)
    int32_t var_2b4_1 = 0xf
    int32_t var_2b8_1 = 0
    char var_2c8 = 0
    sub_402110(&var_2c8, U"={==", 1)
    var_4.b = 2
    char* eax_7 = &var_2c8
    
    if (var_2b4_1 u>= 0x10)
        eax_7 = var_2c8.d
    
    char eax_8
    
    if (sub_59d180(arg2, eax_7) != 0)
        eax_8 = 1
    else
        char* eax_9 = &var_2c8
        
        if (var_2b4_1 u>= 0x10)
            eax_9 = var_2c8.d
        
        char* var_2f8_2 = eax_9
        int32_t var_2fc_1 = 0x6e48cc
        void* var_300_2 = arg2
        sub_561610(arg1)
        eax_8 = 0
    
    var_4.b = 1
    ebx.b = eax_8 == 0
    
    if (var_2b4_1 u>= 0x10)
        j__free(var_2c8.d)
    
    if (ebx.b != 0)
        ebx.b = 0
    else
        sub_401f60(&var_2c8, &(*U"={==")[1])
        var_4.b = 3
        var_4.b = 1
        ebx.b = sub_5615c0(arg1, arg2, &var_2c8) == 0
        
        if (var_2b4_1 u>= 0x10)
            j__free(var_2c8.d)
        
        if (ebx.b != 0)
            ebx.b = 0
        else
            while (true)
                int32_t var_2b4_2 = 0xf
                int32_t var_2b8_2 = 0
                var_2c8 = 0
                var_4.b = 4
                void var_2d0
                
                if (sub_59ce30(&var_2c8, &var_2d0) == 0)
                    ebx.b = 0
                else
                    char* ecx_8 = &var_2c8
                    ebx = var_2c8.d
                    int32_t eax_12 = 1
                    
                    if (var_2b4_2 u>= 0x10)
                        ecx_8 = ebx
                    
                    if (var_2b8_2 u< 1)
                        eax_12 = var_2b8_2
                    
                    int32_t eax_13 = sub_405190(eax_12, 0x6e40b8, ecx_8, eax_12)
                    bool cond:5_1 = eax_13 == 0
                    
                    if (eax_13 == 0)
                        if (var_2b8_2 u>= 1)
                            eax_13.b = var_2b8_2 != 1
                        else
                            eax_13 = 0xffffffff
                        
                        cond:5_1 = eax_13 == 0
                    
                    eax_13.b = cond:5_1
                    char* ecx_9 = &var_2c8
                    
                    if (eax_13.b != 0)
                        var_4.b = 1
                        sub_401fb0(ecx_9)
                        sub_565d90(var_2e0 + 0x14, &var_280)
                        ebx.b = 1
                        break
                    
                    int32_t eax_14 = 4
                    
                    if (var_2b4_2 u>= 0x10)
                        ecx_9 = ebx
                    
                    if (var_2b8_2 u< 4)
                        eax_14 = var_2b8_2
                    
                    int32_t eax_15 = sub_405190(eax_14, 0x6e40bc, ecx_9, eax_14)
                    bool cond:7_1 = eax_15 == 0
                    
                    if (eax_15 == 0)
                        if (var_2b8_2 u>= 4)
                            eax_15.b = var_2b8_2 != 4
                        else
                            eax_15 = 0xffffffff
                        
                        cond:7_1 = eax_15 == 0
                    
                    eax_15.b = cond:7_1
                    bool eax_16
                    
                    if (eax_15.b == 0)
                        if (sub_40c250(&var_2c8, 0x6e409c) != 0)
                            eax_16 = sub_55c1c0(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e40a8) != 0)
                            eax_16 = sub_55c360(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        char eax_19
                        int32_t ecx_16
                        eax_19, ecx_16 = sub_40c250(&var_2c8, 0x6e4088)
                        
                        if (eax_19 != 0)
                            int32_t var_2f8_12 = ecx_16
                            eax_16 = sub_55e3c0(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        char eax_20 = sub_40c250(&var_2c8, 0x6e4094)
                        char eax_21
                        
                        if (eax_20 == 0)
                            eax_21 = sub_40c250(&var_2c8, 0x6e406c)
                        
                        if (eax_20 != 0 || eax_21 != 0)
                            eax_16 = sub_55c520(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4078) != 0)
                            eax_16 = sub_55cc70(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e404c) != 0)
                            eax_16 = sub_55d0f0(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e405c) != 0)
                            eax_16 = sub_55d570(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        char eax_25
                        int32_t* ecx_27
                        eax_25, ecx_27 = sub_40c250(&var_2c8, 0x6e4030)
                        
                        if (eax_25 != 0)
                            int32_t* var_2f8_16 = ecx_27
                            void var_b4
                            void* var_2fc_11 = &var_b4
                            eax_16 = sub_5671e0(var_2e0, arg2, ecx_27)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e403c) != 0)
                            eax_16 = sub_55df40(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        char eax_27
                        int32_t* ecx_32
                        eax_27, ecx_32 = sub_40c250(&var_2c8, 0x6e419c)
                        
                        if (eax_27 != 0)
                            int32_t* var_2f8_18 = ecx_32
                            void var_9c
                            void* var_2fc_13 = &var_9c
                            eax_16 = sub_567410(var_2e0, arg2, ecx_32)
                            goto label_55befb
                        
                        char eax_28
                        int32_t* ecx_35
                        eax_28, ecx_35 = sub_40c250(&var_2c8, 0x6e41b0)
                        
                        if (eax_28 != 0)
                            int32_t* var_2f8_19 = ecx_35
                            void var_90
                            void* var_2fc_14 = &var_90
                            eax_16 = sub_567640(var_2e0, arg2, ecx_35)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4184) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_536fb0)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4190) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_536fc0)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4164) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_536fd0)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4174) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_536fe0)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4144) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_536ff0)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4154) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_537000)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4124) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_537010)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4134) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_537020)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4108) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_537030)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4118) != 0)
                            eax_16 = sub_55eca0(var_2e0, arg2, &var_280, arg3)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e40ec) != 0)
                            eax_16 = sub_55f180(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e40fc) != 0)
                            eax_16 = sub_55f360(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e40d4) != 0)
                            eax_16 = sub_55f4c0(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e40e4) != 0)
                            eax_16 = sub_5604b0(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e42d4) != 0)
                            eax_16 = sub_5605d0(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e42f0) != 0)
                            eax_16 = sub_560710(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e429c) != 0)
                            eax_16 = sub_55ef10(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e42b4) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_537100)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4260) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_537110)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4280) != 0)
                            eax_16 = sub_55f050(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4240) != 0)
                            eax_16 = sub_55ffd0(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4250) != 0)
                            eax_16 = sub_560170(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4220) != 0)
                            eax_16 = sub_560310(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4230) != 0)
                            eax_16 = sub_55f9d0(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4200) != 0)
                            eax_16 = sub_55fb50(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4210) != 0)
                            eax_16 = sub_55fcd0(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e41e0) != 0)
                            eax_16 = sub_55fe50(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e41f0) != 0)
                            eax_16 = sub_55f6d0(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e41c4) != 0)
                            eax_16 = sub_55f850(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e41d4) != 0)
                            eax_16 = sub_560850(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e43c8) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_537060)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e43d0) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_537070)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e43b0) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_537080)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e43bc) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_537090)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e439c) != 0)
                            eax_16 = sub_560970(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e43a8) != 0)
                            eax_16 = sub_560aa0(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e437c) != 0)
                            eax_16 = sub_560bd0(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e438c) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_5370a0)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e435c) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_5370b0)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e436c) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_5370c0)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e433c) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_5370d0)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e434c) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_5370e0)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4320) != 0)
                            eax_16 = sub_55e4e0(var_2e0, arg2, &var_280, sub_5370f0)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4330) != 0)
                            eax_16 = sub_560d00(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e430c) != 0)
                            eax_16 = sub_560f40(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4314) != 0)
                            eax_16 = sub_561120(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e44a0) != 0)
                            eax_16 = sub_561250(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        char eax_76
                        int32_t ecx_132
                        eax_76, ecx_132 = sub_40c250(&var_2c8, 0x6e44ac)
                        
                        if (eax_76 != 0)
                            int32_t var_2f8_46 = ecx_132
                            eax_16 = sub_55e670(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4480) != 0)
                            eax_16 = sub_5614a0(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4494) != 0)
                            eax_16 = sub_55e7d0(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4460) != 0)
                            eax_16 = sub_55ea50(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        if (sub_40c250(&var_2c8, 0x6e4474) != 0)
                            eax_16 = sub_55eb80(var_2e0, arg2, &var_280)
                            goto label_55befb
                        
                        void var_298
                        
                        if (sub_40c250(&var_2c8, 0x6e4438) != 0)
                        label_55bea4:
                            sub_401f60(&var_298, U"=")
                            var_4.b = 5
                            var_4.b = 4
                            ebx.b = sub_5615c0(var_2e0, arg2, &var_298) == 0
                            sub_401fb0(&var_298)
                            
                            if (ebx.b == 0)
                                void var_2cc
                                eax_16 = sub_59d350(&var_2cc)
                                goto label_55befb
                            
                            ebx.b = 0
                        else
                            if (sub_40c250(&var_2c8, 0x6e4450) != 0)
                                goto label_55bea4
                            
                            if (sub_40c250(&var_2c8, 0x6e4420) != 0)
                                goto label_55bea4
                            
                            if (sub_40c250(&var_2c8, 0x6e4400) != 0)
                            label_55be53:
                                sub_401f60(&var_298, U"=")
                                var_4.b = 6
                                var_4.b = 4
                                ebx.b = sub_5615c0(var_2e0, arg2, &var_298) == 0
                                sub_401fb0(&var_298)
                                
                                if (ebx.b == 0)
                                    void var_2d8
                                    eax_16 = sub_59d240(&var_2d8)
                                    goto label_55befb
                                
                                ebx.b = 0
                            else
                                if (sub_40c250(&var_2c8, 0x6e4410) != 0)
                                    goto label_55be53
                                
                                if (sub_40c250(&var_2c8, 0x6e43e8) != 0)
                                    goto label_55be53
                                
                                if (sub_40c250(&var_2c8, 0x6e43f8) != 0)
                                    goto label_55be53
                                
                                if (sub_40c250(&var_2c8, 0x6e43d8) != 0)
                                    goto label_55be53
                                
                                char* eax_91 = &var_2c8
                                
                                if (var_2b4_2 u>= 0x10)
                                    eax_91 = var_2c8.d
                                
                                char* var_2f8_57 = eax_91
                                int32_t var_2fc_70 = 0x6e45a0
                                void* var_300_30 = arg2
                                ebx.b = sub_561610(var_2e0)
                    else
                        eax_16 = sub_55bfe0(var_2e0, arg2, &var_280)
                    label_55befb:
                        
                        if (eax_16 == 0)
                            ebx.b = 0
                        else if (var_2b4_2 u< 0x10)
                            continue
                        else
                            j__free(var_2c8.d)
                            continue
                
                if (var_2b4_2 u< 0x10)
                    break
                
                j__free(var_2c8.d)
                break

if (var_29c u>= 0x10)
    j__free(var_2b0.d)

int32_t var_29c_1 = 0xf
int32_t var_2a0_1 = 0
var_2b0 = 0
sub_5368b0(&var_280)
int32_t* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2e0)
return result
