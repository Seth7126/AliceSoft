// 函数: sub_662320
// 地址: 0x662320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf8a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t var_24 = 0
int32_t* esi = arg5
int32_t var_4 = 0
void arg_10

if (edi != arg4 && esi != arg6)
    bool cond:1_1
    
    do
        int32_t eax_3 = esi[7]
        int32_t ecx = edi[7]
        
        if (eax_3 s< ecx || (eax_3 s<= ecx && *esi s< *edi))
            sub_662c20(&arg_10, esi)
            esi = &esi[0x30]
            cond:1_1 = esi != arg6
        else
            sub_662c20(&arg_10, edi)
            edi = &edi[0x30]
            cond:1_1 = edi != arg4
    while (cond:1_1)

int32_t var_4c = 0
int32_t var_48 = 0
int32_t var_44 = 0
int32_t var_40_3 = arg7
void var_20
int32_t eax_7 = sub_65e0c0(arg7, edi, &var_20, arg4, 0)[4]
sub_65afa0(&var_20)
int32_t var_4c_1 = 0
int32_t var_48_1 = 0
int32_t var_44_1 = 0
int32_t var_40_4 = eax_7
sub_65e0c0(eax_7, esi, arg3, arg6, 0)
sub_65afa0(&arg_10)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
