// 函数: ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QAE@XZ
// 地址: 0x49ad60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a526
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != arg2)
    int32_t* esi_1 = arg1 + 0x2c
    
    do
        int32_t var_8_1 = 0
        int32_t* ecx = *esi_1
        
        if (ecx != 0)
            void* eax_3
            eax_3.b = ecx != &esi_1[-9]
            (*(*ecx + 0x10))(zx.d(eax_3.b))
            *esi_1 = 0
        
        esi_1 = &esi_1[0xc]
        int32_t var_8_2 = 0xffffffff
        result = &esi_1[-0xb]
    while (result != arg2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
