// 函数: sub_4f8440
// 地址: 0x4f8440
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = sub_4a8b80(data_75d4fc + 0x174, arg1)

if (eax == 0)
    eax.b = 0
    return eax

void* ecx_3 = sub_510300(*(eax + 0x34), arg2)
float xmm0 = *(ecx_3 + 0x20)
xmm0 - arg3
void* eax_1
eax_1:1.b =
    (xmm0 == arg3 ? 1 : 0) << 6 | (is_unordered.d(xmm0, arg3) ? 1 : 0) << 2 | (xmm0 < arg3 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
bool p_3

if (not(p_1))
    float xmm0_1 = *(ecx_3 + 0x24)
    xmm0_1 - arg4
    eax_1:1.b = (xmm0_1 == arg4 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, arg4) ? 1 : 0) << 2
        | (xmm0_1 < arg4 ? 1 : 0)
    p_3 = unimplemented  {test ah, 0x44}

if (p_1 || p_3)
    *(ecx_3 + 0x20) = arg3
    *(ecx_3 + 0x24) = arg4
    *(ecx_3 + 0x58) = 1

eax_1.b = 1
return eax_1
