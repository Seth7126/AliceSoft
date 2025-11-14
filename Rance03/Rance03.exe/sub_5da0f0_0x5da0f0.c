// 函数: sub_5da0f0
// 地址: 0x5da0f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca6f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_7c
int32_t eax_2 = __security_cookie ^ &var_7c
int32_t __saved_edi
int32_t var_90 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4107c0(*arg4, arg4[1])
arg4[1] = *arg4
struct sys43vm::CReadFile::VTable* const var_74 = &sys43vm::CReadFile::`vftable'
struct memory::CFastMemory::VTable* const var_70 = &memory::CFastMemory::`vftable'
BOOL lpMem = 0
int32_t var_68 = 0
int32_t var_64 = 0
int32_t var_60 = 0
int32_t var_4 = 0
void** ebx

if (sub_5daca0(arg5, arg1, arg2, &var_74, 1) != 0)
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    char var_5c = 0
    var_4.b = 1
    
    if (sub_5d7a10(&var_74, &var_5c) == 0)
        ebx.b = 0
    else
        int32_t var_78
        
        if (sub_40c250(&var_5c, 0x6ea948) == 0)
            ebx.b = 0
        else if (sub_5d7960(&var_74, &var_78) == 0 || var_78 s< 7)
            ebx.b = 0
        else
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            var_4.b = 2
            
            if (sub_5d7a10(&var_74, &var_2c) == 0)
                ebx.b = 0
                sub_401fb0(&var_2c)
            else if (sub_40d280(&var_2c, arg3) != 0)
                ebx.b = 0
                sub_401fb0(&var_2c)
            else if (sub_5d7960(&var_74, &var_78) == 0)
                ebx.b = 0
                sub_401fb0(&var_2c)
            else
                int32_t edi_1 = var_78
                int32_t esi_1 = 0
                
                if (edi_1 s<= 0)
                label_5da2d5:
                    ebx.b = 1
                    sub_401fb0(&var_2c)
                else
                    while (true)
                        int32_t var_30_1 = 0xf
                        int32_t var_34_1 = 0
                        char var_44 = 0
                        var_4.b = 3
                        
                        if (sub_5d7a10(&var_74, &var_44) == 0)
                            sub_401fb0(&var_44)
                            break
                        
                        sub_421cd0(arg4, &var_44)
                        var_4.b = 2
                        sub_401fb0(&var_44)
                        esi_1 += 1
                        
                        if (esi_1 s>= edi_1)
                            goto label_5da2d5
                    
                    ebx.b = 0
                    sub_401fb0(&var_2c)
    
    if (var_48_1 u>= 0x10)
        j__free(var_5c.d)
    
    int32_t var_48_2 = 0xf
    int32_t var_4c_2 = 0
    var_5c = 0
else
    ebx.b = 0

if (lpMem != 0)
    HeapFree(data_75dc38, HEAP_NONE, lpMem)

BOOL result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_7c)
return result
