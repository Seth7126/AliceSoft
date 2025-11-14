// 函数: sub_4ccab0
// 地址: 0x4ccab0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bee48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
void* ebx
void* var_4c = ebx
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (arg3 != 0)
    int32_t eax_5 = *(arg2 + 8)
    int32_t esi_1 = *(arg2 + 4)
    result = sub_460570(sbb.d(arg1, arg1, esi_1 u< eax_5) & esi_1, eax_5 - esi_1)
    
    if (result == 0)
        result.b = 0
    else
        struct common::CEXReader::VTable* const var_44 = &common::CEXReader::`vftable'
        (**result)(eax_4)
        int32_t var_4 = 0
        (*(*result + 4))()
        int32_t* var_28
        sub_401f60(&var_28, 0x6e17dc)
        var_4.b = 1
        int32_t* result_1
        int32_t var_14
        
        if (result != 0)
            int32_t** edx_3 = &var_28
            
            if (var_14 u>= 0x10)
                edx_3 = var_28
            
            result_1 = (*(*result + 0x44))(edx_3)
        else
            result_1 = result
        
        var_4.b = 0
        
        if (var_14 u>= 0x10)
            j__free(var_28)
        
        sub_401f60(&var_28, 0x6e17c0)
        var_4.b = 2
        int32_t eax_10
        
        if (result != 0)
            int32_t** edx_4 = &var_28
            
            if (var_14 u>= 0x10)
                edx_4 = var_28
            
            eax_10 = (*(*result + 0x44))(edx_4)
        else
            eax_10 = 0
        
        var_4.b = 0
        arg1[1] = eax_10
        
        if (var_14 u>= 0x10)
            j__free(var_28)
        
        sub_401f60(&var_28, 0x6e17cc)
        var_4.b = 3
        int32_t edi_1
        
        if (result != 0)
            int32_t** edx_5 = &var_28
            
            if (var_14 u>= 0x10)
                edx_5 = var_28
            
            edi_1 = (*(*result + 0x10))(edx_5)
        else
            edi_1 = 0
        
        var_4.b = 0
        
        if (var_14 u>= 0x10)
            j__free(var_28)
        
        int32_t esi_3 = 0
        
        if (edi_1 s> 0)
            do
                int32_t var_14_1 = 0xf
                int32_t var_18_1 = 0
                var_28.b = 0
                sub_402110(&var_28, 0x6e17f0, 8)
                var_4.b = 4
                int32_t* result_2 = result
                int32_t eax_14
                
                if (result_2 != 0)
                    int32_t* edx_6 = &var_28
                    
                    if (var_14_1 u>= 0x10)
                        edx_6 = var_28
                    
                    eax_14, result_2 = (*(*result_2 + 0x50))(edx_6, esi_3)
                else
                    eax_14 = 0
                
                int32_t var_34 = eax_14
                uint32_t var_60_8 = zx.d(data_75dd2a)
                int32_t* var_64_2 = &var_34
                int32_t** var_30
                sub_4ce350(&arg1[8], &var_30, result_2)
                var_4.b = 0
                
                if (var_14_1 u>= 0x10)
                    j__free(var_28)
                
                esi_3 += 1
            while (esi_3 s< edi_1)
        
        int32_t var_4_1 = 0xffffffff
        ebx.b = sub_4cc240(arg1, result_1, &var_44, arg3).b != 0
        var_44 = &common::CEXReader::`vftable'
        
        if (result != 0)
            (*(*result + 4))()
        
        result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
