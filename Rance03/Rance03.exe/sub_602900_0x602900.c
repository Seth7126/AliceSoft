// 函数: sub_602900
// 地址: 0x602900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc99e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_a4
int32_t eax_2 = __security_cookie ^ &var_a4
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (data_75d534 == 0)
    result.b = 0
else
    int32_t* var_bc_1 = arg3
    result = sub_6203f0()
    
    if (result == 0)
        result.b = 0
    else
        result = (*result)->Next(0x6ebb8c)
        
        if (result == 0)
            result.b = 0
        else
            var_a4 = (*result)->Next(eax_4)
            struct filedialog::CSaveFileDlg::VTable* const var_94_1 =
                &filedialog::CSaveFileDlg::`vftable'
            int32_t* eax_7 = sub_69adc6(0x764)
            int32_t* param0
            
            if (eax_7 == 0)
                param0 = nullptr
            else
                param0 = sub_6024a0(eax_7)
            
            int32_t* param0_1 = param0
            int32_t var_4 = 0
            param0[1] = var_a4
            char var_5c
            sub_401f60(&var_5c, (**arg4)())
            var_4.b = 1
            int32_t var_4c
            int32_t var_2c
            int32_t var_18
            
            if (var_4c != 0)
                char* eax_12 = sub_402e90(&var_2c, &var_5c)
                
                if (*(eax_12 + 0x14) u>= 0x10)
                    eax_12 = *eax_12
                
                _strcpy_s(&param0[0x96], 0x104, eax_12)
                param0[0xb] = &param0[0x96]
                
                if (var_18 u>= 0x10)
                    j__free(var_2c)
            
            int32_t* var_74
            sub_401f60(&var_74, (**arg3)())
            var_4.b = 2
            int32_t var_64
            int32_t var_60
            
            if (var_64 != 0)
                int32_t* ecx_8 = &var_74
                
                if (var_60 u>= 0x10)
                    ecx_8 = var_74
                
                _strcpy_s(&param0[0x16], 0x200, ecx_8)
            
            int32_t* var_8c
            sub_401f60(&var_8c, (**arg2)())
            var_4.b = 3
            int32_t var_7c
            int32_t var_78
            
            if (var_7c != 0)
                int32_t* eax_18 = &var_8c
                
                if (var_78 u>= 0x10)
                    eax_18 = var_8c
                
                param0[0xc] = eax_18
            
            int32_t eax_20 = (*(*arg5 + 8))()
            int32_t edx_2 = *arg6
            var_a4 = eax_20
            int32_t eax_21 = (*(edx_2 + 8))()
            BOOL eax_30
            
            if (eax_20 == eax_21)
                int32_t esi_3 = 0
                
                if (var_a4 s> 0)
                    do
                        int32_t* eax_23 = (*(*arg5 + 0x18))(esi_3)
                        
                        if (eax_23 == 0)
                            goto label_602bc5
                        
                        int32_t* eax_25 = (*(*arg6 + 0x18))(esi_3)
                        
                        if (eax_25 == 0)
                            goto label_602bc5
                        
                        sub_401f60(&var_2c, (**eax_25)())
                        var_4.b = 4
                        char var_44
                        sub_401f60(&var_44, (**eax_23)())
                        sub_6023e0(param0, &var_44, &var_2c)
                        int32_t var_30
                        
                        if (var_30 u>= 0x10)
                            j__free(var_44.d)
                        
                        var_4.b = 3
                        var_30 = 0xf
                        int32_t var_34_1 = 0
                        var_44 = 0
                        
                        if (var_18 u>= 0x10)
                            j__free(var_2c)
                        
                        esi_3 += 1
                    while (esi_3 s< var_a4)
                
                *(param0[0x1d8] + param0 + 0x35d) = 0
                eax_30 = GetSaveFileNameA(param0)
            
            int32_t* ebx
            
            if (eax_20 != eax_21 || eax_30 == 0 || param0 == 0xffffffa8)
            label_602bc5:
                ebx.b = 0
            else
                (*(*arg3 + 4))(&param0[0x16])
                ebx.b = 1
            
            if (var_78 u>= 0x10)
                j__free(var_8c)
            
            int32_t var_78_1 = 0xf
            int32_t var_7c_1 = 0
            var_8c.b = 0
            
            if (var_60 u>= 0x10)
                j__free(var_74)
            
            int32_t var_60_1 = 0xf
            int32_t var_64_1 = 0
            var_74.b = 0
            int32_t var_48
            
            if (var_48 u>= 0x10)
                j__free(var_5c.d)
            
            int32_t var_48_1 = 0xf
            int32_t var_4c_1 = 0
            var_5c = 0
            j__free(param0)
            result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a4)
return result
