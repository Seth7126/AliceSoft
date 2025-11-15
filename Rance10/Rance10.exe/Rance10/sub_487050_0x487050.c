// 函数: sub_487050
// 地址: 0x487050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ee60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
int32_t* var_48 = ebx
int32_t result = 0

while (true)
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    sub_403490(&var_44, 0x760190, 0x14)
    int32_t var_8_1 = 0
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x760174, 0x18)
    var_8_1.b = 1
    void* ecx_2 = ebx[1]
    
    if (ecx_2 != 0)
        char* edx_1 = &var_2c
        
        if (var_18_1 u>= 0x10)
            edx_1 = var_2c.d
        
        int32_t* eax_4 = (*(*(ecx_2 + 4) + 0x28))(edx_1)
        
        if (eax_4 != 0)
            int32_t eax_6 = (*(*eax_4 + 0x20))(result)
            char* ecx_5 = &var_44
            
            if (var_30_1 u>= 0x10)
                ecx_5 = var_44.d
            
            ebx.b = (*(*eax_4 + 4))(eax_6, (*(*eax_4 + 0x24))(ecx_5))
        else
            ebx.b = 0
    else
        ebx.b = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44.d, var_30_1 + 1, 1)
    
    if (ebx.b == 0)
        break
    
    ebx = var_48
    result += 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
