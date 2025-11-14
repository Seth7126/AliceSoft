// 函数: sub_4e7980
// 地址: 0x4e7980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = *(arg1 + 8)

if (arg2 s< ecx || *(arg1 + 4) + ecx s<= arg2)
    int32_t eax
    eax.b = 0
    return eax

int32_t* ebx = (*(arg1 + 0xc))[arg2 - ecx]

if (ebx == 0)
    int32_t* eax_4
    eax_4.b = 0
    return eax_4

int32_t* ecx_1 = *(arg1 + 0x20)

if (ecx_1 != 0)
    (**ecx_1)(ebx)

(*(ebx[1] + 0x6c))(*(arg1 + 0x1c))
(*(*ebx + 4))()
(*(arg1 + 0xc))[arg2 - ecx] = 0
void* ecx_4 = *(arg1 + 0x28)

if (ecx_4 != 0)
    sub_4e7c40(ecx_4, arg2)

int32_t* eax_8
eax_8.b = 1
return eax_8
