// 函数: ?NextList@?$Hash@PAV_TaskCollection@details@Concurrency@@PAV123@@details@Concurrency@@AAEPAUListNode@123@PAH@Z
// 地址: 0x6f3d19
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = *arg2

if (i s< *arg1)
    int32_t* eax_2 = arg1[2] + (i << 2)
    
    do
        if (*eax_2 != 0)
            *arg2 = i
            return *(arg1[2] + (i << 2))
        
        i += 1
        eax_2 = &eax_2[1]
    while (i s< *arg1)

return 0
