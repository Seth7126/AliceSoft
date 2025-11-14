// 函数: sub_5ad920
// 地址: 0x5ad920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s>= 0)
    int32_t ebx_1 = *arg1
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x66666667, arg1[1] - ebx_1)
    int32_t edx_4 = edx_3 s>> 3
    
    if (arg2 s< (edx_4 u>> 0x1f) + edx_4)
        *(ebx_1 + arg2 * 0x14) = arg3
        void* ecx_1 = *arg1
        int32_t eax_4
        int32_t edx_8
        edx_8:eax_4 = muls.dp.d(0x66666667, arg1[1] - ecx_1)
        int32_t edx_9 = edx_8 s>> 3
        int32_t eax_7 = (edx_9 u>> 0x1f) + edx_9
        sub_5aeb20(eax_7, arg1[1], ecx_1, eax_7, 0)
        int32_t eax_8
        eax_8.b = 1
        return eax_8

int32_t eax
eax.b = 0
return eax
