// 函数: sub_6949f0
// 地址: 0x6949f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 =
    &graphengined3d11::CVertexShader::`vftable'{for `common::NotifyRefCounter<class IInterface>'}
arg1[0xa] = arg1[9]
int32_t* ecx = arg1[8]

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    arg1[8] = 0

int32_t* ecx_1 = arg1[3]

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(ecx_1)
    arg1[3] = 0

int32_t result = arg1[4]
arg1[5] = result
void* ecx_2 = arg1[9]

if (ecx_2 != 0)
    result = sub_403160(ecx_2, (arg1[0xb] - ecx_2) s>> 2, 4)
    arg1[9] = 0
    arg1[0xa] = 0
    arg1[0xb] = 0

int32_t var_8_1 = 0
int32_t* ecx_3 = arg1[8]
arg1[7] = &graphengined3d11::CInputLayout::`vftable'

if (ecx_3 != 0)
    result = (*(*ecx_3 + 8))(ecx_3)
    arg1[8] = 0

void* ecx_4 = arg1[4]

if (ecx_4 != 0)
    result = sub_403160(ecx_4, arg1[6] - ecx_4, 1)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
