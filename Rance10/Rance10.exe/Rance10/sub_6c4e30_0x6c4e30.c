// 函数: sub_6c4e30
// 地址: 0x6c4e30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748ba1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_34 = arg1
int32_t var_8_1 = 0
int32_t var_30 = 0
arg1[4] = 0
arg1[5] = 0
arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
int32_t* var_38 = arg1
arg1[4] = 0
char* eax_3

if (cond:0)
    eax_3 = arg1
else
    eax_3 = *arg1

*eax_3 = 0
int32_t* eax_4 = sub_403490(arg1, 0x7830d8, 0x16)
int32_t var_8_2 = 0
void** i = *arg2
int32_t edi_1 = arg2[1]
int32_t var_30_1 = 1

for (; i != edi_1; i = &i[6])
    int32_t var_8_3 = 1
    void* var_2c
    sub_4055a0(arg1, sub_4175e0(eax_4, i, &var_2c, U"\n"), 0, 0xffffffff)
    var_8_3.b = 0
    int32_t* var_18
    eax_4 = var_18
    
    if (eax_4 u>= 0x10)
        eax_4 = sub_403160(var_2c, eax_4 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
