// 函数: sub_607570
// 地址: 0x607570
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7428be
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_e4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_d0 = arg1
void** edi = arg4
void** esi = arg3
int32_t* ebx
struct sys43vm::CReadFile::VTable* const var_44
char var_2c

if (edi[4] != 0)
    var_44 = &sys43vm::CReadFile::`vftable'
    struct memory::CFastMemory::VTable* const var_40 = &memory::CFastMemory::`vftable'
    BOOL lpMem = 0
    void* var_38_1 = nullptr
    int32_t var_34_1 = 0
    int32_t var_30_2 = 0
    int32_t var_8_2 = 2
    char var_5c
    int32_t* var_18
    
    if (sub_61ea30(arg1[0x13], esi, &var_40) == 0)
        if (esi[5] u>= 0x10)
            esi = *esi
        
        var_d0 = esi
        sub_403360(&var_2c, 0x76af00)
        var_8_2.b = 3
        var_8_2.b = 4
        ebx.b = sub_6c52e0(sub_409240(&var_d0, &var_2c, &var_5c, &var_d0))
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c.d, var_48 + 1, 1)
        
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        var_5c = 0
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
    else if (var_38_1 s<= 0)
        ebx.b = 0
    else
        int32_t* var_30_3 = nullptr
        int32_t var_60_1 = 0xf
        int32_t var_64_1 = 0
        char var_74 = 0
        var_8_2.b = 5
        
        if (sub_622cd0(&var_44, &var_74) == 0)
            ebx.b = 0
            sub_403320(&var_74)
        else if (sub_4090e0(&var_74, arg2) == 0)
            int32_t var_cc
            _memset(&var_cc, 0, 0x40)
            
            if (var_38_1 s< &var_30_3[0x10])
                ebx.b = 0
                sub_403320(&var_74)
            else
                BOOL lpMem_1 = lpMem
                
                if (var_38_1 == 0)
                    lpMem_1 = 0
                
                sub_700660(&var_cc, lpMem_1 + var_30_3, 0x40)
                void* var_30_4 = &var_30_3[0x10]
                int32_t var_c8
                
                if (var_cc != 0x3e8)
                    ebx.b = 0
                    sub_403320(&var_74)
                else if (var_c8 s> 7)
                    int32_t var_90_1 = 1
                    sub_62aa60(&var_2c)
                    var_8_2.b = 0xa
                    BOOL lpMem_2 = lpMem
                    
                    if (var_38_1 == 0)
                        lpMem_2 = 0
                    
                    char eax_27
                    int32_t ecx_27
                    eax_27, ecx_27 = sub_62ab00(&var_2c, lpMem_2, var_38_1)
                    void var_8c
                    
                    if (eax_27 != 0)
                        int32_t* eax_31 = var_18
                        
                        if (var_30_3 s>= 0)
                            eax_31 = var_30_3
                        
                        if ((var_30_3 u>> 0x1f).b != 1)
                            int32_t var_e8_8 = ecx_27
                            
                            if (sub_62abc0(&var_2c, var_30_3, &var_cc) != 0)
                                int32_t* eax_35 = eax_31
                                int32_t* var_94
                                
                                if (var_94 s>= 0)
                                    eax_35 = var_94
                                
                                if ((var_94 u>> 0x1f).b != 1)
                                    if (sub_62ab60(&var_2c, edi[4]) != 0)
                                        void* eax_37 = edi[4]
                                        
                                        if (edi[5] u>= 0x10)
                                            edi = *edi
                                        
                                        if (sub_62ab00(&var_2c, edi, eax_37) != 0)
                                            int32_t var_24
                                            int32_t eax_39 = var_24
                                            int32_t var_20
                                            
                                            if (var_20 == 0)
                                                eax_39 = 0
                                            
                                            if (sub_61eb40(var_d0[0x13], esi, eax_39, eax_35) != 0)
                                                ebx.b = 1
                                                sub_62aad0(&var_2c)
                                                sub_403320(&var_74)
                                            else
                                                if (esi[5] u>= 0x10)
                                                    esi = *esi
                                                
                                                void** var_d4 = esi
                                                sub_403360(&var_5c, 0x76af94)
                                                var_8_2.b = 0xd
                                                var_8_2.b = 0xe
                                                ebx.b = sub_6c52e0(sub_409240(&var_d4, &var_5c, 
                                                    &var_8c, &var_d4))
                                                sub_403320(&var_8c)
                                                sub_403320(&var_5c)
                                                sub_62aad0(&var_2c)
                                                sub_403320(&var_74)
                                        else
                                            ebx.b = 0
                                            sub_62aad0(&var_2c)
                                            sub_403320(&var_74)
                                    else
                                        ebx.b = 0
                                        sub_62aad0(&var_2c)
                                        sub_403320(&var_74)
                                else
                                    ebx.b = 0
                                    sub_62aad0(&var_2c)
                                    sub_403320(&var_74)
                            else
                                ebx.b = 0
                                sub_62aad0(&var_2c)
                                sub_403320(&var_74)
                        else
                            ebx.b = 0
                            sub_62aad0(&var_2c)
                            sub_403320(&var_74)
                    else
                        if (esi[5] u>= 0x10)
                            esi = *esi
                        
                        var_d0 = esi
                        sub_403360(&var_5c, 0x76af64)
                        var_8_2.b = 0xb
                        var_8_2.b = 0xc
                        ebx.b = sub_6c52e0(sub_409240(&var_d0, &var_5c, &var_8c, &var_d0))
                        sub_403320(&var_8c)
                        sub_403320(&var_5c)
                        sub_62aad0(&var_2c)
                        sub_403320(&var_74)
                else
                    sub_403360(&var_5c, 0x76b004)
                    var_8_2.b = 8
                    var_8_2.b = 9
                    ebx.b = sub_6c52e0(sub_409350(&var_c8, &var_5c, &var_2c, &var_c8))
                    sub_403320(&var_2c)
                    sub_403320(&var_5c)
                    sub_403320(&var_74)
        else
            if (esi[5] u>= 0x10)
                esi = *esi
            
            var_d0 = esi
            sub_403360(&var_5c, 0x76afc4)
            var_8_2.b = 6
            var_8_2.b = 7
            ebx.b = sub_6c52e0(sub_409240(&var_d0, &var_5c, &var_2c, &var_d0))
            sub_403320(&var_2c)
            sub_403320(&var_5c)
            sub_403320(&var_74)
    
    if (lpMem != 0)
        HeapFree(data_7fcbf4, HEAP_NONE, lpMem)
else
    if (esi[5] u>= 0x10)
        esi = *esi
    
    var_d0 = esi
    BOOL var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x76aed0, 0x2c)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    ebx.b = sub_6c52e0(sub_409240(&var_d0, &var_2c, &var_44, &var_d0))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34 = 0
    var_44.b = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
BOOL result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
