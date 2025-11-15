// 函数: sub_41beb0
// 地址: 0x41beb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
int32_t eax = arg2
int32_t* ebp = arg3
int32_t var_4 = eax

if (ebp == eax)
    return arg4

char* ebx = arg4
int32_t* esi = &ebx[0x28]

do
    if (ebx != 0)
        esi[-5] = 0xf
        esi[-6] = 0
        *ebx = 0
        sub_4056a0(ebx, ebp)
        esi[1] = 0xf
        *esi = 0
        esi[-4].b = 0
        sub_4056a0(&esi[-4], &ebp[6])
        esi[7] = 0xf
        esi[6] = 0
        esi[2].b = 0
        sub_4056a0(&esi[2], &ebp[0xc])
        eax = var_4
    
    ebp = &ebp[0x12]
    ebx = &ebx[0x48]
    esi = &esi[0x12]
while (ebp != eax)

return ebx
