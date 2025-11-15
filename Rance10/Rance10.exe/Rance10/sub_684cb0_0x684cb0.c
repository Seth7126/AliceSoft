// 函数: sub_684cb0
// 地址: 0x684cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* result

if (*(arg1 + 4) == 0)
    result.b = 0
    return result

int32_t ecx_1 = *(arg1 + 0xc) - *(arg1 + 8)
int32_t* edx = *(arg1 + 8)
int32_t* esi = arg2
int32_t i_1 = ecx_1 - 4

if (ecx_1 u>= 4)
    int32_t i
    
    do
        if (*edx != *esi)
            goto label_684ceb
        
        edx = &edx[1]
        esi = &esi[1]
        i = i_1
        i_1 -= 4
    while (i u>= 4)

if (i_1 != 0xfffffffc)
label_684ceb:
    result.b = *edx
    
    if (result.b != *esi)
        (*(*arg3 + 0xc0))(arg3, *(arg1 + 4), 0, 0, arg2, 0, 0)
        sub_700660(*(arg1 + 8), arg2, *(arg1 + 0xc) - *(arg1 + 8))
    else if (i_1 != 0xfffffffd)
        result.b = *(edx + 1)
        
        if (result.b != *(esi + 1))
            (*(*arg3 + 0xc0))(arg3, *(arg1 + 4), 0, 0, arg2, 0, 0)
            sub_700660(*(arg1 + 8), arg2, *(arg1 + 0xc) - *(arg1 + 8))
        else if (i_1 != 0xfffffffe)
            result.b = *(edx + 2)
            
            if (result.b != *(esi + 2))
                (*(*arg3 + 0xc0))(arg3, *(arg1 + 4), 0, 0, arg2, 0, 0)
                sub_700660(*(arg1 + 8), arg2, *(arg1 + 0xc) - *(arg1 + 8))
            else if (i_1 != 0xffffffff)
                result.b = *(edx + 3)
                
                if (result.b != *(esi + 3))
                    (*(*arg3 + 0xc0))(arg3, *(arg1 + 4), 0, 0, arg2, 0, 0)
                    sub_700660(*(arg1 + 8), arg2, *(arg1 + 0xc) - *(arg1 + 8))

result.b = 1
return result
