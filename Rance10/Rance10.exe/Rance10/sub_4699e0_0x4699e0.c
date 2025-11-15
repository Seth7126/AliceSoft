// 函数: sub_4699e0
// 地址: 0x4699e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cd89
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_48 = arg1
int32_t var_4c = 0
arg1[4] = 0
arg1[5] = 0
arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
int32_t* var_54 = arg1
arg1[4] = 0
char* eax_3

if (cond:0)
    eax_3 = arg1
else
    eax_3 = *arg1

*eax_3 = 0
int32_t var_8_1 = 0
int32_t var_4c_1 = 1
int32_t eax_5 = (*(*arg2 + 8))(eax_2)
int32_t esi = 0

if (eax_5 s> 0)
    do
        void* const edx
        
        if (esi s>= 0)
            if ((*(*arg2 + 8))() s> esi)
                edx = *(arg2[1] + (esi << 2))
            else
                edx = nullptr
        else
            edx = nullptr
        
        void* var_44
        int32_t* edx_1 = sub_46a390(&var_44, edx)
        char* eax_10 = &data_75f500
        int32_t var_8_2 = 1
        
        if (esi == eax_5 - 1)
            eax_10 = &data_75ce0a
        
        var_8_2.b = 2
        char var_2c[0x10]
        sub_4055a0(arg1, sub_4176f0(eax_10.b, edx_1, &var_2c, eax_10), 0, 0xffffffff)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c[0].d, var_18 + 1, 1)
        
        var_8_2.b = 0
        var_18 = 0xf
        int32_t var_1c_1 = 0
        var_2c[0] = 0
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        esi += 1
    while (esi s< eax_5)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
