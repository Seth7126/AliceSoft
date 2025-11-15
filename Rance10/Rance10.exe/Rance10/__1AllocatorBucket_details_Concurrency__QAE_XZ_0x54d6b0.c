// 函数: ??1AllocatorBucket@details@Concurrency@@QAE@XZ
// 地址: 0x54d6b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a6bc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *arg1

if (ecx != 0)
    int32_t edx_1 = ecx[1]
    ecx[1] -= 1
    result = (**ecx)(edx_1 - 1)
    *arg1 = 0
    arg1[5].b = 1

arg1[0xe] = &textsurface::CTextSurfaceProperty::`vftable'
arg1[6] = &common::CRect::`vftable'
arg1[0xa] = &common::CSize::`vftable'
arg1[7] = &common::CPoint::`vftable'
int32_t var_8_1 = 0
int32_t* ecx_1 = arg1[4]
arg1[3] = &partsengine::CGraph::`vftable'

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    arg1[4] = 0

int32_t var_8_2 = 1
int32_t* ecx_2 = arg1[2]
arg1[1] = &partsengine::CSurfaceFactory::`vftable'

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))(eax_2)
    arg1[2] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
