// 函数: sub_423760
// 地址: 0x423760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7292af
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx_1 = data_7fcb3c

if (ecx_1 != 0)
    int32_t __saved_ebp
    (*(*ecx_1 + 4))(__security_cookie ^ &__saved_ebp)
    data_7fcb3c = 0

struct common::SuicideRefCounter<class IInterface>::advengine::CADVEngine::VTable** eax_4 =
    sub_6e810c(0x7c)
struct common::SuicideRefCounter<class IInterface>::advengine::CADVEngine::VTable** var_14_1 = eax_4
int32_t var_8_1 = 0
eax_4[1] = 1
*eax_4 = &advengine::CADVEngine::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
eax_4[2] = 0
eax_4[3].b = 0
eax_4[4] = 0
sub_427700(&eax_4[5])
eax_4[0x1e] = 0xf
struct advengine::CFunctionSyntax::VTable** result
result.b = 1
eax_4[0x1d] = 0
eax_4[0x19].b = 0
data_7fcb3c = eax_4
fsbase->NtTib.ExceptionList = ExceptionList
return result
