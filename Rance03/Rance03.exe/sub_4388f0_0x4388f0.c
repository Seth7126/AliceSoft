// 函数: sub_4388f0
// 地址: 0x4388f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5f56
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct advengine::CTokenAnalyser::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct advengine::CTokenAnalyser::VTable** var_10_1 = arg1
*arg1 = &advengine::CTokenAnalyser::`vftable'
arg1[1] = arg2
arg1[2] = arg2
arg1[3] = arg2
arg1[4] = arg3
__builtin_memset(&arg1[5], 0, 0x1c)
int32_t var_4 = 0
var_4.b = 1
int32_t edi_1 = arg3 - arg2
sub_42f470(&arg1[9], edi_1)
char* eax_3 = nullptr
int32_t edx = 1

if (arg2 u> arg3)
    edi_1 = 0

if (edi_1 != 0)
    do
        arg1[9][eax_3].vFunc_0 = edx
        
        if (eax_3[arg2] == 0xa)
            edx += 1
        
        eax_3 = &eax_3[1]
    while (eax_3 != edi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
