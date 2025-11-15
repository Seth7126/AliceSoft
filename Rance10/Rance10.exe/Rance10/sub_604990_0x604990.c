// 函数: sub_604990
// 地址: 0x604990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_74 = 0xffffffff
int32_t (* var_78)(void* arg1) = sub_742708
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sys43vm::CReadFile::VTable* const var_70
int32_t eax_2 = __security_cookie ^ &var_70
int32_t var_cc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg2
void** edi = arg3
bool cond:0 = arg4[5] u< 0x10
arg4[4] = 0
char* eax_3

if (cond:0)
    eax_3 = arg4
else
    eax_3 = *arg4

*eax_3 = 0
var_70 = &sys43vm::CReadFile::`vftable'
struct memory::CFastMemory::VTable* const var_6c = &memory::CFastMemory::`vftable'
BOOL lpMem = 0
int32_t var_64 = 0
int32_t var_60 = 0
int32_t var_5c = 0
int32_t var_74_1 = 0
int32_t* ebx
void** var_58
char var_38
char var_20

if (sub_61ea30(*(arg1 + 0x4c), edi, &var_6c) == 0)
    if (edi[5] u>= 0x10)
        edi = *edi
    
    var_58 = edi
    int32_t var_c_1 = 0xf
    int32_t var_10_1 = 0
    var_20 = 0
    sub_403490(&var_20, 0x76ae38, 0x57)
    var_74_1.b = 1
    var_74_1.b = 2
    ebx.b = sub_6c52e0(sub_409240(&var_58, &var_20, &var_38, &var_58))
    int32_t var_24
    
    if (var_24 u>= 0x10)
        sub_403160(var_38.d, var_24 + 1, 1)
    
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    var_38 = 0
    
    if (var_c_1 u>= 0x10)
        sub_403160(var_20.d, var_c_1 + 1, 1)
    
    int32_t var_c_2 = 0xf
    int32_t var_10_2 = 0
    var_20 = 0
else if (var_64 s<= 0)
    ebx.b = 0
else
    int32_t var_5c_1 = 0
    int32_t var_3c_1 = 0xf
    int32_t var_40_1 = 0
    char var_50 = 0
    var_74_1.b = 3
    
    if (sub_622cd0(&var_70, &var_50) == 0)
        ebx.b = 0
    else if (sub_4090e0(&var_50, esi) != 0)
        if (esi[5] u>= 0x10)
            esi = *esi
        
        var_58 = esi
        sub_403360(&var_38, 0x76ae90)
        var_74_1.b = 4
        var_74_1.b = 5
        ebx.b = sub_6c52e0(sub_409240(&var_58, &var_38, &var_20, &var_58))
        sub_403320(&var_20)
        sub_403320(&var_38)
    else if (var_64 s< var_5c_1 + 0x40)
        ebx.b = 0
    else
        BOOL lpMem_1 = lpMem
        
        if (var_64 == 0)
            lpMem_1 = 0
        
        int32_t var_bc
        sub_700660(&var_bc, lpMem_1 + var_5c_1, 0x40)
        int32_t var_5c_2 = var_5c_1 + 0x40
        int32_t var_b8
        
        if (var_bc != 0x3e8)
            ebx.b = 0
        else
            int32_t var_80
            
            if (var_b8 s<= 7)
                ebx.b = 1
            else if (var_80 != 0)
                struct sys43vm::CReadFile::VTable* const* ecx_12 = &var_70
                int32_t var_84
                
                if (sub_622c50(ecx_12, var_84) == 0)
                    ebx.b = 0
                else
                    var_58 = nullptr
                    
                    if (sub_622c00(ecx_12, &var_58) == 0)
                        ebx.b = 0
                    else
                        void** esi_2 = var_58
                        
                        if (esi_2 != 0)
                            char* var_14
                            sub_431b80(&var_14, esi_2)
                            var_74_1.b = 6
                            
                            if (sub_622bb0(&var_70, var_14, esi_2) != 0)
                                char var_51 = 0
                                sub_4263a0(&var_14, &var_51)
                                sub_409670(arg4, sub_403360(&var_38, var_14))
                                sub_403320(&var_38)
                                ebx.b = 1
                                sub_4059a0(&var_14)
                            else
                                ebx.b = 0
                                sub_4059a0(&var_14)
                        else
                            ebx.b = 1
            else
                ebx.b = 1
    
    if (var_3c_1 u>= 0x10)
        sub_403160(var_50.d, var_3c_1 + 1, 1)
    
    int32_t var_3c_2 = 0xf
    int32_t var_40_2 = 0
    var_50 = 0

if (lpMem != 0)
    HeapFree(data_7fcbf4, HEAP_NONE, lpMem)

BOOL result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_70)
return result
