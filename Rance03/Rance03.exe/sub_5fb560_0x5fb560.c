// 函数: sub_5fb560
// 地址: 0x5fb560
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = arg2
int32_t ecx = arg1[1]
int32_t eax

if (esi u< ecx)
    eax = *arg1

if (esi u< ecx && eax u<= esi)
    if (ecx == arg1[2])
        int32_t var_10_1 = ecx
        sub_5fb5d0(arg1)
    
    esi = *arg1 + (esi - eax) s/ 0x78 * 0x78
else if (ecx == arg1[2])
    int32_t var_10_2 = ecx
    sub_5fb5d0(arg1)

int32_t edi = arg1[1]

if (edi != 0)
    __builtin_memcpy(edi, esi, 0x78)

arg1[1] += 0x78
