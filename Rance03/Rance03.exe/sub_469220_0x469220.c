// 函数: sub_469220
// 地址: 0x469220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* result
int32_t edx
result, edx = __chkstk(0x4008)
int32_t eax_1 = __security_cookie ^ &__return_addr
__builtin_memset(&__return_addr, 0, 5)
char arg_4[0x4000]
_vsprintf_s(&arg_4, 0x4000, edx, *arg1)
sub_401f60(result, &arg_4)
sub_69a5bc(eax_1 ^ &__return_addr)
return result
