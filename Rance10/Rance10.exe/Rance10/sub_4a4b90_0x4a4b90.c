// 函数: sub_4a4b90
// 地址: 0x4a4b90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7313c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_58 = ebx
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = nullptr
void* var_54 = nullptr
int32_t var_50 = 0
int32_t var_4c = 0
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result

if (data_7fd464 == 0)
    ebx.b = 0
else
    var_8_1.b = 1
    var_8_1.b = 0
    void* var_44
    ebx.b = sub_67edf0(sub_4079d0(&ExceptionList, &data_7fd454, &var_44, &data_7fcca4), &var_54).b
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    esi = var_54
    
    if (ebx.b == 0)
        ebx.b = 0
    else
        result.b = esi == var_50
        
        if (result.b != 0)
            ebx.b = 0
        else
            struct fileimage::CFileImageAnalyser::VTable* const var_38 =
                &fileimage::CFileImageAnalyser::`vftable'
            void* var_34_1 = esi
            void* var_30_1 = var_50
            struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            var_8_1.b = 3
            
            if (sub_61ed80(&var_38, &var_2c) == 0)
                ebx.b = 0
            else if (sub_407560(&var_2c, 0x761448) == 0)
                ebx.b = 0
            else
                uint32_t var_48 = 0
                
                if (sub_61ec90(&var_38, &var_48) == 0 || var_48 != 0)
                    ebx.b = 0
                else
                    var_48 = 0
                    
                    if (sub_61ec90(&var_38, &var_48) == 0)
                        ebx.b = 0
                    else
                        uint32_t eax_9 = var_48
                        
                        if (eax_9 == 0)
                            *arg1 = 0
                            ebx.b = 1
                        else if (eax_9 != 1)
                            ebx.b = 0
                        else
                            *arg1 = 1
                            ebx.b = 1
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            int32_t var_18_2 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0

if (esi != 0)
    sub_403160(esi, var_4c - esi, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
