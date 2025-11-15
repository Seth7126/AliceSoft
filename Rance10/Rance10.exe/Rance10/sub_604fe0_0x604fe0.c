// 函数: sub_604fe0
// 地址: 0x604fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_94 = 0xffffffff
int32_t (* var_98)(void* arg1) = sub_7427a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_90
int32_t eax_2 = __security_cookie ^ &var_90
int32_t var_cc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg4
struct sys43vm::CReadFile::VTable* const var_b8 = &sys43vm::CReadFile::`vftable'
struct memory::CFastMemory::VTable* const var_b4 = &memory::CFastMemory::`vftable'
BOOL lpMem = 0
int32_t var_ac = 0
int32_t var_a8 = 0
int32_t var_a4 = 0
int32_t var_94_1 = 0
int32_t* ebx

if (sub_61ea30(*(arg1 + 0x4c), esi, &var_b4) == 0 || var_ac s<= 0)
    ebx.b = 0
else
    int32_t var_a4_1 = 0
    int32_t var_c_1 = 0xf
    int32_t var_10_1 = 0
    char var_20 = 0
    var_94_1.b = 1
    
    if (sub_622cd0(&var_b8, &var_20) == 0)
        ebx.b = 0
    else
        void** var_a0
        void var_50
        void var_38
        
        if (sub_4090e0(&var_20, arg3) != 0)
            if (esi[5] u>= 0x10)
                esi = *esi
            
            var_a0 = esi
            sub_403360(&var_38, 0x76adc4)
            var_94_1.b = 2
            var_94_1.b = 3
            ebx.b = sub_6c52e0(sub_409240(&var_a0, &var_38, &var_50, &var_a0))
            sub_403320(&var_50)
            sub_403320(&var_38)
        else if (var_a4_1 + 4 s< 0 || var_a4_1 + 4 s>= var_ac)
            ebx.b = 0
        else
            int32_t var_a4_2 = var_a4_1 + 4
            var_a0 = nullptr
            
            if (sub_622c00(&var_b8, &var_a0) == 0)
                ebx.b = 0
            else if (sub_622c50(&var_b8, var_a4_1) == 0)
                ebx.b = 0
            else
                int32_t eax_13 = 0
                
                if (var_a0 s<= 7)
                    eax_13 = 8
                
                _memset(&var_90, 0, 0x40)
                
                if (sub_622bb0(&var_b8, &var_90, 0x40 - eax_13) == 0 || var_90 != 0x3e8)
                    ebx.b = 0
                else
                    int32_t var_8c
                    int32_t eax_15 = var_8c
                    
                    if (eax_15 == 7 || eax_15 == 8)
                        if (sub_622cd0(&var_b8, arg2) == 0)
                            ebx.b = 0
                        else if (sub_605300(arg1, &var_b8, &var_90) == 0)
                            ebx.b = 0
                        else if (sub_6053f0(arg1, &var_b8, &var_90) == 0)
                            ebx.b = 0
                        else if (sub_6054a0(arg1, &var_b8, &var_90) == 0)
                            ebx.b = 0
                        else if (sub_605510(arg1, &var_b8, &var_90) == 0)
                            ebx.b = 0
                        else if (sub_605700(arg1, &var_b8, &var_90) == 0)
                            ebx.b = 0
                        else if (sub_605780(arg1, &var_b8) == 0)
                            ebx.b = 0
                        else
                            ebx.b = 1
                    else
                        sub_403360(&var_38, 0x76ae04)
                        var_94_1.b = 4
                        var_94_1.b = 5
                        sub_6c52e0(sub_409350(&var_8c, &var_38, &var_50, &var_8c))
                        sub_403320(&var_50)
                        sub_403320(&var_38)
                        ebx.b = 0
    
    if (var_c_1 u>= 0x10)
        sub_403160(var_20.d, var_c_1 + 1, 1)
    
    int32_t var_c_2 = 0xf
    int32_t var_10_2 = 0
    var_20 = 0

if (lpMem != 0)
    HeapFree(data_7fcbf4, HEAP_NONE, lpMem)

BOOL result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_90)
return result
