// 函数: sub_5f6360
// 地址: 0x5f6360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
void* result = nullptr
int32_t* ebx = (*(*arg1 + 8))()

if (ebx s> 0)
    do
        int32_t* ecx = *(arg2 + 0x24)
        int32_t eax_3
        int32_t edx
        edx:eax_3 = sx.q(ebx + result)
        int32_t* esi_2 = (eax_3 - edx) s>> 1
        var_4 = esi_2
        
        if (ecx == 0)
            sub_6d090a()
            noreturn
        
        if ((*(*ecx + 8))(&var_4) s>= 0)
            ebx = esi_2
        else
            result = esi_2 + 1
    while (result s< ebx)

return result
