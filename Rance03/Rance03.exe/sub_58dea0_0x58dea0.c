// 函数: sub_58dea0
// 地址: 0x58dea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c7f10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CResourceData::VTable* const var_d4
int32_t eax_2 = __security_cookie ^ &var_d4
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_94
int32_t* eax_6 = sub_410930(arg2, arg2, &var_94, U"/")
int32_t var_c_1 = 0
void* var_4c
sub_410ad0(eax_6, eax_6, &var_4c, arg3)
int32_t var_80

if (var_80 u>= 0x10)
    j__free(var_94)

void* ebx_1 = arg1 + 0x6c
CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x70) + 4
struct thread::CCriticalLock::VTable* const var_b4 = &thread::CCriticalLock::`vftable'
EnterCriticalSection(lpCriticalSection)
char var_b0 = 1
var_c_1.b = 3
int32_t* result_1 = sub_590b10(arg1 + 0xa0, &var_4c)
int32_t* result = result_1

if (result != 0)
    LeaveCriticalSection(*(ebx_1 + 4) + 4)
else
    char var_64
    sub_58e330(result_1, arg2, &var_64, arg3)
    var_c_1.b = 4
    int32_t var_34
    char* eax_9 = sub_4028a0(&var_34, arg2)
    var_c_1.b = 5
    char* eax_10 = sub_410ad0(eax_9, eax_9, &var_94, arg3)
    var_c_1.b = 6
    char var_7c
    sub_410a80(eax_10.b, eax_10, &var_7c, ".mpr")
    
    if (var_80 u>= 0x10)
        j__free(var_94)
    
    int32_t var_80_1 = 0xf
    int32_t var_84_1 = 0
    var_94.b = 0
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    var_d4 = &sealengine::CResourceData::`vftable'
    int96_t var_d0_1 = (zx.o(0)).12
    var_c_1.b = 0xa
    int32_t* ecx_8 = var_d0_1.d
    int32_t eax_12 = var_d0_1:4.d
    
    if (sub_58f630(arg1, &var_64, &var_d4) == 0 || (ecx_8 == 0 && eax_12 == var_d0_1:8.d))
        result = nullptr
    else
        struct sealengine::CResourceData::VTable* var_a8 = &sealengine::CResourceData::`vftable'
        int96_t var_a4_1 = (zx.o(0)).12
        var_c_1.b = 0xb
        
        if (sub_58f630(arg1, &var_7c, &var_a8) == 0)
            result = nullptr
        else
            struct sealengine::CMotionData::VTable** eax_14 = sub_69adc6(0x80)
            struct sealengine::CMotionData::VTable** var_c0_1 = eax_14
            var_c_1.b = 0xc
            
            if (eax_14 == 0)
                result = nullptr
            else
                result = sub_54bec0(eax_14, &var_4c, arg1 + 0xa0)
            
            var_c_1.b = 0xb
            
            if (result == 0)
                result = nullptr
            else
                int32_t* ecx_12 = var_a4_1.d
                int32_t edi_1
                
                if (ecx_12 == 0)
                    edi_1 = var_a4_1:8.d - var_a4_1:4.d
                else
                    edi_1 = (*(*ecx_12 + 0x14))(eax_4)
                
                int32_t* ecx_13 = var_d0_1.d
                void* ebx_2
                
                if (ecx_13 == 0)
                    ebx_2 = var_d0_1:8.d - var_d0_1:4.d
                else
                    ebx_2 = (*(*ecx_13 + 0x14))(eax_4)
                
                char* eax_20 = sub_58d4a0(&var_a8)
                char eax_22 = sub_54c340(result, sub_58d4a0(&var_d4), ebx_2, eax_20, edi_1)
                char eax_23
                
                if (eax_22 != 0)
                    eax_23 = sub_590a10(arg1 + 0xa0, &var_4c, result)
                
                if (eax_22 == 0 || eax_23 == 0)
                    sub_54c280(result)
                    result = nullptr
                else
                    sub_5f4170(&var_b4)
        
        var_c_1.b = 0xa
        sub_58d420(&var_a8)
        eax_12 = var_d0_1:4.d
        ecx_8 = var_d0_1.d
    
    var_d4 = &sealengine::CResourceData::`vftable'
    var_c_1.b = 0xd
    
    if (ecx_8 != 0)
        (*(*ecx_8 + 4))(eax_4)
        eax_12 = var_d0_1:4.d
    
    if (eax_12 != 0)
        j__free(eax_12)
        var_d0_1:4.d = 0
        var_d0_1:8.d = 0
        var_d0_1:0xc.d = 0
    
    int32_t var_68
    
    if (var_68 u>= 0x10)
        j__free(var_7c.d)
    
    int32_t var_68_1 = 0xf
    int32_t var_6c_1 = 0
    var_7c = 0
    int32_t var_50
    
    if (var_50 u>= 0x10)
        j__free(var_64.d)
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    
    if (var_b0 != 0)
        LeaveCriticalSection(*(ebx_1 + 4) + 4)

int32_t var_38

if (var_38 u>= 0x10)
    j__free(var_4c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_d4)
return result
