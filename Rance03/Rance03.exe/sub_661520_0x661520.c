// 函数: sub_661520
// 地址: 0x661520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf8e9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = arg2
int32_t var_14 = 0
int32_t var_4 = 0

for (int32_t* ebx = arg4; i != ebx; i = &i[0x30])
    void* edx = arg5
    int32_t* ecx = *(edx + 4)
    
    if (ecx u>= *(edx + 8))
        arg4 = ecx
        int32_t* var_10_1 = ecx
        var_4.b = 1
        
        if (ecx != 0)
            sub_65b030(ecx, i)
            edx = arg5
        
        var_4.b = 0
        *(edx + 4) += 0xc0
        *(arg5 + 8) = *(edx + 4)
    else
        *(edx + 4) = &ecx[0x30]
        sub_65dc20(ecx, i)

*arg3 = 0
arg3[1] = 0
arg3[2] = 0
arg3[3] = 0
arg3[4] = arg5
void arg_8
sub_65afa0(&arg_8)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
