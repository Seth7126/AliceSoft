// 函数: sub_475f50
// 地址: 0x475f50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9e71
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::CSactSound::VTable** var_14 = arg1
*arg1 = &kiwi::CSactSound::`vftable'
int32_t var_4 = 2
sub_46e890(&arg1[0x25])
var_4.b = 1
arg1[0x1e] = &kiwi::CLowLevelChannelList::`vftable'
arg1[0x20] =
    &thread::CCriticalObject<class std::map<int32_t, class kiwi::CSoundChannel*> >::`vftable'
int32_t* ecx_1 = arg1[0x24]
arg1[0x23] = &thread::CCriticalSection::`vftable'

if (ecx_1 != 0)
    (**ecx_1)(1)

int32_t** eax_4 = arg1[0x21]
void var_10
sub_4200d0(&arg1[0x21], &var_10, *eax_4, eax_4)
j__free(arg1[0x21])
var_4.b = 0
sub_472f80(&arg1[0x16])
int32_t var_4_1 = 0xffffffff
arg1[1] = &kiwi::CSoundFileList::`vftable'
sub_4705b0(&arg1[0xf])
sub_4705b0(&arg1[8])
int32_t result = sub_4733a0(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
