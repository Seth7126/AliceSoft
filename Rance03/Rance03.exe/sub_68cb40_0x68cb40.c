// 函数: sub_68cb40
// 地址: 0x68cb40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1748
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
int32_t ecx_2 = (arg2 - arg3) s/ 0x44
int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(ecx_2 + 1)
int32_t var_14 = (eax_5 - edx_2) s>> 1
int32_t* var_10 = &var_20
int32_t var_4 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result =
    sub_68d280(&var_20, arg2, arg3, ecx_2, &var_20, arg4)
int32_t var_4_1 = 0xffffffff
int32_t* esi_2 = var_20

if (esi_2 != 0)
    if (esi_2 != var_18)
        do
            (**esi_2)(0)
            esi_2 = &esi_2[0x11]
        while (esi_2 != var_18)
        
        esi_2 = var_20
    
    result = j__free(esi_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
