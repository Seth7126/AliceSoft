// 函数: ?Satisfy@SingleWaitBlock@details@Concurrency@@UAE_NPAPAVContext@3@PAVEventWaitNode@23@@Z
// 地址: 0x6e99cd
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result

if (*(*(arg3 + 4) + 8) == 2)
label_6e9a02:
    
    if (arg2 == 0)
        int32_t esi_1 = *(**(arg1 + 4) + 0xc)
        j_sub_4033e0()
        esi_1()
    else
        *arg2 = *(arg1 + 4)
else
    int32_t* ecx_2 = *(arg3 + 4) + 8
    int32_t eax_1 = 0
    
    if (0 == *ecx_2)
        *ecx_2 = 1
    else
        eax_1 = *ecx_2
    
    if (eax_1 == 2)
        goto label_6e9a02
    
    result = arg2
    
    if (result != 0)
        *result = 0

result.b = 0
return result
