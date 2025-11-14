// 函数: sub_42ca60
// 地址: 0x42ca60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b52f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t var_1c = __security_cookie ^ &var_4c
void* ebx
void* var_50 = ebx
int32_t esi
int32_t var_54 = esi
int32_t edi
int32_t var_58 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_7 = (*(**(arg1 + 8) + 0x14))(arg2, __security_cookie ^ &var_58) + 1

if (eax_7 u> 6)
    sub_402110(arg3, 0x6dae60, 3)
else
    switch (eax_7)
        case 0
            sub_402670(arg3, "(empty)")
        case 1
            sub_402670(arg3, 0x6dae3c)
        case 2
            char* eax_10 = (***(arg1 + 0xc))((*(**(arg1 + 8) + 0x18))(arg2))
            
            if (eax_10 == 0)
                sub_402670(arg3, 0x6dae34)
            else
                sub_402670(arg3, eax_10)
                sub_405780(arg3, "()")
        case 3
            int32_t* eax_12 = (*(**(arg1 + 8) + 4))(arg2)
            
            if (eax_12 != 0)
                sub_402670(arg3, U""")
                sub_405780(arg3, (*(*eax_12 + 0x18))())
                sub_405780(arg3, U""")
            else
                sub_402670(arg3, """")
        case 4
            sub_42d0b0(arg1, arg2, arg3)
        case 5
            sub_401f60(&var_50, 0x6dae50)
            int32_t var_10_1 = 0
            void var_38
            sub_408340(arg3, sub_42d2d0(arg1, &var_38, (*(**(arg1 + 8) + 0x1c))(arg2), &var_50))
            sub_401fb0(&var_38)
            sub_401fb0(&var_50)
        case 6
            sub_402670(arg3, "delegate")

int32_t* result
result.b = 1
int32_t var_18
fsbase->NtTib.ExceptionList = var_18
int32_t var_20
sub_69a5bc(var_20 ^ &var_50)
return result
