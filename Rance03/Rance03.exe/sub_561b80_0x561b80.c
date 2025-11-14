// 函数: sub_561b80
// 地址: 0x561b80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_73 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_5 = arg2 + 8

if (*(arg2 + 0x1c) u>= 0x10)
    eax_5 = *eax_5

int32_t* var_60 = eax_5
void* var_40
void** edx = sub_4691f0(&var_40, 0x6e4890)
int32_t var_4 = 0
void* eax_7 = edx[4]
int32_t eax_8 = edx[5]
void** ebx

if (eax_8 u< 0x10)
    ebx = edx
else
    ebx = *edx

if (eax_8 u>= 0x10)
    edx = *edx

void* var_60_1 = eax_7
sub_468ff0(arg1 + 4, *(arg1 + 8), edx, eax_7 + ebx)
int32_t var_4_1 = 0xffffffff
int32_t var_2c

if (var_2c u>= 0x10)
    j__free(var_40)

bool result

if (sub_5625c0(arg1, arg2) != 0)
    if (sub_562700(arg1, arg2) == 0)
        result = false
    else if (sub_562820(arg1, arg2) == 0)
        result = false
    else
        sub_401f60(&var_40, 0x6e4a60)
        int32_t var_4_2 = 1
        sub_563c50(*(arg2 + 0x28), arg1, &var_40)
        int32_t var_4_3 = 0xffffffff
        
        if (var_2c u>= 0x10)
            j__free(var_40)
        
        if (sub_562950(arg1, arg2) == 0)
            result = false
        else if (sub_562df0(arg1, arg2) == 0)
            result = false
        else if (sub_563070(arg1, arg2) == 0)
            result = false
        else if (sub_5632f0(arg1, arg2) == 0)
            result = false
        else
            int32_t var_60_12 = sub_401f60(&var_40, 0x6e4a6c)
            int32_t var_4_4 = 2
            int32_t var_4_5 = 0xffffffff
            ebx.b = sub_567870(arg1, &var_40, arg2 + 0x1cc) == 0
            sub_401fb0(&var_40)
            
            if (ebx.b != 0)
                result = false
            else if (sub_5637d0(arg1, arg2) == 0)
                result = false
            else
                int32_t var_60_14 = sub_401f60(&var_40, 0x6e4a38)
                int32_t var_4_6 = 3
                int32_t var_4_7 = 0xffffffff
                ebx.b = sub_567ae0(arg1, &var_40, arg2 + 0x1e4) == 0
                sub_401fb0(&var_40)
                
                if (ebx.b != 0)
                    result = false
                else
                    int32_t var_60_15 = sub_401f60(&var_40, 0x6e4a4c)
                    int32_t var_4_8 = 4
                    int32_t var_4_9 = 0xffffffff
                    ebx.b = sub_567d10(arg1, &var_40, arg2 + 0x1f0) == 0
                    sub_401fb0(&var_40)
                    
                    if (ebx.b != 0)
                        result = false
                    else
                        sub_401f60(&var_40, 0x6e4a20)
                        int32_t var_4_10 = 5
                        sub_563d20(arg1, &var_40, arg2 + 0x34)
                        int32_t var_4_11 = 0xffffffff
                        sub_401fb0(&var_40)
                        sub_401f60(&var_40, 0x6e4a2c)
                        int32_t var_4_12 = 6
                        sub_563d20(arg1, &var_40, arg2 + 0x40)
                        int32_t var_4_13 = 0xffffffff
                        sub_401fb0(&var_40)
                        sub_401f60(&var_40, 0x6e4a00)
                        int32_t var_4_14 = 7
                        sub_563d20(arg1, &var_40, arg2 + 0x4c)
                        int32_t var_4_15 = 0xffffffff
                        sub_401fb0(&var_40)
                        sub_401f60(&var_40, 0x6e4a10)
                        int32_t var_4_16 = 8
                        sub_563d20(arg1, &var_40, arg2 + 0x58)
                        int32_t var_4_17 = 0xffffffff
                        sub_401fb0(&var_40)
                        sub_401f60(&var_40, 0x6e49e0)
                        int32_t var_4_18 = 9
                        sub_563d20(arg1, &var_40, arg2 + 0x64)
                        int32_t var_4_19 = 0xffffffff
                        sub_401fb0(&var_40)
                        sub_401f60(&var_40, 0x6e49f0)
                        int32_t var_4_20 = 0xa
                        sub_563d20(arg1, &var_40, arg2 + 0x70)
                        int32_t var_4_21 = 0xffffffff
                        sub_401fb0(&var_40)
                        sub_401f60(&var_40, 0x6e49c0)
                        int32_t var_4_22 = 0xb
                        sub_563d20(arg1, &var_40, arg2 + 0x7c)
                        int32_t var_4_23 = 0xffffffff
                        sub_401fb0(&var_40)
                        sub_401f60(&var_40, 0x6e49d0)
                        int32_t var_4_24 = 0xc
                        sub_563d20(arg1, &var_40, arg2 + 0x88)
                        int32_t var_4_25 = 0xffffffff
                        sub_401fb0(&var_40)
                        sub_401f60(&var_40, 0x6e4994)
                        int32_t var_4_26 = 0xd
                        sub_563d20(arg1, &var_40, arg2 + 0x94)
                        int32_t var_4_27 = 0xffffffff
                        sub_401fb0(&var_40)
                        
                        if (sub_563ed0(arg1, arg2) == 0)
                            result = false
                        else if (sub_564180(arg1, arg2) == 0)
                            result = false
                        else
                            sub_401f60(&var_40, 0x6e49a4)
                            int32_t var_4_28 = 0xe
                            sub_563c50(*(arg2 + 0x180), arg1, &var_40)
                            int32_t var_4_29 = 0xffffffff
                            sub_401fb0(&var_40)
                            
                            if (sub_5642c0(arg1, arg2) == 0)
                                result = false
                            else if (sub_564390(arg1, arg2) == 0)
                                result = false
                            else
                                sub_401f60(&var_40, 0x6e496c)
                                int32_t var_4_30 = 0xf
                                sub_563b90(arg1, &var_40, *(arg2 + 0x2c))
                                int32_t var_4_31 = 0xffffffff
                                sub_401fb0(&var_40)
                                sub_401f60(&var_40, 0x6e4974)
                                int32_t var_4_32 = 0x10
                                sub_563d20(arg1, &var_40, arg2 + 0x158)
                                int32_t var_4_33 = 0xffffffff
                                sub_401fb0(&var_40)
                                sub_401f60(&var_40, 0x6e4b34)
                                int32_t var_4_34 = 0x11
                                sub_563d20(arg1, &var_40, arg2 + 0x164)
                                int32_t var_4_35 = 0xffffffff
                                sub_401fb0(&var_40)
                                
                                if (sub_5645b0(arg1, arg2) == 0)
                                    result = false
                                else if (sub_564830(arg1, arg2) == 0)
                                    result = false
                                else if (sub_564ab0(arg1, arg2) == 0)
                                    result = false
                                else if (sub_564d30(arg1, arg2) == 0)
                                    result = false
                                else if (sub_564fb0(arg1, arg2) == 0)
                                    result = false
                                else if (sub_565230(arg1, arg2) == 0)
                                    result = false
                                else
                                    sub_401f60(&var_40, 0x6e4b54)
                                    int32_t var_4_36 = 0x12
                                    sub_563b90(arg1, &var_40, *(arg2 + 0x30))
                                    int32_t var_4_37 = 0xffffffff
                                    sub_401fb0(&var_40)
                                    sub_401f60(&var_40, 0x6e4b24)
                                    int32_t var_4_38 = 0x13
                                    sub_563d20(arg1, &var_40, arg2 + 0xd4)
                                    int32_t var_4_39 = 0xffffffff
                                    sub_401fb0(&var_40)
                                    sub_401f60(&var_40, 0x6e4b2c)
                                    int32_t var_4_40 = 0x14
                                    sub_563d20(arg1, &var_40, arg2 + 0xe0)
                                    int32_t var_4_41 = 0xffffffff
                                    sub_401fb0(&var_40)
                                    sub_401f60(&var_40, 0x6e4b0c)
                                    int32_t var_4_42 = 0x15
                                    sub_563d20(arg1, &var_40, arg2 + 0xec)
                                    int32_t var_4_43 = 0xffffffff
                                    sub_401fb0(&var_40)
                                    sub_401f60(&var_40, 0x6e4b18)
                                    int32_t var_4_44 = 0x16
                                    sub_563d20(arg1, &var_40, arg2 + 0xf8)
                                    int32_t var_4_45 = 0xffffffff
                                    sub_401fb0(&var_40)
                                    sub_401f60(&var_40, 0x6e4af8)
                                    int32_t var_4_46 = 0x17
                                    int32_t ecx_48
                                    ecx_48.b = *(arg2 + 0x104) != 0
                                    sub_563b90(arg1, &var_40, ecx_48)
                                    int32_t var_4_47 = 0xffffffff
                                    sub_401fb0(&var_40)
                                    sub_401f60(&var_40, 0x6e4b04)
                                    int32_t var_4_48 = 0x18
                                    sub_563c50(*(arg2 + 0x108), arg1, &var_40)
                                    int32_t var_4_49 = 0xffffffff
                                    sub_401fb0(&var_40)
                                    sub_401f60(&var_40, 0x6e4ad8)
                                    int32_t var_4_50 = 0x19
                                    sub_563c50(*(arg2 + 0x10c), arg1, &var_40)
                                    int32_t var_4_51 = 0xffffffff
                                    sub_401fb0(&var_40)
                                    sub_401f60(&var_40, 0x6e4ae8)
                                    int32_t var_4_52 = 0x1a
                                    sub_563d20(arg1, &var_40, arg2 + 0x110)
                                    int32_t var_4_53 = 0xffffffff
                                    sub_401fb0(&var_40)
                                    sub_401f60(&var_40, 0x6e4ab8)
                                    int32_t var_4_54 = 0x1b
                                    sub_563d20(arg1, &var_40, arg2 + 0x11c)
                                    int32_t var_4_55 = 0xffffffff
                                    sub_401fb0(&var_40)
                                    sub_401f60(&var_40, 0x6e4ac8)
                                    int32_t var_4_56 = 0x1c
                                    sub_563d20(arg1, &var_40, arg2 + 0x128)
                                    int32_t var_4_57 = 0xffffffff
                                    sub_401fb0(&var_40)
                                    sub_401f60(&var_40, 0x6e4a98)
                                    int32_t var_4_58 = 0x1d
                                    sub_563d20(arg1, &var_40, arg2 + 0x134)
                                    int32_t var_4_59 = 0xffffffff
                                    sub_401fb0(&var_40)
                                    sub_401f60(&var_40, 0x6e4aa8)
                                    int32_t var_4_60 = 0x1e
                                    sub_563d20(arg1, &var_40, arg2 + 0x140)
                                    int32_t var_4_61 = 0xffffffff
                                    sub_401fb0(&var_40)
                                    sub_401f60(&var_40, 0x6e4a78)
                                    int32_t var_4_62 = 0x1f
                                    sub_563d20(arg1, &var_40, arg2 + 0x14c)
                                    int32_t var_4_63 = 0xffffffff
                                    sub_401fb0(&var_40)
                                    
                                    if (sub_565800(arg1, arg2) == 0)
                                        result = false
                                    else
                                        sub_401f60(&var_40, 0x6e4a88)
                                        int32_t var_4_64 = 0x20
                                        sub_563e00(arg1, &var_40, arg2 + 0xb8)
                                        int32_t var_4_65 = 0xffffffff
                                        sub_401fb0(&var_40)
                                        
                                        if (sub_565960(arg1, arg2) == 0)
                                            result = false
                                        else if (sub_5654b0(arg1, arg2) == 0)
                                            result = false
                                        else if (sub_565620(arg1, arg2) == 0)
                                            result = false
                                        else
                                            sub_401f60(&var_40, 0x6e4c18)
                                            int32_t var_4_66 = 0x21
                                            sub_563c50(*(arg2 + 0xb0), arg1, &var_40)
                                            int32_t var_4_67 = 0xffffffff
                                            sub_401fb0(&var_40)
                                            
                                            if (sub_565b10(arg1, arg2) == 0)
                                                result = false
                                            else
                                                sub_401f60(&var_40, 0x6e4c24)
                                                int32_t var_4_68 = 0x22
                                                int32_t ecx_71
                                                ecx_71.b = *(arg2 + 0x1fc) != 0
                                                sub_563b90(arg1, &var_40, ecx_71)
                                                int32_t var_4_69 = 0xffffffff
                                                sub_401fb0(&var_40)
                                                sub_401f60(&var_40, 0x6e4c04)
                                                int32_t var_4_70 = 0x23
                                                sub_563b90(arg1, &var_40, *(arg2 + 0x200))
                                                int32_t var_4_71 = 0xffffffff
                                                sub_401fb0(&var_40)
                                                void var_28
                                                sub_401f60(&var_28, "}\r\n\r\n")
                                                int32_t var_4_72 = 0x24
                                                sub_468f30(arg1, &var_28)
                                                sub_401fb0(&var_28)
                                                result = true
else
    result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
