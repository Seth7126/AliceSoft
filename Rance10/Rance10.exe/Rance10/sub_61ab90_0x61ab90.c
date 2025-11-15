// 函数: sub_61ab90
// 地址: 0x61ab90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$_Mpunct@G@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t var_34 = 0
char var_44 = 0
int32_t var_8_1 = 0

if (sub_619a10(arg1, &var_44, "DG_STR_TO_METHOD") != 0)
    int32_t* eax_4 = arg1[0x74]
    int32_t ebx_1 = *eax_4
    arg1[0x74] = &eax_4[1]
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = muls.dp.d(0x4bda12f7, arg1[0x22] - arg1[0x21])
    int32_t edx_2 = edx_1 s>> 5
    int32_t ebx_2
    void* ebx_3
    
    if (ebx_1 u< (edx_2 u>> 0x1f) + edx_2)
        ebx_2 = ebx_1 * 0x6c
        ebx_3 = ebx_2 + arg1[0x21]
    
    if (ebx_1 u>= (edx_2 u>> 0x1f) + edx_2 || ebx_2 == neg.d(arg1[0x21]))
        sub_405d30(&arg1[0x7d], 0)
    else
        char var_2c
        sub_609ec0(&arg1[0x11], &var_2c, &var_44, ebx_3)
        var_8_1.b = 1
        void* var_48
        sub_60c2a0(&arg1[0x3e], &var_48, &var_2c)
        void* eax_10 = var_48
        int32_t esi_1
        
        if (eax_10 == arg1[0x3f])
            esi_1 = 0
        else
            esi_1 = *(eax_10 + 0x20)
            void* eax_11 = sub_609d60(&arg1[0x11], esi_1)
            
            if (eax_11 == 0)
                esi_1 = 0
            else if (sub_601340(ebx_3, eax_11) == 0)
                esi_1 = 0
        
        sub_405d30(&arg1[0x7d], esi_1)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
