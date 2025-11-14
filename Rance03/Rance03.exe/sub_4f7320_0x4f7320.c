// 函数: sub_4f7320
// 地址: 0x4f7320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = sub_4a8b80(data_75d4fc + 0x174, arg3)

if (eax == 0)
    eax.b = 0
    return eax

void* esi = *(eax + 0x34)
sub_510cf0(esi, 0xb, arg7)
void* eax_2 = *(*(esi + 0x28) + (arg7 << 2))

if (arg5 s>= 0 && arg6 s>= 0 && arg2 s>= 0 && arg4 s>= 0)
    *(eax_2 + 0x48) = arg2
    *(eax_2 + 0x4c) = arg4
    *(eax_2 + 0x50) = arg5
    *(eax_2 + 0x54) = arg6
    *(eax_2 + 0x58) = 1

eax_2.b = 1
return eax_2
