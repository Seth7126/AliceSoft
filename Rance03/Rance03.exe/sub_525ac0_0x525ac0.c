// 函数: sub_525ac0
// 地址: 0x525ac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c32ee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IMemory::common::CIMemory::VTable** result

if (*(arg1 + 0xc) != 0)
    struct filesystem::CFile::VTable* const var_58 = &filesystem::CFile::`vftable'
    HANDLE var_54_1 = 0xffffffff
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 0
    int32_t var_4 = 0
    bool cond:1_1 = sub_6049e0(&var_58, arg1 + 0x10) == 0
    HANDLE eax_7 = var_54_1
    int32_t lDistanceToMove
    
    if (not(cond:1_1))
        lDistanceToMove = *(arg2 + 4)
    
    struct IMemory::common::CIMemory::VTable** result_1
    
    if (cond:1_1 || eax_7 == 0xffffffff || lDistanceToMove u>= var_4c_1)
        result_1 = nullptr
    else
        SetFilePointer(eax_7, lDistanceToMove, nullptr, FILE_BEGIN)
        int32_t lDistanceToMove_1 = lDistanceToMove
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        var_4.b = 1
        
        if (sub_604f30(&var_58, &var_2c) == 0)
            result_1 = nullptr
        else
            int32_t var_44
            
            if (sub_40c250(&var_2c, 0x6e33ac) == 0)
                result_1 = nullptr
            else
                int32_t var_3c
                
                if (sub_604ee0(&var_58, &var_44) == 0 || var_44 != 0)
                    result_1 = nullptr
                else
                    uint32_t var_40
                    
                    if (sub_604ee0(&var_58, &var_3c) == 0)
                        result_1 = nullptr
                    else if (sub_604ee0(&var_58, &var_40) == 0)
                        result_1 = nullptr
                    else
                        uint32_t eax_13 = var_40
                        
                        if (eax_13 s> 0)
                            uint8_t* var_38
                            sub_448e90(&var_38, eax_13)
                            var_4.b = 3
                            uint8_t* eax_16 = var_38
                            int32_t var_34
                            uint32_t ebx_2 = var_34 - eax_16
                            
                            if (sub_604e90(&var_58, eax_16, ebx_2) == 0)
                                result_1 = nullptr
                                sub_403510(&var_38)
                            else
                                struct IMemory::common::CIMemory::VTable** eax_18 = sub_69adc6(0x20)
                                struct IMemory::common::CIMemory::VTable** var_48_2 = eax_18
                                var_4.b = 4
                                
                                if (eax_18 == 0)
                                    result_1 = nullptr
                                else
                                    result_1 = sub_403380(eax_18)
                                
                                var_4.b = 3
                                
                                if ((*result_1)->vFunc_2(var_3c) != 0)
                                    void* esi_1 = **(arg1 + 0xc)
                                    int32_t eax_28 =
                                        (*result_1)->vFunc_6((*result_1)->vFunc_5(var_38, ebx_2))
                                    *(arg1 + 0xc)
                                    
                                    if ((*(esi_1 + 8))(eax_28) != 0)
                                        sub_604a50(&var_58)
                                        sub_403510(&var_38)
                                    else
                                        (*result_1)->vFunc_1(eax_4)
                                        result_1 = nullptr
                                        sub_403510(&var_38)
                                else
                                    (*result_1)->vFunc_1(eax_4)
                                    result_1 = nullptr
                                    sub_403510(&var_38)
                        else
                            struct IMemory::common::CIMemory::VTable** eax_14 = sub_69adc6(0x20)
                            struct IMemory::common::CIMemory::VTable** var_48_1 = eax_14
                            var_4.b = 2
                            
                            if (eax_14 == 0)
                                result_1 = nullptr
                            else
                                result_1 = sub_403380(eax_14)
        
        if (var_18_1 u>= 0x10)
            j__free(var_2c.d)
        
        eax_7 = var_54_1
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
    
    if (eax_7 != 0xffffffff)
        CloseHandle(eax_7)
    
    result = result_1
else
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
