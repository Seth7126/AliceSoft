// 函数: sub_433aa0
// 地址: 0x433aa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a6c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_1c = arg1
int32_t** result = arg1[1]

if (result u< 1)
    int32_t ebx_1 = 0
    int32_t var_8_1 = 0
    
    while (true)
        int32_t var_18_1 = ebx_1
        
        if (arg1[1] u>= 1)
            break
        
        void* esi_1 = *arg1
        int32_t* eax_3 = sub_433c50(esi_1, *(esi_1 + 4))
        int32_t eax_4 = arg1[1]
        
        if (0x5d1745c - eax_4 u< 1)
            sub_6d0927("list<T> too long")
            noreturn
        
        ebx_1 += 1
        arg1[1] = eax_4 + 1
        *(esi_1 + 4) = eax_3
        result = eax_3[1]
        *result = eax_3
else if (result u> 1)
    do
        int32_t* esi_2 = *(*arg1 + 4)
        *esi_2[1] = *esi_2
        *(*esi_2 + 4) = esi_2[1]
        arg1[1] -= 1
        sub_417070(&esi_2[8])
        sub_417070(&esi_2[5])
        sub_417070(&esi_2[2])
        result = sub_403160(esi_2, 1, 0x2c)
    while (arg1[1] u> 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
