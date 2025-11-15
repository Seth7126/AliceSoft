// 函数: sub_684700
// 地址: 0x684700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746e40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t ebx = arg1[1]
int32_t ecx_2 = (ebx - *arg1) s>> 3

if (ecx_2 u> 7)
    eax_3 = ebx + ((7 - ecx_2) << 3)
    struct _EXCEPTION_REGISTRATION_RECORD** esi_1 = eax_3
    
    if (eax_3 != ebx)
        do
            (*esi_1)->Next(0)
            esi_1 = &esi_1[2]
        while (esi_1 != ebx)
    
    arg1[1] = eax_3
else if (ecx_2 u< 7)
    sub_684840(arg1, 7 - ecx_2)
    int32_t var_8_1 = 0
    struct graphengined3d11::CBlendState::VTable** ecx_7 = arg1[1]
    int32_t* var_2c_1 = arg1
    struct graphengined3d11::CBlendState::VTable** var_30 = ecx_7
    sub_6849b0(ecx_7, 7 - ((ecx_7 - *arg1) s>> 3))
    int32_t eax_12 = (arg1[1] - *arg1) s>> 3
    arg1[1] += (7 - eax_12) << 3
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_12

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
