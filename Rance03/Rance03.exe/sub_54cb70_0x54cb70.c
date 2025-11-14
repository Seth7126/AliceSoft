// 函数: sub_54cb70
// 地址: 0x54cb70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result
int32_t edx_2
edx_2:result = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - *(arg1 + 0x30))
int32_t edx_3 = edx_2 s>> 3
void* var_28 = arg1
int32_t i_1 = (edx_3 u>> 0x1f) + edx_3

if (i_1 s> 0)
    result = 0
    int32_t ebx_2 = arg4 << 5
    int32_t ebp_2 = arg3 << 5
    int32_t edx_4 = 0
    arg3 = 0
    arg4 = 0
    int32_t i
    
    do
        void* ecx_2 = *(*(arg1 + 0x30) + edx_4 + 0x24)
        void* esi_2 = *arg2 + result
        struct sealengine::CSQT::VTable* var_24
        struct sealengine::CSQT::VTable** eax_1 =
            sub_59bbc0(ecx_2 + ebp_2, arg5, &var_24, ecx_2 + ebx_2)
        arg1 = var_28
        edx_4 = arg4 + 0x30
        arg4 = edx_4
        *(esi_2 + 4) = *(eax_1 + 4)
        *(esi_2 + 0x14) = *(eax_1 + 0x14)
        *(esi_2 + 0x1c) = eax_1[7]
        result = arg3 + 0x20
        arg3 = result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
