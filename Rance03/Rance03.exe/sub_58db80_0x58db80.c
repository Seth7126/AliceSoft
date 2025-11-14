// 函数: sub_58db80
// 地址: 0x58db80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7e6b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1 + 0x64
CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x68) + 4
int32_t* var_44 = arg2
struct thread::CCriticalLock::VTable* const var_50 = &thread::CCriticalLock::`vftable'
EnterCriticalSection(lpCriticalSection)
char var_4c = 1
int32_t var_4 = 0
struct sealengine::CPolyData::VTable** result = sub_590b10(arg1 + 0x84, arg2)

if (result != 0)
    LeaveCriticalSection(*(edi + 4) + 4)
else
    char var_40
    sub_58f410(&var_40, arg2)
    var_4.b = 1
    char var_28
    sub_58f520(&var_28, arg2)
    struct sealengine::CResourceData::VTable* const var_78 = &sealengine::CResourceData::`vftable'
    int96_t var_74_1 = (zx.o(0)).12
    var_4.b = 3
    int32_t* ecx_2 = var_74_1.d
    int32_t eax_8 = var_74_1:4.d
    
    if (sub_58f630(arg1, &var_40, &var_78) == 0 || (ecx_2 == 0 && eax_8 == var_74_1:8.d))
        result = nullptr
    else
        struct sealengine::CResourceData::VTable* var_64 = &sealengine::CResourceData::`vftable'
        int96_t var_60_1 = (zx.o(0)).12
        var_4.b = 4
        
        if (sub_58f630(arg1, &var_28, &var_64) == 0)
            result = nullptr
        else
            struct sealengine::CPolyData::VTable** eax_10 = sub_69adc6(0xd4)
            struct sealengine::CPolyData::VTable** var_7c_1 = eax_10
            var_4.b = 5
            
            if (eax_10 == 0)
                result = nullptr
            else
                result = sub_57aba0(eax_10, arg2, *(arg1 + 0x60), arg1 + 0x84)
            
            var_4.b = 4
            int32_t* ecx_6 = var_60_1.d
            void* var_7c_2
            char* edi_1
            int32_t eax_16
            
            if (ecx_6 == 0)
                eax_16 = var_60_1:8.d
                edi_1 = var_60_1:4.d
                var_7c_2 = eax_16 - edi_1
            label_58dd17:
                
                if (edi_1 == eax_16)
                    edi_1 = nullptr
            else
                int32_t* ecx_7 = var_60_1.d
                var_7c_2 = (*(*ecx_6 + 0x14))(eax_4)
                
                if (ecx_7 == 0)
                    eax_16 = var_60_1:8.d
                    edi_1 = var_60_1:4.d
                    goto label_58dd17
                
                edi_1 = (*(*ecx_7 + 0x18))()
            int32_t* ecx_8 = var_74_1.d
            int32_t eax_20
            int32_t ebp_1
            int32_t ecx_10
            
            if (ecx_8 == 0)
                ecx_10 = var_74_1:8.d
                eax_20 = var_74_1:4.d
                ebp_1 = ecx_10 - eax_20
            label_58dd52:
                
                if (eax_20 == ecx_10)
                    eax_20 = 0
            else
                int32_t* ecx_9 = var_74_1.d
                ebp_1 = (*(*ecx_8 + 0x14))(eax_4)
                
                if (ecx_9 == 0)
                    ecx_10 = var_74_1:8.d
                    eax_20 = var_74_1:4.d
                    goto label_58dd52
                
                eax_20 = (*(*ecx_9 + 0x18))()
            char eax_21 = sub_57af30(result, eax_20, ebp_1, edi_1, var_7c_2, &var_40, 
                *(arg1 + 0x20), *(arg1 + 0x24), arg3)
            char eax_22
            
            if (eax_21 != 0)
                eax_22 = sub_590a10(arg1 + 0x84, var_44, result)
            
            if (eax_21 == 0 || eax_22 == 0)
                sub_54c280(result)
                result = nullptr
            else
                sub_5f4170(&var_50)
        
        var_4.b = 3
        sub_58d420(&var_64)
        eax_8 = var_74_1:4.d
        ecx_2 = var_74_1.d
    
    var_78 = &sealengine::CResourceData::`vftable'
    var_4.b = 6
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))(eax_4)
        eax_8 = var_74_1:4.d
    
    if (eax_8 != 0)
        j__free(eax_8)
        var_74_1:4.d = 0
        var_74_1:8.d = 0
        var_74_1:0xc.d = 0
    
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28.d)
    
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28 = 0
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        j__free(var_40.d)
    
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    var_40 = 0
    
    if (var_4c != 0)
        LeaveCriticalSection(*(edi + 4) + 4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_80)
return result
