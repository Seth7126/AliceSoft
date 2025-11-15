// 函数: sub_6239e0
// 地址: 0x6239e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744a40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_60 = arg2
int32_t* var_90 = var_60
int32_t ecx
int32_t var_94 = ecx
sub_417d50(*arg3, arg3[1])
arg3[1] = *arg3
struct sys43vm::CReadFile::VTable* const var_78 = &sys43vm::CReadFile::`vftable'
struct memory::CFastMemory::VTable* const var_74 = &memory::CFastMemory::`vftable'
BOOL lpMem = 0
int32_t var_6c = 0
int32_t var_68 = 0
int32_t var_64 = 0
int32_t var_8_1 = 0
int32_t* ebx

if (sub_6246e0(arg4, arg1, &var_78, 1) != 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    var_8_1.b = 1
    
    if (sub_622cd0(&var_78, &var_2c) == 0)
        ebx.b = 0
    else
        int32_t var_7c
        
        if (sub_407560(&var_2c, 0x76d6ec) == 0)
            ebx.b = 0
        else if (sub_622c00(&var_78, &var_7c) == 0 || var_7c s< 7)
            ebx.b = 0
        else
            int32_t var_48_1 = 0xf
            int32_t var_4c_1 = 0
            char var_5c = 0
            var_8_1.b = 2
            
            if (sub_622cd0(&var_78, &var_5c) == 0)
                ebx.b = 0
                sub_403320(&var_5c)
            else if (sub_4090e0(&var_5c, var_60) != 0)
                ebx.b = 0
                sub_403320(&var_5c)
            else if (sub_622c00(&var_78, &var_60) == 0)
                ebx.b = 0
                sub_403320(&var_5c)
            else
                int32_t* edi_1 = var_60
                int32_t esi_1 = 0
                
                if (edi_1 s<= 0)
                label_623b75:
                    ebx.b = 1
                    sub_403320(&var_5c)
                else
                    while (true)
                        int32_t var_30_1 = 0xf
                        int32_t var_34_1 = 0
                        char var_44 = 0
                        var_8_1.b = 3
                        
                        if (sub_622cd0(&var_78, &var_44) == 0)
                            sub_403320(&var_44)
                            break
                        
                        sub_424db0(arg3, &var_44)
                        var_8_1.b = 2
                        sub_403320(&var_44)
                        esi_1 += 1
                        
                        if (esi_1 s>= edi_1)
                            goto label_623b75
                    
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
