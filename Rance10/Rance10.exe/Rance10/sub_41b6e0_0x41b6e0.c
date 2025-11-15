// 函数: sub_41b6e0
// 地址: 0x41b6e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = (*(*arg1 + 0xc))(eax_2)

if (result.b == 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = result.b
    sub_403490(&var_2c, "DP\DPLogViewer.exe", 0x12)
    int32_t var_8_1 = 0
    char var_44
    char* lpParameters = sub_6ca3a0(&var_44, arg1[2])
    
    if (*(lpParameters + 0x14) u>= 0x10)
        lpParameters = *lpParameters
    
    PSTR lpFile = &var_2c
    
    if (var_18_1 u>= 0x10)
        lpFile = var_2c.d
    
    ShellExecuteA(nullptr, "open", lpFile, lpParameters, nullptr, SW_SHOWNORMAL)
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
