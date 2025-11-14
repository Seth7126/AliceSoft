// 函数: sub_64b530
// 地址: 0x64b530
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

__chkstk(0x4004)
int32_t eax_1 = __security_cookie ^ &__return_addr
__return_addr.b = 0
_memset(&__return_addr:1, 0, 0x3fff)
void arg_400c
_vsprintf_s(&__return_addr, 0x4000, arg1, &arg_400c)

if (data_75d548 == 0)
    int32_t* lpCaption = &data_74f9cc
    
    if (data_74f9e0 u>= 0x10)
        lpCaption = data_74f9cc
    
    MessageBoxA(data_75d54c, &__return_addr, lpCaption, 0x50000)
    enum MESSAGEBOX_RESULT eax_3
    eax_3.b = 0
    sub_69a5bc(eax_1 ^ &__return_addr)
    return eax_3

void* ecx

if (__return_addr.b != 0)
    void* const* ecx_1 = &__return_addr
    char i
    
    do
        i = *ecx_1
        ecx_1 += 1
    while (i != 0)
    ecx = ecx_1 - &__return_addr:1
else
    ecx = nullptr

sub_4057c0(&data_74f9e4, &__return_addr, ecx)
sub_4057c0(&data_74f9e4, "\n----------------\n", 0x12)
int32_t* eax_2
eax_2.b = 0
sub_69a5bc(eax_1 ^ &__return_addr)
return eax_2
