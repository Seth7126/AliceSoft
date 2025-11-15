// 函数: ?Sweep@details@Concurrency@@YAPAVEventWaitNode@12@PAV312@_N@Z
// 地址: 0x6e9c02
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
int32_t* result = nullptr

if (esi != 0)
    int32_t* i
    
    do
        i = *esi
        char eax_1
        
        if (arg2 == 0)
            eax_1 = sub_6e9c3c(esi)
        else
            eax_1 = sub_6e9c86(esi)
        
        if (eax_1 != 0)
            *esi = result
            result = esi
        
        esi = i
    while (i != 0)

return result
