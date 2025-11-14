// 函数: sub_620c60
// 地址: 0x620c60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6ce4cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_68 = arg1
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_28 = 0
int32_t var_50

if (sub_621500(&ExceptionList, *(arg1 + 8), &var_50, 8, 0xf, 8, 0, "1.2.7") == 0)
    struct IMemory::common::CIMemory::VTable** result = sub_69adc6(0x20)
    struct IMemory::common::CIMemory::VTable** result_1 = result
    int32_t var_c_1 = 0
    
    if (result == 0)
        result = nullptr
    else
        *result = &common::CIMemory::`vftable'{for `IMemory'}
        sub_5f4370(&result[1])
        result[5] = 0
        result[6] = 0
        result[7] = 0
    
    int32_t var_c_2 = 0xffffffff
    bool cond:0_1 = (*result)->vFunc_2((arg3 << 1) + 0x400) == 0
    struct IMemory::common::CIMemory::VTable* eax_9 = *result
    
    if (not(cond:0_1))
        int32_t var_44_1 = eax_9->vFunc_6(eax_2)
        int32_t var_40_1 = (*result)->vFunc_5()
        var_50 = arg2
        int32_t var_4c_1 = arg3
        int32_t eax_14 = sub_621850(&var_50, 4)
        int32_t var_3c
        
        if ((eax_14 == 1 || eax_14 == 0) && (*result)->vFunc_3(var_3c) != 0)
            if (sub_6220b0(&var_50) == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            (*result)->vFunc_1()
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        eax_9 = *result
    
    eax_9->vFunc_1(eax_2)
    sub_6220b0(&var_50)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
