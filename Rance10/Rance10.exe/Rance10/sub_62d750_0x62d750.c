// 函数: sub_62d750
// 地址: 0x62d750
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745119
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** i = arg2
float* result = arg1
float* result_1 = result
int32_t var_8_1 = 0
int32_t* var_48 = arg1
int32_t var_1c = 0
uint32_t var_18 = 0
sub_61b410(arg1, &var_18)
int32_t var_8_2 = 0
int32_t* ebx = &i[4]
int32_t eax_3 = *ebx
int32_t var_1c_1 = 1
int32_t eax_5
int16_t x87control
int80_t st0
st0, eax_5 = sub_721fd0(x87control, 
    _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_3)) f+ *((eax_3 u>> 0x1f << 3) + &data_79aa70)) / *result
        + 0.5f)
sub_630ef0(result, eax_5)

if (i[5] u>= 0x10)
    i = *i

int32_t eax_17

for (void* eax_7 = *ebx + i; i != eax_7; i += eax_17)
    char ecx_1 = *i
    
    if (ecx_1 u< 0x81)
        if (ecx_1 + 0x20 u> 0xf)
            goto label_62d873
        
        goto label_62d81f
    
    if (ecx_1 u<= 0x9f || ecx_1 + 0x20 u<= 0xf)
    label_62d81f:
        int32_t* eax_10 = result[1]
        var_18 = zx.d(ecx_1) << 8 | zx.d(*(i + 1))
        int32_t* ebx_1 = *eax_10
        int32_t* eax_11 = sub_636070(ebx_1, ebx_1[1], &var_18)
        int32_t eax_12 = result[2]
        
        if (0x15555554 - eax_12 u< 1)
            sub_6d0927("list<T> too long")
            noreturn
        
        result[2] = eax_12 + 1
        ebx_1[1] = eax_11
        *eax_11[1] = eax_11
        int32_t* eax_15 = *result[1]
        void* var_2c
        sub_632690(result, &var_2c, &eax_15[2], eax_15)
        eax_17 = 2
    else
    label_62d873:
        int32_t* eax_18 = result[1]
        char var_11 = ecx_1
        int32_t* ebx_2 = *eax_18
        int32_t* eax_19 = sub_6360a0(ebx_2, ebx_2[1], &var_11)
        int32_t eax_20 = result[2]
        
        if (0x15555554 - eax_20 u< 1)
            sub_6d0927("list<T> too long")
            noreturn
        
        result[2] = eax_20 + 1
        ebx_2[1] = eax_19
        *eax_19[1] = eax_19
        int32_t* eax_23 = *result[1]
        void* var_34
        sub_632690(result, &var_34, &eax_23[2], eax_23)
        eax_17 = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
