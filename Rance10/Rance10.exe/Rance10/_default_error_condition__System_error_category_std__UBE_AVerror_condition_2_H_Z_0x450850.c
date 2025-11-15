// 函数: ?default_error_condition@_System_error_category@std@@UBE?AVerror_condition@2@H@Z
// 地址: 0x450850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[0x47]
*arg1 =
    &chipmunk::CSprite::`vftable'{for `common::SuicideRefCounter<class common::detail::EmptyClass>'}

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    arg1[0x47] = 0

int32_t* ecx_1 = arg1[0x46]

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    arg1[0x46] = 0

int32_t* ecx_2 = arg1[5]

if (ecx_2 != 0)
    int32_t esi_1 = ecx_2[1]
    ecx_2[1] -= 1
    result = (**ecx_2)(esi_1 - 1)
    arg1[5] = 0

int32_t* ecx_3 = arg1[0x49]

if (ecx_3 != 0)
    result = (*(*ecx_3 + 4))(eax_2)
    arg1[0x49] = 0

int32_t* ecx_4 = arg1[0x48]

if (ecx_4 != 0)
    int32_t ebx_1 = ecx_4[1]
    ecx_4[1] -= 1
    result = (**ecx_4)(ebx_1 - 1)
    arg1[0x48] = 0

arg1[0x2e] = &common::CSize::`vftable'
arg1[7] = &common::CRect::`vftable'
arg1[0xb] = &common::CSize::`vftable'
arg1[8] = &common::CPoint::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
