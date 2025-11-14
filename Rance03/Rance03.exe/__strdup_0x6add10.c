// 函数: __strdup
// 地址: 0x6add10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == 0)
    return 0

void* edi = _strlen(arg1) + 1
char* result = _malloc(edi)

if (result == 0)
    return nullptr

if (_strcpy_s(result, edi, arg1) == 0)
    return result

int32_t var_20
__builtin_memset(&var_20, 0, 0x14)
__invoke_watson()
noreturn
