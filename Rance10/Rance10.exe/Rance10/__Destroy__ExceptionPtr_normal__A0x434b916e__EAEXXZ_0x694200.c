// 函数: ?_Destroy@_ExceptionPtr_normal@?A0x434b916e@@EAEXXZ
// 地址: 0x694200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 =
    &graphengined3d11::CVertexBuffer::`vftable'{for `common::NotifyRefCounter<class IVertexBuffer>'}
arg1[8] = arg1[7]
int32_t* ecx = arg1[3]

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    arg1[3] = 0

int32_t result = arg1[4]
arg1[5] = result
arg1[0xb] = 0
arg1[0xa] = 0
arg1[0xc].w = 0
void* ecx_1 = arg1[7]

if (ecx_1 != 0)
    result = sub_403160(ecx_1, arg1[9] - ecx_1, 1)
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

void* ecx_2 = arg1[4]

if (ecx_2 != 0)
    result = sub_403160(ecx_2, (arg1[6] - ecx_2) s>> 2, 4)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
