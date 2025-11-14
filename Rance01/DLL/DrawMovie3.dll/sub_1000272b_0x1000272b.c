// 函数: sub_1000272b
// 地址: 0x1000272b
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_2c = edi
uint32_t dwExceptionCode
__builtin_memcpy(&dwExceptionCode, 0x1001a274, 0x20)
int32_t var_c = arg1
char* var_8 = arg2
uint32_t arguments

if (arg2 != 0 && (*arg2 & 8) != 0)
    arguments = 0x1994000

uint32_t dwExceptionFlags
uint32_t nNumberOfArguments
RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, &arguments)
noreturn
