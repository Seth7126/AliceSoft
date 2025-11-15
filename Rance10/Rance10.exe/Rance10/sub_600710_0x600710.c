// 函数: sub_600710
// 地址: 0x600710
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a526
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[2] == 0)
    void** eax_3 = sub_600790(&var_14, &arg1[3])
    void* ecx_1 = *eax_3
    *eax_3 = nullptr
    int32_t eax_4 = arg1[2]
    arg1[2] = ecx_1
    
    if (eax_4 != 0)
        int32_t var_20_1 = 4
        operator new(eax_4)
    
    int32_t* ecx_2 = var_14
    
    if (ecx_2 != 0)
        int32_t var_8_1 = 0
        (*(*ecx_2 + 0x1c))(1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1[2]
