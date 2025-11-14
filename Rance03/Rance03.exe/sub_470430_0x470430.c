// 函数: sub_470430
// 地址: 0x470430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6b9720
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* edi = arg1
int32_t var_8_1 = 0
void** edx = *edi
char var_18 = 1
void** eax_3 = edx[1]
int32_t* arg_c

while (*(eax_3 + 0xd) == 0)
    edx = eax_3
    arg1.b = *arg_c u< eax_3[4]
    var_18 = arg1.b
    
    if (arg1.b == 0)
        eax_3 = eax_3[2]
    else
        eax_3 = *eax_3

int32_t var_2c = arg3
*arg2 = *sub_420680(edi, &arg_c, var_18, edx, arg1)
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
