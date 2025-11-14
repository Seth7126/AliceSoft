// 函数: sub_412d60
// 地址: 0x412d60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        sub_410700(arg1, 1)
    
    char* ecx_4 = arg1[1]
    
    if (ecx_4 != 0)
        sub_403000(ecx_4, arg2)
else
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x2aaaaaab, arg2 - eax)
    int32_t edx_2 = edx_1 s>> 2
    
    if (ecx == arg1[2])
        sub_410700(arg1, 1)
    
    char* ecx_2 = arg1[1]
    
    if (ecx_2 != 0)
        sub_403000(ecx_2, *arg1 + ((edx_2 u>> 0x1f) + edx_2) * 0x18)
        arg1[1] += 0x18
        return 

arg1[1] += 0x18
