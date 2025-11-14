// 函数: sub_608040
// 地址: 0x608040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ccd91
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct graphengine::CShaderArchive::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &graphengine::CShaderArchive::`vftable'
int32_t var_4 = 2
arg1[9] = arg1[8]
bool cond:0 = arg1[7] u< 0x10
arg1[6] = 0
char* eax_4

if (cond:0)
    eax_4 = &arg1[2]
else
    eax_4 = arg1[2]

*eax_4 = 0
sub_41fff0(&arg1[0xb])
int32_t* ecx_1 = arg1[0xd]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[0xd] = 0

arg1[1] = 0
int32_t** eax_6 = arg1[0xb]
sub_4200d0(&arg1[0xb], &var_10, *eax_6, eax_6)
j__free(arg1[0xb])
int32_t result = arg1[8]

if (result != 0)
    result = j__free(result)
    arg1[8] = 0
    arg1[9] = 0
    arg1[0xa] = 0

if (arg1[7] u>= 0x10)
    result = j__free(arg1[2])

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
