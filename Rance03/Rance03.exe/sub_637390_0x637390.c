// 函数: sub_637390
// 地址: 0x637390
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce646
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct decodeogg::COggFileStream::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct decodeogg::COggFileStream::VTable** var_10_1 = arg1
*arg1 = &decodeogg::COggFileStream::`vftable'
int32_t var_4 = 1
arg1[4] = arg1[3]
char* ecx = arg1[0xf]

if (ecx != 0)
    sub_6487c0(ecx)
    j__free(arg1[0xf])
    arg1[0xf] = 0

arg1[0x10].b = 0
sub_637bb0(&arg1[1])
int32_t eax_4 = arg1[3]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[3] = 0
    arg1[4] = 0
    arg1[5] = 0

sub_637bb0(&arg1[1])
int32_t result = j__free(arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
