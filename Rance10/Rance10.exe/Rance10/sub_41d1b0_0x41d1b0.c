// 函数: sub_41d1b0
// 地址: 0x41d1b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(*(arg1 + 4) + 4)

if (arg2 != 1)
    char eax_8
    
    if (ecx != 0)
        eax_8 = (*(*ecx + 0x10))()
    
    if (ecx == 0 || eax_8 != 0)
        int32_t* ecx_2 = *(*(arg1 + 4) + 4)
        
        if (ecx_2 != 0)
            (*(*ecx_2 + 4))()
else if (ecx != 0 && (*(*ecx + 0x10))() == 0)
    int32_t* ecx_1 = *(*(arg1 + 4) + 4)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 8))()

int32_t* ecx_3 = *(*(arg1 + 4) + 4)
void* eax_11

if (ecx_3 != 0)
    eax_11 = (*(*ecx_3 + 0x10))()
else
    eax_11.b = 1

WPARAM wParam
wParam.b = eax_11.b != 0
return SendMessageA(*(arg1 + 0xc), 0x805, wParam, 0)
