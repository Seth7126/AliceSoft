// 函数: sub_70051a
// 地址: 0x70051a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (arg1 != *(sub_702f40() + 0x24))
    void* ecx_1 = *(sub_702f40() + 0x24)
    
    while (true)
        if (*(ecx_1 + 4) == 0)
            _terminate()
            noreturn
        
        void* eax_3 = *(ecx_1 + 4)
        
        if (arg1 == eax_3)
            result = *(arg1 + 4)
            *(ecx_1 + 4) = result
            break
        
        ecx_1 = eax_3
else
    int32_t* ecx = sub_702f40() + 0x24
    result = *(arg1 + 4)
    *ecx = result

return result
