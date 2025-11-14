// 函数: sub_65f810
// 地址: 0x65f810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf808
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg3
int32_t ebx = arg5
int32_t edi = arg6
int32_t var_4 = 0
int32_t eax_3 = ebx * 2
void var_20

if (eax_3 s<= edi)
    do
        int32_t var_40_1 = arg7
        int32_t* edx = &ebp[ebx * 0x30]
        int32_t* esi_1 = &edx[ebx * 0x30]
        int32_t var_50_1 = 0
        int32_t var_4c_1 = 0
        int32_t var_48_1 = 0
        int32_t var_44_1 = arg4
        arg4 = sub_661f00(arg4, ebp, &var_20, edx, edx, esi_1, 0)[4]
        sub_65afa0(&var_20)
        edi -= eax_3
        ebp = esi_1
    while (edi s>= eax_3)
    
    ebx = arg5

if (edi s> ebx)
    int32_t var_40_3 = arg7
    int32_t* edx_5 = &ebp[ebx * 0x30]
    int32_t var_50_2 = 0
    int32_t var_4c_3 = 0
    int32_t var_48_3 = 0
    int32_t var_44_3 = arg4
    sub_661f00(arg4, ebp, &var_20, edx_5, edx_5, arg2, 0)
else
    int32_t var_4c_2 = 0
    int32_t var_48_2 = 0
    int32_t var_44_2 = 0
    int32_t var_40_2 = arg4
    sub_65e0c0(arg4, ebp, &var_20, arg2, 0)

sub_65afa0(&var_20)
void arg_4
int32_t result = sub_65afa0(&arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
