// 函数: sub_69b33a
// 地址: 0x69b33a
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* var_24 = nullptr
void* var_20
__builtin_memset(&var_20, 0, 0x1c)

if (arg2 == 0 || arg3 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

void* eax_2 = _strlen(arg2)
int32_t var_18_1 = 0x49
char* var_1c_1 = arg2
var_24 = arg2
var_20 = 0x7fffffff

if (eax_2 u<= 0x7fffffff)
    var_20 = eax_2

return arg1(&var_24, arg3, arg4, arg5)
