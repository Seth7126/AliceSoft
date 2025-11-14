// 函数: sub_64b210
// 地址: 0x64b210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

__chkstk(0x1008)
int32_t eax_1 = __security_cookie ^ &__return_addr
void* edx = arg2
char arg_4
char* eax_2 = &arg_4
__return_addr = nullptr

if (*(edx + 0x14) u>= 0x10)
    edx = *edx

for (char i = *edx; i != 0; i = *edx)
    if ((i u< 0x81 || i u> 0x9f) && (i u< 0xe0 || i u> 0xef))
        if (i != 0xa)
            *eax_2 = i
            eax_2 = &eax_2[1]
        else
            *eax_2 = 0xd
            eax_2[1] = *edx
            eax_2 = &eax_2[2]
        
        edx += 1
    else
        *eax_2 = i
        eax_2[1] = *(edx + 1)
        eax_2 = &eax_2[2]
        edx += 2

*eax_2 = 0
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
void* ecx

if (arg_4 != 0)
    char* ecx_1 = &arg_4
    
    do
        eax_2.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_2.b != 0)
    
    void arg_5
    ecx = ecx_1 - &arg_5
else
    ecx = nullptr

sub_402110(arg1, &arg_4, ecx)
sub_69a5bc(eax_1 ^ &__return_addr)
return arg1
