// 函数: sub_478090
// 地址: 0x478090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e2d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg2
int32_t* ecx = data_7fcb88
int32_t* ebx = arg5
int32_t* var_74 = ebx
int32_t* result

if (ecx == 0)
    result.b = 0
else
    result = (**ecx)(0x75fbfc)
    
    if (result == 0)
        result.b = 0
    else
        result = (*(*result + 0x38))(eax_2)
        
        if (result == 0)
            result.b = 0
        else
            struct win32only::CSaveFileDlg::VTable* const var_80_1 =
                &win32only::CSaveFileDlg::`vftable'
            int32_t* eax_5 = sub_6e810c(0x764)
            int32_t* var_78_1 = eax_5
            int32_t* param0 = sub_6ce620(eax_5)
            int32_t* param0_1 = param0
            int32_t var_8_1 = 0
            param0[1] = result
            void* var_5c
            int32_t var_48
            
            if (arg4[4] != 0)
                char* eax_8 = sub_405320(&var_5c, arg4)
                
                if (*(eax_8 + 0x14) u>= 0x10)
                    eax_8 = *eax_8
                
                _strcpy_s(&param0[0x96], 0x104, eax_8)
                param0[0xb] = &param0[0x96]
                
                if (var_48 u>= 0x10)
                    sub_403160(var_5c, var_48 + 1, 1)
            
            int32_t* var_2c
            sub_403360(&var_2c, (**arg3)())
            var_8_1.b = 1
            int32_t var_1c
            int32_t var_18
            
            if (var_1c != 0)
                int32_t* eax_13 = &var_2c
                
                if (var_18 u>= 0x10)
                    eax_13 = var_2c
                
                _strcpy_s(&param0[0x16], 0x200, eax_13)
            
            if (esi[4] != 0)
                if (esi[5] u>= 0x10)
                    esi = *esi
                
                param0[0xc] = esi
            
            int32_t eax_16 = (*(*ebx + 8))()
            int32_t eax_18 = (*(*arg6 + 8))()
            BOOL eax_31
            
            if (eax_16 == eax_18)
                int32_t esi_3 = 0
                
                if (eax_16 s> 0)
                    do
                        int32_t* eax_20 = (*(*ebx + 0x14))(esi_3)
                        
                        if (eax_20 == 0)
                            goto label_4782c8
                        
                        int32_t* eax_22 = (*(*arg6 + 0x14))(esi_3)
                        
                        if (eax_22 == 0)
                            goto label_4782c8
                        
                        sub_403360(&var_5c, (**eax_22)())
                        var_8_1.b = 2
                        char var_44
                        sub_403360(&var_44, (**eax_20)())
                        sub_6ce4c0(param0, &var_44, &var_5c)
                        int32_t var_30
                        
                        if (var_30 u>= 0x10)
                            sub_403160(var_44.d, var_30 + 1, 1)
                        
                        var_8_1.b = 1
                        var_30 = 0xf
                        int32_t var_34_1 = 0
                        var_44 = 0
                        
                        if (var_48 u>= 0x10)
                            sub_403160(var_5c, var_48 + 1, 1)
                        
                        ebx = var_74
                        esi_3 += 1
                    while (esi_3 s< eax_16)
                
                *(param0[0x1d8] + param0 + 0x35d) = 0
                eax_31 = GetSaveFileNameA(param0)
            
            if (eax_16 != eax_18 || eax_31 == 0 || param0 == 0xffffffa8)
            label_4782c8:
                ebx.b = 0
            else
                (*(*arg3 + 4))(&param0[0x16])
                ebx.b = 1
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c, var_18 + 1, 1)
            
            int32_t var_94_11 = 0x764
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            var_2c.b = 0
            operator new(param0)
            result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
