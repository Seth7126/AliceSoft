// 函数: sub_51f3d0
// 地址: 0x51f3d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_739110
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_403490(&arg1[0x30], 0x75d345, nullptr)
sub_403490(&arg1[0x36], 0x75d38b, nullptr)
struct textsurface::CTextSurfaceProperty::VTable* var_70
sub_6437f0(&var_70)
int32_t var_8_1 = 0
sub_520410(arg1, &var_70)
int32_t result_3
int32_t result_5 = result_3

if ((result_3.b & 1) != 0)
    result_5 = result_3 + 1

int32_t result_2 = result_3
float var_50
int32_t result_4 = int.d(sub_4a78b0(var_50))

if (result_4 s< result_2)
    result_2 = result_4

int32_t result_1 = result_2
int32_t result_6 = result_3
float var_54
int32_t result_8 = int.d(sub_4a78b0(var_54))

if (result_8 s< result_6)
    result_6 = result_8

int32_t* eax_6 = &result_1
int32_t result_7 = result_6
int32_t esi = arg1[0x42]

if (result_6 s>= result_2)
    eax_6 = &result_7

int32_t eax_9
int32_t edx
edx:eax_9 = sx.q(result_5 + (*eax_6 << 1))
int32_t result = (eax_9 + (edx & 3)) s>> 2
bool cond:1 = arg2[4] u<= 0
result_1 = result

if (not(cond:1))
    do
        result += esi
        
        if (arg3 s<= result)
            if (&arg1[0x36] != arg2)
                result = sub_403590(&arg1[0x36], arg2, 0, 0xffffffff)
            
            break
        
        void* var_2c
        sub_5201f0(&var_2c, arg2)
        var_8_1.b = 1
        sub_4055a0(&arg1[0x30], &var_2c, 0, 0xffffffff)
        int32_t result_9 = 0
        
        if (sub_641fe0(&var_70, &var_2c, &result_7) != 0)
            result_9 = result_7
        
        var_8_1.b = 0
        esi += arg1[0x6d] + result_9
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        result = result_1
    while (arg2[4] u> 0)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
