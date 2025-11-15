// 函数: sub_47c8c0
// 地址: 0x47c8c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7270c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_7fcb60
HANDLE hHandle = *(esi + 4)
enum WAIT_EVENT result

if (hHandle != 0)
    result = WaitForSingleObject(hHandle, 0)

if (hHandle == 0 || result != WAIT_TIMEOUT)
    sub_47c0f0(esi)
    
    if (*(esi + 0x44) != *(esi + 0x48))
        void* eax_6 = *(esi + 0x48) - *(esi + 0x44)
        char* var_40_2 = *(esi + 0x44)
        enum WAIT_EVENT var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_403490(&var_2c, var_40_2, eax_6)
        int32_t var_8_1 = 0
        char* ecx_4 = &var_2c
        
        if (var_18_1 u>= 0x10)
            ecx_4 = var_2c.d
        
        (*(*arg1 + 4))(ecx_4)
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
    else
        (*(*arg1 + 4))(0x75ce8a)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
