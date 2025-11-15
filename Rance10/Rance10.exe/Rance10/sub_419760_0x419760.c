// 函数: sub_419760
// 地址: 0x419760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
int32_t eax = arg2
int32_t* esi = arg3
int32_t var_4 = eax

if (esi == eax)
    return arg4

int32_t* ebp = arg4
int32_t* ebx = &ebp[5]

do
    if (ebp != 0)
        *ebp = *esi
        ebx[1] = 0xf
        *ebx = 0
        ebx[-4].b = 0
        sub_4056a0(&ebx[-4], &esi[1])
        ebx[7] = 0xf
        ebx[6] = 0
        ebx[2].b = 0
        sub_4056a0(&ebx[2], &esi[7])
        eax = var_4
    
    esi = &esi[0xd]
    ebp = &ebp[0xd]
    ebx = &ebx[0xd]
while (esi != eax)

return ebp
