// 函数: sub_427a60
// 地址: 0x427a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = __chkstk(0x4004)
int32_t eax_1 = __security_cookie ^ &__return_addr
__return_addr.b = 0
_memset(&__return_addr:1, 0, 0x3fff)
GetWindowTextA(*(ecx + 4), &__return_addr, 0x3fff)
void* ecx_1

if (__return_addr.b != 0)
    void* const* ecx_2 = &__return_addr
    char i
    
    do
        i = *ecx_2
        ecx_2 += 1
    while (i != 0)
    ecx_1 = ecx_2 - &__return_addr:1
else
    ecx_1 = nullptr

int32_t* result = sub_402110(arg1, &__return_addr, ecx_1)
sub_69a5bc(eax_1 ^ &__return_addr)
return result
