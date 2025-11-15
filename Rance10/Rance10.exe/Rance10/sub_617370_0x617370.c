// 函数: sub_617370
// 地址: 0x617370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg1[0x74]
int32_t esi = *eax_3
arg1[0x74] = &eax_3[1]
int32_t ecx = arg1[0x7f]
int32_t ebx = *(arg1[0x7e] + (ecx << 2) - 4)
arg1[0x7f] = ecx - 1
int32_t eax_7
int32_t edx
edx:eax_7 = muls.dp.d(0x38e38e39, arg1[0x31] - arg1[0x30])
int32_t edx_1 = edx s>> 4
void* result
void* esi_1

if (esi u< (edx_1 u>> 0x1f) + edx_1)
    result = arg1[0x30]
    esi_1 = result + esi * 0x48

if (esi u>= (edx_1 u>> 0x1f) + edx_1 || esi_1 == 0)
    void* result_2 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x76cb88, 0x34)
    int32_t var_8_1 = 0
    sub_612320(arg1, &var_2c)
    result = result_2
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, result + 1, 1)
else
    bool cond:0_1 = *(esi_1 + 0x44) != 2
    int32_t var_30 = ebx
    
    if (not(cond:0_1))
        void* result_1
        sub_61b380(esi_1, &result_1, &var_30)
        result = result_1
        
        if (result == *(esi_1 + 4))
            int32_t ecx_6 = *(esi_1 + 0x40)
            
            if (ecx_6 != 0xffffffff)
                result = arg1[0x75] + ecx_6
                arg1[0x74] = result
        else
            result = arg1[0x75] + *(result + 0xc)
            arg1[0x74] = result

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
