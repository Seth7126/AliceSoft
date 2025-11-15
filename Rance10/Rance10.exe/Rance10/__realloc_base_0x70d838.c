// 函数: __realloc_base
// 地址: 0x70d838
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_8 = edi

if (arg1 == 0)
    return __malloc_base(arg2)

if (arg2 != 0)
    if (arg2 u<= 0xffffffe0)
        int32_t i
        
        do
            int32_t result = HeapReAlloc(data_7fcae4, HEAP_NONE, arg1, arg2)
            
            if (result != 0)
                return result
            
            if (sub_712660() == 0)
                break
            
            i = __callnewh(arg2)
        while (i != 0)
    
    *__errno() = 0xc
else
    __free_base(arg1)

return 0
