// 函数: sub_4f74b0
// 地址: 0x4f74b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg3
void* eax = sub_4a8b80(data_75d4fc + 0x174, arg3)

if (eax == 0)
    eax.b = 0
    return eax

void* eax_1 = sub_5101c0(*(eax + 0x34), arg7)

if (*(eax_1 + 0x48) != arg2 || *(eax_1 + 0x4c) != arg4 || *(eax_1 + 0x50) != arg5
        || *(eax_1 + 0x54) != arg6)
    *(eax_1 + 0x48) = arg2
    *(eax_1 + 0x4c) = arg4
    *(eax_1 + 0x50) = arg5
    *(eax_1 + 0x54) = arg6
    *(eax_1 + 0x58) = 1

eax_1.b = 1
return eax_1
