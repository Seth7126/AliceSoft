// 函数: sub_622aa0
// 地址: 0x622aa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7448e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = nullptr
char* var_40 = nullptr
int32_t var_3c = 0
int32_t var_38 = 0
int32_t var_8_1 = 0
BOOL result
BOOL ebx

if (data_7fd464 == 0)
    ebx.b = 0
else
    var_8_1.b = 1
    void* var_30
    result = sub_67edf0(sub_4079d0(arg2, &data_7fd454, &var_30, arg2), &var_40)
    char var_31_1 = result.b
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30, var_1c + 1, 1)
        result.b = var_31_1
    
    esi = var_40
    
    if (result.b == 0)
        ebx.b = 0
    else
        void* edi_2 = var_3c - esi
        
        if (sub_405df0(arg1 + 4, edi_2).b == 0)
            ebx.b = 0
        else
            if (esi != var_3c)
                char* eax_4
                
                if (*(arg1 + 0xc) != 0)
                    eax_4 = *(arg1 + 8)
                else
                    eax_4 = nullptr
                
                sub_700660(eax_4, esi, edi_2)
            
            ebx.b = 1
            *(arg1 + 0x14) = 0

if (esi != 0)
    sub_403160(esi, var_38 - esi, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
