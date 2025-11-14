// 函数: sub_46ff10
// 地址: 0x46ff10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b96d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_34 = arg3
void** result_4 = sub_417ed0(arg3, arg2)
void** eax_5 = sub_4701b0(arg3, arg2)
void** result_2

if (result_4 != eax_5 && *(arg1 + 8) s> 0)
    void** result_3 = result_4
    result_2 = result_3
    
    do
        if ((*(**(result_3[0xa] + 4) + 0x18))(eax_4) != 0
                && (*(**(result_3[0xa] + 4) + 0x20))() u< *(arg1 + 8))
            sub_46f9b0(arg1, 0)
            goto label_46ffd3
        
        sub_418380(&result_2)
        result_3 = result_2
    while (result_3 != eax_5)

void** result

if (result_4 == eax_5 || *(arg1 + 0xc) != 0)
    sub_46f9b0(arg1, 0)
    int32_t var_58_3 = 0
    void** result_1 = sub_4730b0(*(arg1 + 4))
    result_2 = result_1
    
    if (result_1 == 0)
    label_46ffd3:
        result = nullptr
    else
        int32_t var_4 = 0
        int32_t var_2c
        int32_t* eax_17
        int32_t ecx_12
        eax_17, ecx_12 = sub_461410(sub_4702a0(&result_2, arg2, &var_2c, &result_2))
        int32_t* var_58_6 = eax_17
        void* var_5c_1 = &eax_17[4]
        sub_4702e0(var_34, &var_34, ecx_12)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        result = result_1
else
    sub_46f9b0(arg1, result_4[0xa])
    (*(**(result_4[0xa] + 4) + 0x14))(eax_4)
    result = result_4[0xa]

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
