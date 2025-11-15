// 函数: sub_5a01e0
// 地址: 0x5a01e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e95f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_104 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = &arg2[2]

if (arg2[7] u>= 0x10)
    eax_3 = *eax_3

int32_t* var_f4 = eax_3
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x769314, 0x17)
int32_t var_8_1 = 0
char var_2c
char* edx_1 = sub_409240(&var_f4, &var_44, &var_2c, &var_f4)
var_8_1.b = 1
int32_t ecx_2 = *(edx_1 + 0x14)
int32_t ebx = *(edx_1 + 0x10)
char* eax_6

if (ecx_2 u< 0x10)
    eax_6 = edx_1
else
    eax_6 = *edx_1

if (ecx_2 u>= 0x10)
    edx_1 = *edx_1

int32_t var_108_1 = 0.d
sub_6ca200(arg1 + 4, *(arg1 + 8), edx_1, &eax_6[ebx])
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_8_2 = 0xffffffff
int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
int32_t var_8_3 = 2
sub_5a2a20(sub_403490(&var_44, "UID", 3), &var_44, arg1, *arg2)
int32_t var_8_4 = 0xffffffff

if (var_30_1 u>= 0x10)
    sub_403160(var_44.d, var_30_1 + 1, 1)

char result

if (sub_5a1450(arg1, arg2) != 0)
    if (sub_5a15f0(arg1, arg2) == 0)
        result = 0
    else if (sub_5a1760(arg1, arg2) == 0)
        result = 0
    else
        sub_403360(&var_2c, 0x769378)
        int32_t var_8_5 = 3
        arg2[0xa]
        sub_5a2b30(arg1, &var_2c)
        int32_t var_8_6 = 0xffffffff
        sub_403320(&var_2c)
        sub_403360(&var_2c, 0x76936c)
        int32_t var_8_7 = 4
        arg2[0xb]
        sub_5a2b30(arg1, &var_2c)
        int32_t var_8_8 = 0xffffffff
        sub_403320(&var_2c)
        sub_403360(&var_2c, 0x769360)
        int32_t var_8_9 = 5
        arg2[0xc]
        sub_5a2b30(arg1, &var_2c)
        int32_t var_8_10 = 0xffffffff
        sub_403320(&var_2c)
        
        if (sub_5a18f0(arg1, arg2) == 0)
            result = 0
        else if (sub_5a1a80(arg1, arg2) == 0)
            result = 0
        else
            sub_403360(&var_2c, 0x7693b8)
            int32_t var_8_11 = 6
            int32_t var_8_12 = 0xffffffff
            ebx.b = sub_5a1ef0(&arg2[0xa9], &var_2c, arg1, &arg2[0xa9]) == 0
            sub_403320(&var_2c)
            
            if (ebx.b != 0)
                result = 0
            else
                sub_403360(&var_2c, 0x7693a8)
                int32_t var_8_13 = 7
                int32_t var_8_14 = 0xffffffff
                ebx.b = sub_5a1ef0(&arg2[0xac], &var_2c, arg1, &arg2[0xac]) == 0
                sub_403320(&var_2c)
                
                if (ebx.b != 0)
                    result = 0
                else
                    sub_403360(&var_2c, 0x769398)
                    int32_t var_8_15 = 8
                    int32_t var_8_16 = 0xffffffff
                    ebx.b = sub_5a1ef0(&arg2[0xaf], &var_2c, arg1, &arg2[0xaf]) == 0
                    sub_403320(&var_2c)
                    
                    if (ebx.b != 0)
                        result = 0
                    else
                        sub_403360(&var_2c, 0x769388)
                        int32_t var_8_17 = 9
                        int32_t var_8_18 = 0xffffffff
                        ebx.b = sub_5a1ef0(&arg2[0xb2], &var_2c, arg1, &arg2[0xb2]) == 0
                        sub_403320(&var_2c)
                        
                        if (ebx.b != 0)
                            result = 0
                        else
                            int32_t var_108_7 = sub_403360(&var_2c, 0x769410)
                            int32_t var_8_19 = 0xa
                            int32_t var_8_20 = 0xffffffff
                            ebx.b = sub_5a5ac0(&arg2[0xb5], &var_2c, arg1, &arg2[0xb5]) == 0
                            sub_403320(&var_2c)
                            
                            if (ebx.b != 0)
                                result = 0
                            else if (sub_5a2530(arg1, arg2) == 0)
                                result = 0
                            else
                                int32_t var_108_8 = sub_403360(&var_2c, 0x7693fc)
                                int32_t var_8_21 = 0xb
                                int32_t var_8_22 = 0xffffffff
                                ebx.b = sub_5a5d60(&arg2[0xbb], &var_2c, arg1, &arg2[0xbb]) == 0
                                sub_403320(&var_2c)
                                
                                if (ebx.b != 0)
                                    result = 0
                                else
                                    int32_t var_108_9 = sub_403360(&var_2c, 0x7693e8)
                                    int32_t var_8_23 = 0xc
                                    int32_t var_8_24 = 0xffffffff
                                    ebx.b = sub_5a6000(&arg2[0xbe], &var_2c, arg1, &arg2[0xbe]) == 0
                                    sub_403320(&var_2c)
                                    
                                    if (ebx.b != 0)
                                        result = 0
                                    else
                                        int32_t var_108_10 = sub_403360(&var_2c, 0x7693c8)
                                        int32_t var_8_25 = 0xd
                                        int32_t var_8_26 = 0xffffffff
                                        ebx.b =
                                            sub_5a5d60(&arg2[0xc1], &var_2c, arg1, &arg2[0xc1]) == 0
                                        sub_403320(&var_2c)
                                        
                                        if (ebx.b != 0)
                                            result = 0
                                        else
                                            int32_t var_108_11 = sub_403360(&var_2c, 0x769624)
                                            int32_t var_8_27 = 0xe
                                            int32_t var_8_28 = 0xffffffff
                                            ebx.b =
                                                sub_5a6000(&arg2[0xc4], &var_2c, arg1, &arg2[0xc4])
                                                == 0
                                            sub_403320(&var_2c)
                                            
                                            if (ebx.b != 0)
                                                result = 0
                                            else
                                                sub_403360(&var_2c, 0x769618)
                                                int32_t var_8_29 = 0xf
                                                sub_5a2d50(&arg2[0x12], &var_2c, arg1, &arg2[0x12])
                                                int32_t var_8_30 = 0xffffffff
                                                sub_403320(&var_2c)
                                                sub_403360(&var_2c, 0x76960c)
                                                int32_t var_8_31 = 0x10
                                                sub_5a2d50(&arg2[0x15], &var_2c, arg1, &arg2[0x15])
                                                int32_t var_8_32 = 0xffffffff
                                                sub_403320(&var_2c)
                                                sub_403360(&var_2c, 0x7695fc)
                                                int32_t var_8_33 = 0x11
                                                sub_5a2d50(&arg2[0x18], &var_2c, arg1, &arg2[0x18])
                                                int32_t var_8_34 = 0xffffffff
                                                sub_403320(&var_2c)
                                                sub_403360(&var_2c, 0x769674)
                                                int32_t var_8_35 = 0x12
                                                sub_5a2d50(&arg2[0x1b], &var_2c, arg1, &arg2[0x1b])
                                                int32_t var_8_36 = 0xffffffff
                                                sub_403320(&var_2c)
                                                sub_403360(&var_2c, 0x769664)
                                                int32_t var_8_37 = 0x13
                                                sub_5a2d50(&arg2[0x1e], &var_2c, arg1, &arg2[0x1e])
                                                int32_t var_8_38 = 0xffffffff
                                                sub_403320(&var_2c)
                                                sub_403360(&var_2c, 0x769654)
                                                int32_t var_8_39 = 0x14
                                                sub_5a2d50(&arg2[0x21], &var_2c, arg1, &arg2[0x21])
                                                int32_t var_8_40 = 0xffffffff
                                                sub_403320(&var_2c)
                                                sub_403360(&var_2c, 0x769644)
                                                int32_t var_8_41 = 0x15
                                                sub_5a2d50(&arg2[0x24], &var_2c, arg1, &arg2[0x24])
                                                int32_t var_8_42 = 0xffffffff
                                                sub_403320(&var_2c)
                                                sub_403360(&var_2c, 0x7696b4)
                                                int32_t var_8_43 = 0x16
                                                sub_5a2d50(&arg2[0x27], &var_2c, arg1, &arg2[0x27])
                                                int32_t var_8_44 = 0xffffffff
                                                sub_403320(&var_2c)
                                                sub_403360(&var_2c, 0x7696a4)
                                                int32_t var_8_45 = 0x17
                                                sub_5a2d50(&arg2[0x2b], &var_2c, arg1, &arg2[0x2b])
                                                int32_t var_8_46 = 0xffffffff
                                                sub_403320(&var_2c)
                                                sub_403360(&var_2c, 0x769694)
                                                int32_t var_8_47 = 0x18
                                                sub_5a2d50(&arg2[0x2e], &var_2c, arg1, &arg2[0x2e])
                                                int32_t var_8_48 = 0xffffffff
                                                sub_403320(&var_2c)
                                                sub_403360(&var_2c, 0x769684)
                                                int32_t var_8_49 = 0x19
                                                sub_5a2d50(&arg2[0x31], &var_2c, arg1, &arg2[0x31])
                                                int32_t var_8_50 = 0xffffffff
                                                sub_403320(&var_2c)
                                                sub_403360(&var_2c, 0x769700)
                                                int32_t var_8_51 = 0x1a
                                                char* eax_44
                                                eax_44.b = arg2[0x2a].b
                                                sub_5a2910(eax_44, &var_2c, arg1, eax_44.b)
                                                int32_t var_8_52 = 0xffffffff
                                                sub_403320(&var_2c)
                                                sub_403360(&var_2c, 0x7696ec)
                                                int32_t var_8_53 = 0x1b
                                                char* eax_45
                                                eax_45.b = *(arg2 + 0xa9)
                                                sub_5a2910(eax_45, &var_2c, arg1, eax_45.b)
                                                int32_t var_8_54 = 0xffffffff
                                                sub_403320(&var_2c)
                                                sub_403360(&var_2c, 0x7696d8)
                                                int32_t var_8_55 = 0x1c
                                                char* eax_46
                                                eax_46.b = *(arg2 + 0xaa)
                                                sub_5a2910(eax_46, &var_2c, arg1, eax_46.b)
                                                int32_t var_8_56 = 0xffffffff
                                                sub_403320(&var_2c)
                                                sub_403360(&var_2c, 0x7696c4)
                                                int32_t var_8_57 = 0x1d
                                                char* eax_47
                                                eax_47.b = *(arg2 + 0xab)
                                                sub_5a2910(eax_47, &var_2c, arg1, eax_47.b)
                                                int32_t var_8_58 = 0xffffffff
                                                sub_403320(&var_2c)
                                                sub_403360(&var_2c, 0x769544)
                                                int32_t var_8_59 = 0x1e
                                                sub_5a2e70(&arg2[0x84], &var_2c, arg1, &arg2[0x84])
                                                int32_t var_8_60 = 0xffffffff
                                                sub_403320(&var_2c)
                                                
                                                if (sub_5a30b0(arg1, arg2) == 0)
                                                    result = 0
                                                else
                                                    sub_403360(&var_2c, 0x769538)
                                                    int32_t var_8_61 = 0x1f
                                                    char* eax_49
                                                    eax_49.b = arg2[0x83].b
                                                    sub_5a2910(eax_49, &var_2c, arg1, eax_49.b)
                                                    int32_t var_8_62 = 0xffffffff
                                                    sub_403320(&var_2c)
                                                    sub_403360(&var_2c, 0x76952c)
                                                    int32_t var_8_63 = 0x20
                                                    char* eax_50
                                                    eax_50.b = *(arg2 + 0x20d)
                                                    sub_5a2910(eax_50, &var_2c, arg1, eax_50.b)
                                                    int32_t var_8_64 = 0xffffffff
                                                    sub_403320(&var_2c)
                                                    sub_403360(&var_2c, 0x769510)
                                                    int32_t var_8_65 = 0x21
                                                    arg2[0x8a]
                                                    sub_5a2b30(arg1, &var_2c)
                                                    int32_t var_8_66 = 0xffffffff
                                                    sub_403320(&var_2c)
                                                    sub_403360(&var_2c, 0x769578)
                                                    int32_t var_8_67 = 0x22
                                                    sub_5a2e70(&arg2[0x8b], &var_2c, arg1, 
                                                        &arg2[0x8b])
                                                    int32_t var_8_68 = 0xffffffff
                                                    sub_403320(&var_2c)
                                                    sub_403360(&var_2c, 0x76956c)
                                                    int32_t var_8_69 = 0x23
                                                    sub_5a2e70(&arg2[0x91], &var_2c, arg1, 
                                                        &arg2[0x91])
                                                    int32_t var_8_70 = 0xffffffff
                                                    sub_403320(&var_2c)
                                                    sub_403360(&var_2c, 0x769560)
                                                    int32_t var_8_71 = 0x24
                                                    sub_5a2e70(&arg2[0x97], &var_2c, arg1, 
                                                        &arg2[0x97])
                                                    int32_t var_8_72 = 0xffffffff
                                                    sub_403320(&var_2c)
                                                    sub_403360(&var_2c, 0x769550)
                                                    int32_t var_8_73 = 0x25
                                                    sub_5a2e70(&arg2[0x9d], &var_2c, arg1, 
                                                        &arg2[0x9d])
                                                    int32_t var_8_74 = 0xffffffff
                                                    sub_403320(&var_2c)
                                                    
                                                    if (sub_5a3240(arg1, arg2) == 0)
                                                        result = 0
                                                    else
                                                        int32_t var_8_75 = 0x26
                                                        sub_5a2a20(sub_403360(&var_2c, 0x7695cc), 
                                                            &var_2c, arg1, arg2[0xd])
                                                        int32_t var_8_76 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x7695ac)
                                                        int32_t var_8_77 = 0x27
                                                        sub_5a2d50(&arg2[0x7c], &var_2c, arg1, 
                                                            &arg2[0x7c])
                                                        int32_t var_8_78 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x76958c)
                                                        int32_t var_8_79 = 0x28
                                                        sub_5a2d50(&arg2[0x7f], &var_2c, arg1, 
                                                            &arg2[0x7f])
                                                        int32_t var_8_80 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x769584)
                                                        int32_t var_8_81 = 0x29
                                                        sub_5a2c40(&arg2[0xf], &var_2c, arg1, 
                                                            &arg2[0xf])
                                                        int32_t var_8_82 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x7695f4)
                                                        int32_t var_8_83 = 0x2a
                                                        sub_5a2d50(&arg2[0x4a], &var_2c, arg1, 
                                                            &arg2[0x4a])
                                                        int32_t var_8_84 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x7695ec)
                                                        int32_t var_8_85 = 0x2b
                                                        sub_5a2d50(&arg2[0x4d], &var_2c, arg1, 
                                                            &arg2[0x4d])
                                                        int32_t var_8_86 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x7695e0)
                                                        int32_t var_8_87 = 0x2c
                                                        sub_5a2d50(&arg2[0x50], &var_2c, arg1, 
                                                            &arg2[0x50])
                                                        int32_t var_8_88 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x7695d4)
                                                        int32_t var_8_89 = 0x2d
                                                        sub_5a2d50(&arg2[0x53], &var_2c, arg1, 
                                                            &arg2[0x53])
                                                        int32_t var_8_90 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x769834)
                                                        int32_t var_8_91 = 0x2e
                                                        sub_5a2f80(&arg2[0x56], &var_2c, arg1, 
                                                            &arg2[0x56])
                                                        int32_t var_8_92 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x769828)
                                                        int32_t var_8_93 = 0x2f
                                                        char* eax_64
                                                        eax_64.b = arg2[0x5a].b
                                                        int32_t ecx_152
                                                        ecx_152.b = eax_64.b != 0
                                                        sub_5a2a20(eax_64, &var_2c, arg1, ecx_152)
                                                        int32_t var_8_94 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x769820)
                                                        int32_t var_8_95 = 0x30
                                                        arg2[0x5b]
                                                        sub_5a2b30(arg1, &var_2c)
                                                        int32_t var_8_96 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x769810)
                                                        int32_t var_8_97 = 0x31
                                                        arg2[0x5c]
                                                        sub_5a2b30(arg1, &var_2c)
                                                        int32_t var_8_98 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x769870)
                                                        int32_t var_8_99 = 0x32
                                                        sub_5a2d50(&arg2[0x5d], &var_2c, arg1, 
                                                            &arg2[0x5d])
                                                        int32_t var_8_100 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x769860)
                                                        int32_t var_8_101 = 0x33
                                                        sub_5a2d50(&arg2[0x60], &var_2c, arg1, 
                                                            &arg2[0x60])
                                                        int32_t var_8_102 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x769850)
                                                        int32_t var_8_103 = 0x34
                                                        sub_5a2d50(&arg2[0x63], &var_2c, arg1, 
                                                            &arg2[0x63])
                                                        int32_t var_8_104 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x769840)
                                                        int32_t var_8_105 = 0x35
                                                        sub_5a2d50(&arg2[0x66], &var_2c, arg1, 
                                                            &arg2[0x66])
                                                        int32_t var_8_106 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x7698b0)
                                                        int32_t var_8_107 = 0x36
                                                        sub_5a2d50(&arg2[0x69], &var_2c, arg1, 
                                                            &arg2[0x69])
                                                        int32_t var_8_108 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x7698a0)
                                                        int32_t var_8_109 = 0x37
                                                        sub_5a2d50(&arg2[0x6c], &var_2c, arg1, 
                                                            &arg2[0x6c])
                                                        int32_t var_8_110 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x769890)
                                                        int32_t var_8_111 = 0x38
                                                        char* eax_71
                                                        eax_71.b = arg2[0x6f].b
                                                        sub_5a2910(eax_71, &var_2c, arg1, eax_71.b)
                                                        int32_t var_8_112 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x769880)
                                                        int32_t var_8_113 = 0x39
                                                        char* eax_72
                                                        eax_72.b = *(arg2 + 0x1bd)
                                                        sub_5a2910(eax_72, &var_2c, arg1, eax_72.b)
                                                        int32_t var_8_114 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x7698e4)
                                                        int32_t var_8_115 = 0x3a
                                                        char* eax_73
                                                        eax_73.b = *(arg2 + 0x1be)
                                                        sub_5a2910(eax_73, &var_2c, arg1, eax_73.b)
                                                        int32_t var_8_116 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x7698d8)
                                                        int32_t var_8_117 = 0x3b
                                                        sub_5a2f80(&arg2[0x70], &var_2c, arg1, 
                                                            &arg2[0x70])
                                                        int32_t var_8_118 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x7698cc)
                                                        int32_t var_8_119 = 0x3c
                                                        sub_5a2f80(&arg2[0x74], &var_2c, arg1, 
                                                            &arg2[0x74])
                                                        int32_t var_8_120 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        sub_403360(&var_2c, 0x7698c0)
                                                        int32_t var_8_121 = 0x3d
                                                        sub_5a2f80(&arg2[0x78], &var_2c, arg1, 
                                                            &arg2[0x78])
                                                        int32_t var_8_122 = 0xffffffff
                                                        sub_403320(&var_2c)
                                                        
                                                        if (sub_5a3840(arg1, arg2) == 0)
                                                            result = 0
                                                        else
                                                            sub_403360(&var_2c, 0x76973c)
                                                            int32_t var_8_123 = 0x3e
                                                            sub_5a2e70(&arg2[0x3b], &var_2c, arg1, 
                                                                &arg2[0x3b])
                                                            int32_t var_8_124 = 0xffffffff
                                                            sub_403320(&var_2c)
                                                            sub_403360(&var_2c, 0x76972c)
                                                            int32_t var_8_125 = 0x3f
                                                            arg2[0x41]
                                                            sub_5a2b30(arg1, &var_2c)
                                                            int32_t var_8_126 = 0xffffffff
                                                            sub_403320(&var_2c)
                                                            
                                                            if (sub_5a3930(arg1, arg2) == 0)
                                                                result = 0
                                                            else
                                                                sub_403360(&var_2c, 0x76971c)
                                                                int32_t var_8_127 = 0x40
                                                                sub_5a2e70(&arg2[0x43], &var_2c, arg1, 
                                                                    &arg2[0x43])
                                                                int32_t var_8_128 = 0xffffffff
                                                                sub_403320(&var_2c)
                                                                sub_5a3ae0(arg1, arg2)
                                                                
                                                                if (sub_5a3490(arg1, arg2) == 0)
                                                                    result = 0
                                                                else
                                                                    sub_5a3640(arg1, arg2)
                                                                    sub_403360(&var_2c, 0x769710)
                                                                    int32_t var_8_129 = 0x41
                                                                    arg2[0x38]
                                                                    sub_5a2b30(arg1, &var_2c)
                                                                    int32_t var_8_130 = 0xffffffff
                                                                    sub_403320(&var_2c)
                                                                    sub_403360(&var_44, 0x76978c)
                                                                    int32_t var_8_131 = 0x42
                                                                    arg2[0x39]
                                                                    sub_5a2b30(arg1, &var_44)
                                                                    int32_t var_8_132 = 0xffffffff
                                                                    sub_403320(&var_44)
                                                                    sub_5a3cd0(arg1, arg2)
                                                                    void var_5c
                                                                    sub_403360(&var_5c, 0x769778)
                                                                    int32_t var_8_133 = 0x43
                                                                    char* eax_79
                                                                    eax_79.b = arg2[0xc7].b
                                                                    int32_t ecx_219
                                                                    ecx_219.b = eax_79.b != 0
                                                                    sub_5a2a20(eax_79, &var_5c, arg1, 
                                                                        ecx_219)
                                                                    int32_t var_8_134 = 0xffffffff
                                                                    sub_403320(&var_5c)
                                                                    int32_t var_8_135 = 0x44
                                                                    void var_74
                                                                    sub_5a2a20(
                                                                        sub_403360(&var_74, 0x769768), &var_74, 
                                                                        arg1, arg2[0xc8])
                                                                    int32_t var_8_136 = 0xffffffff
                                                                    sub_403320(&var_74)
                                                                    void var_8c
                                                                    sub_403360(&var_8c, 0x769750)
                                                                    int32_t var_8_137 = 0x45
                                                                    char* eax_81
                                                                    eax_81.b = arg2[0xc9].b
                                                                    sub_5a2910(eax_81, &var_8c, arg1, 
                                                                        eax_81.b)
                                                                    int32_t var_8_138 = 0xffffffff
                                                                    sub_403320(&var_8c)
                                                                    int32_t var_8_139 = 0x46
                                                                    void var_a4
                                                                    sub_5a2a20(
                                                                        sub_403360(&var_a4, 0x7697c4), &var_a4, 
                                                                        arg1, arg2[0xca])
                                                                    int32_t var_8_140 = 0xffffffff
                                                                    sub_403320(&var_a4)
                                                                    void var_bc
                                                                    sub_403360(&var_bc, 0x7697b8)
                                                                    int32_t var_8_141 = 0x47
                                                                    char* eax_83
                                                                    eax_83.b = arg2[0xcb].b
                                                                    sub_5a2910(eax_83, &var_bc, arg1, 
                                                                        eax_83.b)
                                                                    int32_t var_8_142 = 0xffffffff
                                                                    sub_403320(&var_bc)
                                                                    int32_t var_8_143 = 0x48
                                                                    void var_d4
                                                                    sub_5a2a20(
                                                                        sub_403360(&var_d4, "ParentFolderUID"), 
                                                                        &var_d4, arg1, arg2[0xcc])
                                                                    int32_t var_8_144 = 0xffffffff
                                                                    sub_403320(&var_d4)
                                                                    void var_ec
                                                                    sub_403360(&var_ec, "}\r\n\r\n")
                                                                    int32_t var_8_145 = 0x49
                                                                    sub_6ca160(arg1, &var_ec)
                                                                    sub_403320(&var_ec)
                                                                    result = 1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
