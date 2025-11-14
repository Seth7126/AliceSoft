// 函数: sub_6319e0
// 地址: 0x6319e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int16_t var_2e4
int32_t eax_1 = __security_cookie ^ &var_2e4
char eax_2 = (*(arg3 + 0x74)).b

if ((eax_2 & 1) == 0)
    sub_62a740(arg3, "missing IHDR")
    noreturn

if ((eax_2 & 4) != 0 || (eax_2 & 2) == 0)
    int32_t eax_9 = sub_62fcc0(arg3, arg4)
    
    if ((*(arg3 + 0x78) & 0x100000) == 0)
        sub_62a740(arg3, "out of place")
        noreturn
    
    char var_2dc[0xd8]
    sub_62a640(eax_9, &var_2dc, arg3, "out of place")
    int32_t* eax_10 = sub_62a550(arg3, &var_2dc)
    sub_69a5bc(eax_1 ^ &var_2e4)
    return eax_10

if (arg2 != 0 && (*(arg2 + 8) & 0x40) != 0)
    sub_62fcc0(arg3, arg4)
    int32_t* eax_3 = sub_62a7c0(arg3, "duplicate")
    sub_69a5bc(eax_1 ^ &var_2e4)
    return eax_3

uint32_t eax_4 = zx.d(*(arg3 + 0x148))
uint32_t ebx_1 = arg4 u>> 1

if (ebx_1 != eax_4 || ebx_1 u> 0x100)
    sub_62fcc0(arg3, arg4)
    int32_t* eax_8 = sub_62a7c0(arg3, "invalid")
    sub_69a5bc(eax_1 ^ &var_2e4)
    return eax_8

int32_t edi = 0
int16_t var_204[0x100]

if (ebx_1 != 0)
    do
        sub_62fc80(eax_4, &var_2e4, arg3, 2)
        int16_t eax_5 = var_2e4
        eax_4 = zx.d(eax_5:1.b)
        var_204[edi] = zx.w(eax_5.b) * 0x100 + eax_4.w
        edi += 1
    while (edi u< ebx_1)

int32_t eax_6 = sub_62fcc0(arg3, nullptr)

if (eax_6 == 0)
    eax_6 = sub_633fb0(&var_204, arg2, arg3, &var_204)

sub_69a5bc(eax_1 ^ &var_2e4)
return eax_6
