// 函数: ?CancelCollection@ContextBase@details@Concurrency@@QAEXH@Z
// 地址: 0x6f3687
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x70) += 1
int32_t* edx = *(arg1 + 0x68)
int32_t* eax

while (edx == 0xffffffff || arg2 s<= edx)
    eax = edx
    
    if (eax == *(arg1 + 0x68))
        *(arg1 + 0x68) = arg2
    else
        eax = *(arg1 + 0x68)
    
    if (eax == edx)
        int32_t* eax_1
        
        if (*(arg1 + 0x74) == 0)
            eax_1 = arg2
        else
            eax_1 = 0xffffffff
        
        Concurrency::details::ContextBase::FlagCancellationBeacons(arg1, eax_1)
        break
    
    edx = eax

int32_t* edx_1 = *(arg1 + 0x6c)

while (edx_1 == 0xffffffff || arg2 s>= edx_1)
    eax = edx_1
    
    if (eax == *(arg1 + 0x6c))
        *(arg1 + 0x6c) = arg2
    else
        eax = *(arg1 + 0x6c)
    
    if (eax == edx_1)
        break
    
    edx_1 = eax
