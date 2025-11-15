// 函数: sub_428b60
// 地址: 0x428b60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729ad8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
void* ebx
void* var_84 = ebx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_34 = arg1
int32_t ecx = sub_427910(arg1)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_94 = ecx
int32_t var_8_1 = 0

if (sub_6c98d0(arg2, &var_2c) == 0)
    ebx.b = 0
else
    uint32_t var_38
    
    if (sub_407560(&var_2c, "SF  ") == 0)
        ebx.b = 0
    else if (sub_6c9790(arg2, &var_38) == 0 || var_38 != 1)
        ebx.b = 0
    else
        uint32_t var_40 = 0
        var_38 = 0
        char* var_68
        __builtin_memset(&var_68, 0, 0x18)
        var_8_1.b = 2
        int32_t var_5c
        
        if (sub_6c9790(arg2, &var_40) == 0)
            ebx.b = 0
        else if (sub_6c9790(arg2, &var_38) == 0)
            ebx.b = 0
        else
            ebx = var_40
            sub_405950(&var_68, ebx)
            
            if (sub_6c9ae0(arg2, var_68, ebx) == 0)
                ebx.b = 0
            else
                uint32_t esi_1 = var_38
                sub_405950(&var_5c, esi_1)
                ebx = sub_6cc740()
                
                if (ebx == 0)
                    ebx.b = 0
                else
                    int32_t esi_2 = var_5c
                    (*(*ebx + 8))(esi_2, esi_1, var_68, var_40)
                    (*(*ebx + 4))(eax_2)
                    struct fileimage::CFileImageBitAnalyser::VTable* const var_50 =
                        &fileimage::CFileImageBitAnalyser::`vftable'
                    int32_t var_4c_1 = esi_2
                    int32_t var_58
                    int32_t var_48_1 = var_58
                    int32_t var_44_1 = 0
                    struct fileimage::CFileImageBitAnalyser::VTable* const* ecx_11 = &var_50
                    var_8_1.b = 3
                    
                    if (sub_6c95a0(ecx_11, 6) == 0)
                    label_428e35:
                        ebx.b = 0
                        var_50 = &fileimage::CFileImageBitAnalyser::`vftable'
                    else
                        char var_2d
                        
                        if (sub_6c9600(ecx_11, &var_2d, 5) == 0)
                            goto label_428e35
                        
                        ebx:1.b = var_2d
                        ebx.b = 0
                        
                        if (ebx:1.b != 0)
                            do
                                struct fileimage::CFileImageBitAnalyser::VTable* const* ecx_12 =
                                    &var_50
                                
                                if (sub_6c95a0(ecx_12, 1) == 0)
                                    goto label_428e35
                                
                                int128_t var_80
                                __builtin_memset(&var_80, 0, 0x18)
                                var_8_1.b = 4
                                sub_4260b0(ecx_12, &var_80)
                                sub_4260b0(&var_50, &var_80:0xc)
                                int32_t* eax_15
                                void* ecx_15
                                eax_15, ecx_15 = sub_429a60(&var_80)
                                int32_t* var_94_9 = eax_15
                                void* var_98_4 = &eax_15[4]
                                void* var_3c
                                sub_429b00(&arg1[0xb], &var_3c, ecx_15)
                                var_8_1.b = 3
                                void* ecx_17 = var_80:0xc.d
                                int32_t var_6c
                                
                                if (ecx_17 != 0)
                                    sub_403160(ecx_17, (var_6c - ecx_17) s>> 2, 4)
                                void* ecx_18 = var_80.d
                                
                                if (ecx_18 != 0)
                                    sub_403160(ecx_18, (var_80:8.d - ecx_18) s>> 2, 4)
                                
                                ebx.b += 1
                            while (ebx.b u< ebx:1.b)
                        
                        if (sub_426230(&arg1[0x10], &var_50) == 0)
                            goto label_428e35
                        
                        if (sub_6c9790(&var_50, &var_38) == 0)
                            goto label_428e35
                        
                        ebx = var_34
                        int32_t edi_1 = 0
                        
                        if (var_38 s> 0)
                            do
                                if (sub_6c95a0(&var_50, 1) == 0)
                                    goto label_428e35
                                
                                int32_t* eax_26 = sub_6e810c(8)
                                var_34 = eax_26
                                var_34 = eax_26
                                *eax_26 = &advengine::CLineSyntax::`vftable'
                                eax_26[1] = 0
                                
                                if (sub_42aec0(eax_26, &var_50) == 0)
                                    (**eax_26)(1)
                                    goto label_428e35
                                
                                sub_428f00(ebx + 0x34, &var_34)
                                edi_1 += 1
                            while (edi_1 s< var_38)
                        
                        *(ebx + 0x28) = 1
                        ebx.b = 1
                        var_50 = &fileimage::CFileImageBitAnalyser::`vftable'
        
        sub_4059a0(&var_5c)
        sub_4059a0(&var_68)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
