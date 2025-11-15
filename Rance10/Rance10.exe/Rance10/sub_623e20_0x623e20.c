// 函数: sub_623e20
// 地址: 0x623e20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744ad0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct sys43vm::CReadFile::VTable* const var_74 = &sys43vm::CReadFile::`vftable'
struct memory::CFastMemory::VTable* const var_70 = &memory::CFastMemory::`vftable'
BOOL lpMem = 0
int32_t var_68 = 0
int32_t var_64 = 0
int32_t var_60 = 0
int32_t var_8_1 = 0
void* ebx

if (sub_6246e0(arg5, arg1, &var_74, 1) != 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    var_8_1.b = 1
    
    if (sub_622cd0(&var_74, &var_2c) == 0)
        ebx.b = 0
    else if (sub_407560(&var_2c, 0x76d6e4) == 0)
        ebx.b = 0
    else if (sub_622c00(&var_74, arg3) == 0 || *arg3 s< 7)
        ebx.b = 0
    else
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        char var_5c = 0
        var_8_1.b = 2
        
        if (sub_622cd0(&var_74, &var_5c) == 0)
            ebx.b = 0
            sub_403320(&var_5c)
        else
            int32_t var_78
            
            if (sub_4090e0(&var_5c, arg2) != 0)
                ebx.b = 0
                sub_403320(&var_5c)
            else if (sub_622c00(&var_74, &var_78) == 0)
                ebx.b = 0
                sub_403320(&var_5c)
            else
                int32_t edi_1 = var_78
                int32_t esi_1 = 0
                
                if (edi_1 s<= 0)
                label_623f8a:
                    int32_t eax_13 = var_68 - var_60
                    
                    if (eax_13 s> 0)
                        if (sub_405df0(arg4, eax_13) == 0)
                            ebx.b = 0
                            sub_403320(&var_5c)
                        else
                            void* ecx_12 = *(arg4 + 8)
                            
                            if (ecx_12 != 0)
                                ebx.b = sub_622bb0(&var_74, *(arg4 + 4), ecx_12)
                                sub_403320(&var_5c)
                            else
                                ebx.b = sub_622bb0(&var_74, nullptr, ecx_12)
                                sub_403320(&var_5c)
                    else
                        ebx.b = 1
                        sub_403320(&var_5c)
                else
                    while (true)
                        int32_t var_30_1 = 0xf
                        int32_t var_34_1 = 0
                        char var_44 = 0
                        var_8_1.b = 3
                        char* ecx_8 = &var_44
                        
                        if (sub_622cd0(&var_74, &var_44) == 0)
                            sub_403320(ecx_8)
                            break
                        
                        var_8_1.b = 2
                        sub_403320(ecx_8)
                        esi_1 += 1
                        
                        if (esi_1 s>= edi_1)
                            goto label_623f8a
                    
                    ebx.b = 0
                    sub_403320(&var_5c)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
else
    ebx.b = 0

if (lpMem != 0)
    HeapFree(data_7fcbf4, HEAP_NONE, lpMem)

BOOL result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
