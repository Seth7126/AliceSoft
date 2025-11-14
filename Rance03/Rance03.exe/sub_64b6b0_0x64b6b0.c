// 函数: sub_64b6b0
// 地址: 0x64b6b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

__chkstk(0x4004)
int32_t eax_1 = __security_cookie ^ &__return_addr
__return_addr.b = 0
_memset(&__return_addr:1, 0, 0x3fff)
void arg_400c
_vsprintf_s(&__return_addr, 0x4000, arg1, &arg_400c)
int32_t* lpCaption = &data_74f9cc

if (data_74f9e0 u>= 0x10)
    lpCaption = data_74f9cc

enum MESSAGEBOX_RESULT result = MessageBoxA(data_75d54c, &__return_addr, lpCaption, MB_OK)
sub_69a5bc(eax_1 ^ &__return_addr)
return result
