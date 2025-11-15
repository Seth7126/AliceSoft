// 函数: sub_6fc438
// 地址: 0x6fc438
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0xc
int32_t (* var_c)(void* arg1) = sub_74b0c6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
void* const var_30_4 = &data_6fc444
int32_t var_8_2 = 0xffffffff
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi_1 = *(arg1 + 0x18) & 0xfffffffc

if (esi_1 != 0 && esi_1 != 0xc)
    void var_1c
    void* var_34 = &var_1c
    __ExceptionPtrCopy(var_34, esi_1)
    int32_t var_8 = 0
    __ExceptionPtrDestroy(esi_1)
    int32_t var_3c_1 = 8
    operator new(esi_1)
    *(arg1 + 0x18) = 0
    char eax
    void* ecx
    eax, ecx = sub_6fff51()
    
    if (eax == 0)
        void* var_30_1 = ecx
        var_34 = ecx
        sub_696a30(&var_34, &var_1c)
        sub_696b20()
        noreturn
    
    int32_t var_8_1 = 0xffffffff
    result = __ExceptionPtrDestroy(&var_1c)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fc4a1
return result
