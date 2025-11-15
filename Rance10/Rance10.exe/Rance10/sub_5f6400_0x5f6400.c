// 函数: sub_5f6400
// 地址: 0x5f6400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result_1 = arg1
void* ebx = nullptr
int32_t* result_2 = (*(*arg1 + 8))()

if (result_2 s> 0)
    do
        int32_t* ecx = *(arg2 + 0x24)
        int32_t eax_3
        int32_t edx
        edx:eax_3 = sx.q(result_2 + ebx)
        int32_t* result = (eax_3 - edx) s>> 1
        result_1 = result
        
        if (ecx == 0)
            sub_6d090a()
            noreturn
        
        int32_t eax_6 = (*(*ecx + 8))(&result_1)
        
        if (eax_6 == 0)
            return result
        
        if (eax_6 s>= 0)
            result_2 = result
        else
            ebx = result + 1
    while (ebx s< result_2)

return 0xffffffff
