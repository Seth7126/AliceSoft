// 函数: sub_6b8550
// 地址: 0x6b8550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebp = arg1[7]

if (ebp == 0)
    return 0xffffff7f

void* eax_1 = sub_6b2ec0(arg2, 0x20)
*arg1 = eax_1

if (eax_1 != 0)
    return 0xffffff7a

arg1[1] = sub_6b2ec0(arg2, 8)
arg1[2] = sub_6b2ec0(arg2, 0x20)
arg1[3] = sub_6b2ec0(arg2, 0x20)
arg1[4] = sub_6b2ec0(arg2, 0x20)
arg1[5] = sub_6b2ec0(arg2, 0x20)
*ebp = 1 << sub_6b2ec0(arg2, 4)
int32_t esi_1 = 1 << sub_6b2ec0(arg2, 4)
ebp[1] = esi_1

if (arg1[2] s>= 1 && arg1[1] s>= 1)
    int32_t eax_10 = *ebp
    
    if (eax_10 s>= 0x40 && esi_1 s>= eax_10 && esi_1 s<= 0x2000 && sub_6b2ec0(arg2, 1) == 1)
        return 0

sub_6b8320(arg1)
return 0xffffff7b
