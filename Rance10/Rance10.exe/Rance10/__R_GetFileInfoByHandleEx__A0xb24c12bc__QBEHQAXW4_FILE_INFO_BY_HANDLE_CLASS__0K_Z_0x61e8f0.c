// 函数: ??R_GetFileInfoByHandleEx@?A0xb24c12bc@@QBEHQAXW4_FILE_INFO_BY_HANDLE_CLASS@@0K@Z
// 地址: 0x61e8f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a6bc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sys43vm::CMemoryFileCompress::`vftable'
int32_t* ecx = arg1[6]

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    arg1[6] = 0

int32_t* ecx_1 = arg1[4]

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    arg1[4] = 0

int32_t* ecx_2 = arg1[1]

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))(eax_2)

int32_t var_8_1 = 0
int32_t* ecx_3 = arg1[6]
arg1[5] = &sys43vm::CZlibCompressor::`vftable'

if (ecx_3 != 0)
    result = (*(*ecx_3 + 4))(eax_2)
    arg1[6] = 0

int32_t var_8_2 = 1
int32_t* ecx_4 = arg1[4]
arg1[3] = &sys43vm::CZlibDecompressor::`vftable'

if (ecx_4 != 0)
    result = (*(*ecx_4 + 4))(eax_2)
    arg1[4] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
