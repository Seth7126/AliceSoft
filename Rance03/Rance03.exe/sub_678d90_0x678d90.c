// 函数: sub_678d90
// 地址: 0x678d90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_11 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d076d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_1b0
int32_t eax_2 = __security_cookie ^ &var_1b0
int32_t __saved_edi
int32_t var_1c4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_1b0 = sub_674df0(arg2, arg3)
int32_t eax_6 = sub_673b90(arg2, arg3)
int32_t var_194 = 0xf
int32_t var_198 = 0
char var_1a8 = 0
sub_402110(&var_1a8, 0x702290, 0x16)
int32_t var_4 = 0
sub_412d60(arg4, &var_1a8)
int32_t var_4_1 = 0xffffffff

if (var_194 u>= 0x10)
    j__free(var_1a8.d)

int32_t var_1c8_4 = eax_6
*(arg1 + 0x38) = 1
*(arg1 + 0x1d0) = eax_6
int32_t var_4_2 = 1
sub_412d60(arg4, sub_4691f0(&var_1a8, 0x7022d4))
int32_t var_4_3 = 0xffffffff

if (var_194 u>= 0x10)
    j__free(var_1a8.d)

int32_t ebx_1 = var_1b0
int32_t var_1c8_7 = ebx_1
int32_t var_4_4 = 2
int32_t result = sub_412d60(arg4, sub_4691f0(&var_1a8, 0x7022bc))
int32_t var_4_5 = 0xffffffff

if (var_194 u>= 0x10)
    result = j__free(var_1a8.d)

int32_t ebp_2 = 0

if (ebx_1 s> 0)
    while (true)
        int32_t var_194_1 = 0xf
        int32_t var_198_1 = 0
        var_1a8 = 0
        sub_402110(&var_1a8, 0x7022fc, 1)
        int32_t var_4_6 = 3
        sub_412d60(arg4, &var_1a8)
        int32_t var_4_7 = 0xffffffff
        
        if (var_194_1 u>= 0x10)
            j__free(var_1a8.d)
        
        int32_t var_1c8_12 = ebp_2 + 1
        int32_t var_4_8 = 4
        sub_412d60(arg4, sub_4691f0(&var_1a8, "===== "))
        
        if (var_194_1 u>= 0x10)
            j__free(var_1a8.d)
        
        struct partsengine::CConstructionProcess::VTable* var_190
        sub_47f050(&var_190)
        int32_t var_4_9 = 5
        
        if (arg2 s> 0)
            void* ebx_2 = data_75d4fc
            int32_t var_1c8_15 = arg2
            
            if (sub_4a55e0(ebx_2 + 0x178) != 0)
                int32_t var_1c8_16 = arg2
                
                if (sub_4a55e0(ebx_2 + 0x178) != 0)
                    int32_t eax_13
                    eax_13.b = sub_4f0040(arg2, arg3) == 0x12
                    
                    if (eax_13.b != 0)
                        int32_t var_1c8_17 = arg2
                        struct partsengine::CPartsList::VTable** eax_14 =
                            sub_4a52a0(data_75d4fc + 0x178)
                        
                        if (eax_14 != 0)
                            int32_t eax_15 = eax_14[2]
                            struct IInterface::VTable** vFunc_0
                            
                            if (arg2 s< eax_15 || eax_14[1] + eax_15 s<= arg2)
                                vFunc_0 = nullptr
                            label_67903b:
                                
                                if (vFunc_0 != 0)
                                    goto label_679045
                            else
                                vFunc_0 = eax_14[3][arg2 - eax_15].vFunc_0
                                
                                if (vFunc_0 == 0)
                                    vFunc_0 = sub_4e7720(eax_14, arg2)
                                    goto label_67903b
                                
                            label_679045:
                                void* eax_17 = sub_4a4020(vFunc_0)
                                
                                if (eax_17 != 0)
                                    var_4_9.b = 6
                                    struct partsengine::CConstructionProcess::VTable* var_d0
                                    sub_485160(&var_190, 
                                        sub_503d30(sub_510540(*(eax_17 + 0x34), arg3), &var_d0, 
                                            ebp_2))
                                    var_4_9.b = 5
                                    sub_47f160(&var_d0)
                                    int32_t var_18c
                                    
                                    switch (var_18c)
                                        case 0
                                            sub_6799d0(&var_190, arg4)
                                        case 1
                                            sub_679c50(&var_190, arg4)
                                        case 2
                                            sub_679d80(&var_190, arg4)
                                        case 3
                                            sub_679e80(&var_190, arg4)
                                        case 4
                                            sub_67a0f0(&var_190, arg4)
                                        case 5
                                            sub_67a3a0(&var_190, arg4)
                                        case 6
                                            sub_67a590(&var_190, arg4)
                                        case 7
                                            sub_67a840(&var_190, arg4)
                                        case 8
                                            sub_67aa10(&var_190, arg4)
                                        case 9
                                            sub_67abe0(&var_190, arg4)
                                        case 0xa
                                            sub_67af10(&var_190, arg4)
                                        case 0xb
                                            sub_67b180(&var_190, arg4)
                                        case 0xc
                                            sub_67b400(&var_190, arg4)
                                        case 0xd
                                            sub_67b680(&var_190, arg4)
                                        case 0xe
                                            sub_67b980(&var_190, arg4)
                                        case 0xf
                                            sub_67bc80(&var_190, arg4)
                                        case 0x10
                                            sub_67be50(&var_190, arg4)
                                        case 0x11
                                            sub_67c0e0(&var_190, arg4)
                                        case 0x12
                                            sub_67c370(&var_190, arg4)
                                        case 0x13
                                            sub_67c620(&var_190, arg4)
                                        case 0x14
                                            sub_67c8a0(&var_190, arg4)
                                        case 0x15
                                            sub_67cba0(&var_190, arg4)
                                        case 0x16
                                            sub_67ce20(&var_190, arg4)
                                    
                                    int32_t var_4_10 = 0xffffffff
                                    result = sub_47f160(&var_190)
                                    ebp_2 += 1
                                    
                                    if (ebp_2 s>= var_1b0)
                                        break
                                    
                                    continue
        
        result = sub_47f160(&var_190)
        break

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_1b0)
return result
