// 函数: sub_70021b
// 地址: 0x70021b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t dwExceptionCode
__builtin_memcpy(&dwExceptionCode, 0x75381c, 0x20)
char* edi = arg2

if (edi != 0 && (*edi & 0x10) != 0)
    int32_t* ecx_2 = *arg1 - 4
    void* eax_1 = *ecx_2
    int32_t esi_1 = *(eax_1 + 0x20)
    edi = *(eax_1 + 0x18)
    j_sub_4033e0()
    esi_1(ecx_2)

int32_t* var_c = arg1
char* var_8 = edi
uint32_t arguments

if (edi != 0 && (*edi & 8) != 0)
    arguments = 0x1994000

uint32_t dwExceptionFlags
uint32_t nNumberOfArguments
RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, &arguments)
noreturn
